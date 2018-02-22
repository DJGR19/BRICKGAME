#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <stdio.h>
#include "menu.h"
#include "Manual.h"
using namespace std;

int Manual::manuald()
{
	

	menu x;
	int options2;
	cout << "            **********MANUAL DE USUARIO BRICK GAME****************\n";
	cout << "Este es un clásico juego de carreras formado a partir de ladrillos, \n"
		<< "en donde un auto (Usuario) rebasa otros autos en una pista de al \n"
		<< "menos dos carriles, donde los autos van a velocidad constante a \n"
		<< "medida que se aumenta de nivel. \n"
		<< "La misión del juego es evitar chocar con los otros autos de la \n"
		<< "pista a lo largo de la carrera, tratando de sobrevivir el mayor \n"
		<< "tiempo posible obteniendo una puntuación alta. \n"
		<< "            *****************INDICACIONES*************************\n"
		<< "*Use las flechas direccionales de su teclado para hacer mover el carro \n"
		<< "para acelerar solo presione la flecha que direcciona hacia arriba. \n"
		<< "*Evite chocar con los otros autos que vienen en sentido contrario al \n"
		<< " suyo ya que si lo hace perderá, recuerde que solo tiene tres vidas. \n"
		<< "*Su puntuación dependerá del nivel, velocidad y el número de autos revasados \n"
		<< "*Por cada auto rebasado la puntuación será diferente por velocidad: \n"
		<< "*Velocidad --- Puntuación\n"
		<< " 1         20\n"
		<< " 2         40\n"
		<< " 3         60\n"
		<< " 4         80\n"
		<< " 5         100\n"
		<< " 6         130\n"
		<< " 7         170\n"
		<< " 9         220\n"
		<< " 10        280\n";

	cout << "PRESIONE EL NUMERO 1 PARA VOLVER AL MENU PRINCIPAL ";


	cin >> options2;

	switch (options2)

	{
	case 1:

		system("cls");
		x.Menul();
		break;
	}


	
	return 0;
		
	
};



