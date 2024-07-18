#include "Fondo.hpp"

CFondo::CFondo()
{
	x = y = 100;
	dx = 0;
	dy = 1;//avance hacia abajo
	indiceX = indiceY = 0;
}
CFondo::CFondo(int x, int y, System::Drawing::Bitmap^ figura)
{
	this->x = x;
	this->y = y;
	dx = 0;
	dy = 0;//avance hacia abajo
	indiceX = indiceY = 0;
	ancho = figura->Width;
	alto = figura->Height;
}

CFondo::~CFondo() {}
void CFondo::setX(int x) { this->x = x; }
int CFondo::getX() { return this->x; }
void CFondo::setY(int y) { this->y = y; }

void CFondo::setdx(int y)
{
	this->dx = y;
}

void CFondo::setdy(int y)
{
	this->dy = y;
}

int CFondo::getY() { return this->y; }
int CFondo::getAncho() { return this->ancho; }
int CFondo::getAlto() { return this->alto; }
int CFondo::getDX() { return this->dx; }
int CFondo::getDY() { return this->dy; }

void CFondo::dibujar(System::Drawing::BufferedGraphics^ g, System::Drawing::Bitmap^ figura)
{
	//establecer las dimensiones de recorte dentro del sprite
	System::Drawing::Rectangle recorte = System::Drawing::Rectangle(ancho * indiceX, alto * indiceY, ancho, alto);
	//definir las dimensiones del contenedor de la imagen dentro del canvas
	System::Drawing::Rectangle contenedor = System::Drawing::Rectangle(x, y, ancho, alto);

	g->Graphics->DrawImage(figura, contenedor, recorte, System::Drawing::GraphicsUnit::Pixel);
}
