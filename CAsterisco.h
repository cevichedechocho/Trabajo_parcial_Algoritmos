#pragma once
#include <iostream>
#include "CProyectil.h"

class CAsterisco : public CProyectil
{

public:
	CAsterisco();
	~CAsterisco();

	void dibujar();


};


CAsterisco::CAsterisco()
{
}

CAsterisco::~CAsterisco()
{
}

void CAsterisco::dibujar()
{
	System::Console::SetCursorPosition(x, y); cout << "*";
}
