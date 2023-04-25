#pragma once
#include "CProyectil.h"
#include "CAsterisco.h"
#include "CNumeros.h"
#include "vector"
class CArrProyectil
{
private:
	vector<CProyectil*> arreglo;
	int n_proyectiles;
public:
	CArrProyectil();
	~CArrProyectil();

	void push_back(CProyectil* Obj);
	void print();

};

CArrProyectil::CArrProyectil()
{
	n_proyectiles = 0;
}

CArrProyectil::~CArrProyectil()
{
}

void CArrProyectil::push_back(CProyectil* Obj)
{
	arreglo.push_back(Obj);
}

void CArrProyectil::print()
{


	for (size_t i = 0; i < arreglo.size(); i++)
	{

		if (arreglo[i]->get_y() < 39)
		{
			arreglo[i]->borrar();
			arreglo[i]->mover();
			arreglo[i]->dibujar();
		}
		else
		{
			arreglo[i]->borrar();
		}
	
	}
}
