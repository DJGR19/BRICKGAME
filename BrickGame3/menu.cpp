#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <stdio.h>
#include "player.h"
#include "Manual.h"
#include "menu.h"
using namespace std;
void menu::Menul()
{
	cout << "                \n **************** MENU BRICK GAME ******************\n";
	cout << "\n                 1.JUGAR";
	cout << "\n                 2.ESTADISTICAS";
	cout << "\n                 3.MANUAL DE USUARIO";
	cout << "\n                 4.SALIR\n";
	cout << "                 INGRESE UNA OPCION: \n";

}
	int main()
	{
		char d;
		Manual xd;
		player nuevo;
		int options = 0;
		int num;
		cout << "                \n **************** MENU BRICK GAME ******************\n";
		cout << "\n                 1.JUGAR";
		cout << "\n                 2.ESTADISTICAS";
		cout << "\n                 3.MANUAL DE USUARIO";
		cout << "\n                 4.SALIR\n";
		cout << "                 INGRESE UNA OPCION: \n";






		do {

			cin >> options;
			switch (options)

			{
			case 1:

				system("cls");
				nuevo.play();
				break;
			case 2:

				break;
			case 3:
				system("cls");
				xd.manuald();
				break;
			case 4:
				break;

			}
		} while (options != 4);


	}
