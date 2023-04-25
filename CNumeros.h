#pragma once
#include <iostream>
#include "CProyectil.h"

class CNumeros : public CProyectil
{
private:
	char N;
public:
	CNumeros();
	~CNumeros();

	void dibujar();

};

CNumeros::CNumeros()
{
	System::Random valor;
	N = valor.Next(48, 56);
}

CNumeros::~CNumeros()
{
}

void CNumeros::dibujar() {

	System::Console::SetCursorPosition(x, y); cout << N;
}