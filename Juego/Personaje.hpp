#pragma once
#ifndef __PERSONAJES_HPP__
#define __PERSONAJES_HPP__

#include "Fondo.hpp"

public class CPersonajes
{
protected:
	int indiceX; //indice del sprite
	int indiceY; //indice de las figuras del sprite
	int x; //posicion del personaje dentro del canvas
	int y; //posicion del personaje dentro del canvas
	int ancho; //ancho del personaje
	int alto; //altura del personaje
	int dx; //para el desplazamiento de x
	int dy; //para el desplazamiento de y
	int prueba;
	int limx;
	int limy;

public:
	CPersonajes();
	CPersonajes(int x, int y, System::Drawing::Bitmap^ figura);
	~CPersonajes();

	void setX(int x);
	int getX();
	void setY(int y);
	int getY();
	int getAncho();
	int getAlto();
	int getDX();
	int getDY();
	void dibujar(System::Drawing::BufferedGraphics^ g, System::Drawing::Bitmap^ figura);

};

#endif // !__PERSONAJES_HPP__


