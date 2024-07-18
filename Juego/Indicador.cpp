#include "Indicador.hpp"

CIndicador::CIndicador()
{
	x = y = 100;
	dx = 0;
	dy = 1;//avance hacia abajo
	indiceX = indiceY = 0;
}
CIndicador::CIndicador(int x, int y, System::Drawing::Bitmap^ figura)
{
	this->x = x;
	this->y = y;
	dx = 0;
	dy = 0;//avance hacia abajo
	indiceX = indiceY = 0;
	ancho = figura->Width;
	alto = figura->Height;
}

CIndicador::~CIndicador() {}
void CIndicador::setX(int x) { this->x = x; }
int CIndicador::getX() { return this->x; }
void CIndicador::setY(int y) { this->y = y; }

void CIndicador::setdx(int y)
{
	this->dx = y;
}


void CIndicador::setdy(int y)
{
	this->dy = y;
}
int CIndicador::getY() { return this->y; }
int CIndicador::getAncho() { return this->ancho; }
int CIndicador::getAlto() { return this->alto; }
int CIndicador::getDX() { return this->dx; }
int CIndicador::getDY() { return this->dy; }

void CIndicador::dibujar(System::Drawing::BufferedGraphics^ g, System::Drawing::Bitmap^ figura)
{
	//establecer las dimensiones de recorte dentro del sprite
	System::Drawing::Rectangle recorte = System::Drawing::Rectangle(ancho * indiceX, alto * indiceY, ancho, alto);
	//definir las dimensiones del contenedor de la imagen dentro del canvas
	System::Drawing::Rectangle contenedor = System::Drawing::Rectangle(x, y, ancho, alto);

	g->Graphics->DrawImage(figura, contenedor, recorte, System::Drawing::GraphicsUnit::Pixel);
}
