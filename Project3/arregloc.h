#pragma once
#include "circulo.h"
#include "vector"
using namespace std;
class arregloc
{
public:
	arregloc();
	void agregar(circulo *nuevo);
	void movert(Graphics^g, int alto, int ancho);
private:

	vector<circulo*>arreglo;
};

arregloc::arregloc()
{
}

void arregloc::agregar(circulo *nuevo)
{
	arreglo.push_back(nuevo);

}

void arregloc::movert(Graphics^g, int ancho, int alto)
{
	for (int i = 0; i < arreglo.size(); i++)
	{

		arreglo.at(i)->pintar(g);
		arreglo.at(i)->mover(ancho, alto);


	}


}