#pragma once
using namespace System::Drawing;
class rectangulo
{
public:
	rectangulo(int, int, int, int);
	void pintar(Graphics^g);
	void mover(int, int);
	float arear();

private:

	int x;
	int y;
	int dx;
	int dy;
	int lado1;
	int lado2;

};

rectangulo::rectangulo(int x, int y, int lado1, int lado2)
{
	this->x = x;
	this->y = y;
	this->lado1 = lado1;
	this->lado2 = lado2;
	dx = 1;
	dy = 1;


}

void rectangulo::pintar(Graphics^g)
{
	g->FillRectangle(gcnew SolidBrush(Color::Indigo), x, y, lado1, lado2);

}
void rectangulo::mover(int ancho, int alto)
{
	if (x <= 0 || x + lado1 >= ancho)
		dx *= -1;
	if (y <= 0 || y + lado2 >= alto)
		dy *= -1;

	x += dx;
	y += dy;

}
float rectangulo::arear()
{

	return (lado1*lado2);
}