#pragma once
#include "rectangulo.h"
#include "vector"
using namespace std;
class arreglor
{
public:
	arreglor();
	void agregar(rectangulo *nuevo);
	void moverr(Graphics^g, int alto, int ancho);

private:

	vector<rectangulo*>arreglo;
};

arreglor::arreglor()
{

}

void arreglor::agregar(rectangulo *nuevo)
{
	arreglo.push_back(nuevo);

}

void arreglor::moverr(Graphics^g, int ancho, int alto)
{
	for (int i = 0; i < arreglo.size(); i++)
	{

		arreglo.at(i)->pintar(g);
		arreglo.at(i)->mover(ancho, alto);


	}


}

