#include "Personaje.hpp"

CPersonajes::CPersonajes()
{
	x = y = 100;
	dx = 0;
	dy = 1;//avance hacia abajo
	indiceX = indiceY = 0;
}
CPersonajes::CPersonajes(int x, int y, System::Drawing::Bitmap^ figura)
{
	this->prueba = 4;
	this->x = x;
	this->y = y;
	dx = 0;
	dy = 0;//avance hacia abajo
	indiceX = indiceY = 0;
	ancho = figura->Width / 4;
	alto = figura->Height / 4;
}

CPersonajes::~CPersonajes() {}
void CPersonajes::setX(int x) { this->x = x; }
int CPersonajes::getX() { return this->x; }
void CPersonajes::setY(int y) { this->y = y; }
int CPersonajes::getY() { return this->y; }
int CPersonajes::getAncho() { return this->ancho; }
int CPersonajes::getAlto() { return this->alto; }
int CPersonajes::getDX() { return this->dx; }
int CPersonajes::getDY() { return this->dy; }

void CPersonajes::dibujar(System::Drawing::BufferedGraphics^ g, System::Drawing::Bitmap^ figura)
{
	//establecer las dimensiones de recorte dentro del sprite
	System::Drawing::Rectangle recorte = System::Drawing::Rectangle(ancho * indiceX, alto * indiceY, ancho, alto);
	//definir las dimensiones del contenedor de la imagen dentro del canvas
	System::Drawing::Rectangle contenedor = System::Drawing::Rectangle(x, y, ancho, alto);

	g->Graphics->DrawImage(figura, contenedor, recorte, System::Drawing::GraphicsUnit::Pixel);
}
