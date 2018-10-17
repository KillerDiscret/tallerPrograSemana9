#pragma once
using namespace System::Drawing;
class circulo
{
public:
	circulo(int, int, int, int);
	void pintar(Graphics^g);
	void mover(int, int);
	float areac();

private:

	int x;
	int y;
	int dx;
	int dy;
	int radio1;
	int radio2;

};

circulo::circulo(int x, int y, int radio1, int radio2)
{
	this->x = x;
	this->y = y;
	this->radio1 = radio1;
	this->radio2 = radio2;
	dx = 1;
	dy = 1;


}

void circulo::pintar(Graphics^g)
{
	g->FillEllipse(gcnew SolidBrush(Color::DarkKhaki), x, y, radio1, radio2);

}
void circulo::mover(int ancho, int alto)
{
	if (x <= 0 || x + radio1 >= ancho)
		dx *= -1;
	if (y <= 0 || y + radio2 >= alto)
		dy *= -1;

    x += dx;
	y += dy;
}

float circulo::areac()
{
	return (3.1416*radio1*radio2);


}

