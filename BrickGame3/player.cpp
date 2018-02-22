#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <conio.h>
#include "player.h"
#include <time.h>
#include "menu.h"

menu xd;
//CUANDO EL CARRO CHOQUE TRES VECES ENTONCES VOLVERÁ AL MENÚ PRINCIPAL, PARA ELLO PODRÍA USAR system("cls") Y
//Y LLAMAR AL MENÚ PRINCIPAL #include "player.h"
using namespace std;

int player::play()
{
	int perdistes = 0;
	void Limpiador();

	char map[25][25];

	
	for (int i = 0; i < 20; ++i) {
		for (int j = 0; j < 20; ++j) {
			map[i][0] = '|';
			map[i][18] = '|';
			map[i][j] = ' ';
		}
	}

	int y = 17, x = 9; 
	srand(time(0));
	int a = 0, b = rand() % 15 + 2; 
	int points = 0; 
	int speed = 80;
	

	
	bool comenzar = true;

	char Contrincante = 'H';

	char car = 'D';
	map[y][x] = car;
	
	for (;;) {
		Limpiador();
		
		map[y][x] = 'X';
		map[y][x + 1] = '|';
		map[y][x - 1] = '|';
		map[y + 1][x - 1] = 'o';
		map[y + 1][x + 1] = 'o';
		map[y - 1][x - 1] = 'o';
		map[y - 1][x + 1] = 'o';

		
		map[a][b] = ' ';
		map[a][b] = ' ';
		map[a][b + 1] = ' ';
		map[a][b - 1] = ' ';
		map[a + 1][b - 1] = ' ';
		map[a + 1][b + 1] = ' ';
		map[a - 1][b - 1] = ' ';
		map[a - 1][b + 1] = ' ';
		++a;
		map[a][b] = Contrincante;
		map[a][b + 1] = Contrincante;
		map[a][b - 1] = Contrincante;
		map[a + 1][b - 1] = Contrincante;
		map[a + 1][b + 1] = Contrincante;
		map[a - 1][b - 1] = Contrincante;
		map[a - 1][b + 1] = Contrincante;
		if (a > 20) {
			a = 0;
			b = rand() % 15 + 2;
		}
		//displays the map
		for (int i = 0; i < 20; ++i) {
			for (int j = 0; j < 20; ++j) {
				cout << map[i][j];
				if (j >= 19) {
					cout << endl;
				}
			}
		}
		cout << "    Points: " << points;
		
		if (comenzar) {
			_getch();
			comenzar = false;
		}
	
		if (GetAsyncKeyState(VK_LEFT)) {
			if (map[y][x - 3] == Contrincante) {
				goto lost;
				
			}
			else if (map[y][x - 3] != '|') {
				map[y][x] = ' ';
				map[y][x + 1] = ' ';
				map[y][x - 1] = ' ';
				map[y + 1][x - 1] = ' ';
				map[y + 1][x + 1] = ' ';
				map[y - 1][x - 1] = ' ';
				map[y - 1][x + 1] = ' ';
				x -= 3;
				map[y][x] = 'X';
				map[y][x + 1] = '|';
				map[y][x - 1] = '|';
				map[y + 1][x - 1] = 'o';
				map[y + 1][x + 1] = 'o';
				map[y - 1][x - 1] = 'o';
				map[y - 1][x + 1] = 'o';
				points++;
			}
		}
		//moves the car to the right
		if (GetAsyncKeyState(VK_RIGHT)) {
			if (map[y][x + 3] == Contrincante) {
				goto lost;
				
			}
			else if (map[y][x + 3] != '|') {
				map[y][x] = ' ';
				map[y][x + 1] = ' ';
				map[y][x - 1] = ' ';
				map[y + 1][x - 1] = ' ';
				map[y + 1][x + 1] = ' ';
				map[y - 1][x - 1] = ' ';
				map[y - 1][x + 1] = ' ';
				x += 3;
				map[y][x] = 'H';
				map[y][x + 1] = '°';
				map[y][x - 1] = '°';
				map[y + 1][x - 1] = 'O';
				map[y + 1][x + 1] = 'O';
				map[y - 1][x - 1] = 'O';
				map[y - 1][x + 1] = 'O';
				points++;
			}
		}
		
		if (map[y - 2][x] == Contrincante || map[y - 2][x - 1] == Contrincante ||map[y - 2][x + 1] == Contrincante) {
		lost:
			
			
			for (int g = 0; g < 3; g++) {
				cout << "\n\nPERDISTES!\n" << endl;
				++perdistes;

			}
			if (perdistes > 3) {
				system("cls");
				xd.Menul();
				
			}
			else {
				comenzar;
				play();
			}
			
		}
		
		
			
		}
		
		
		if (points == 20)
			speed = 800;
		if (points == 40)
			speed = 65;
			if(points == 60)
				speed = 85;
				if( points == 80) {
			speed -= 15;
		}
		Sleep(speed);
	}
	







void Limpiador()
{
	HANDLE hOut;
	COORD Position;

	hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}
