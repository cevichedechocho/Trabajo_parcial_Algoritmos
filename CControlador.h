#pragma once
#include "CAsterisco.h"
#include "CNumeros.h"
#include "CArrProyectil.h"

#ifndef CONTROLADOR_H
#define CONTROLADOR_H


class CControlador
{
private:
	int cant;
	CArrProyectil* arreglo;

public:
	CControlador();
	~CControlador();

	void Iniciar_Simulacion();

};
#endif

CControlador::CControlador()
{
	int cant = 0;
	arreglo = new CArrProyectil();
}

CControlador::~CControlador()
{
}

void CControlador::Iniciar_Simulacion()
{
	System::Console::SetWindowSize(90, 40);
	System::Console::CursorVisible = false;
	System::Random valor;
	int time = 0;

	while (true)
	{
		time++;

		//System::Console::SetCursorPosition(0, 0); cout << time;

		if (time % 4 == 0)
		{
			arreglo->push_back(new CNumeros());
		}
		else if(time %  30 == 0){
			arreglo->push_back(new CAsterisco());

		}


		arreglo->print();

		_sleep(100);
	}
	system("pause>0");
}
