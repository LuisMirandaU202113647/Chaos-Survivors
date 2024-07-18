//BolaNieve.cpp:
#include "BolaNieve.hpp"

CBolaNieve::CBolaNieve()
{
	x = y = 100;
	dx = 0;
	dy = 1;//avance hacia abajo
	indiceX = indiceY = 0;
}
CBolaNieve::CBolaNieve(int x, int y, System::Drawing::Bitmap^ figura)
{
	visible = false;
	this->x = x;
	this->y = y;
	dx = 0;
	dy = -5;//avance hacia abajo
	indiceX = indiceY = 0;
	ancho = figura->Width / 4;
	alto = figura->Height;
}

CBolaNieve::~CBolaNieve() {}

void CBolaNieve::setX(int x) { this->x = x; }
int CBolaNieve::getX() { return this->x; }
void CBolaNieve::setY(int y) { this->y = y; }

void CBolaNieve::setdx(int y)
{
	this->dx = y;
}

void CBolaNieve::setdy(int y)
{
	this->dy = y;
}

int CBolaNieve::getY() { return this->y; }
int CBolaNieve::getAncho() { return this->ancho; }
int CBolaNieve::getAlto() { return this->alto; }
int CBolaNieve::getDX() { return this->dx; }
int CBolaNieve::getDY() { return this->dy; }

void CBolaNieve::dibujar(System::Drawing::BufferedGraphics^ g, System::Drawing::Bitmap^ figura)
{
	//establecer las dimensiones de recorte dentro del sprite
	System::Drawing::Rectangle recorte = System::Drawing::Rectangle(ancho * indiceX, alto * indiceY, ancho, alto);
	//definir las dimensiones del contenedor de la imagen dentro del canvas
	System::Drawing::Rectangle contenedor = System::Drawing::Rectangle(x, y, ancho, alto);

	g->Graphics->DrawImage(figura, contenedor, recorte, System::Drawing::GraphicsUnit::Pixel);
}

void CBolaNieve::mover()
{
	bool aux = false;
	//las columnas
	indiceX++;
	if (indiceX > 2)//indice de la figura es {0,1,2,3}
		indiceX = 0;
	//actualizar la posicion de la figura en el canvas
	x += dx;
	y += dy;
	// limites del Doctor
}

