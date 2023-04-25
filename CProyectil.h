#pragma once
#include <iostream>
using namespace std;

class CProyectil
{
public:
	CProyectil();
	~CProyectil();


	void mover();
	void borrar();
	virtual void dibujar();
	int get_y();

protected:
	int x, y;
	int dy;
};

CProyectil::CProyectil()
{
	System::Random valor;
	x = valor.Next(12, 81);
	y = 1;
	dy = 1;
}

CProyectil::~CProyectil()
{
}

void CProyectil::mover()
{
	if (y + dy < 40) y += dy;
}

void CProyectil::borrar()
{
	System::Console::SetCursorPosition(x, y); cout << " ";
}

void CProyectil::dibujar()
{
	cout << "hola";
}

int CProyectil::get_y()
{
	return y;
}


