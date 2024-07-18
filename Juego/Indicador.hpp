#pragma once
#ifndef __INDICADOR_HPP__
#define __INDICADOR_HPP__

#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string>

#define num 20 // el numero de personas
#define timee 1000

using namespace std;
enum Direccion { Arriba, Abajo, Izquierda, Derecha, Ninguno };

class CIndicador
{
private:
public:
	int indiceX; //indice del sprite
	int indiceY; //indice de las figuras del sprite
	int x; //posicion del personaje dentro del canvas
	int y; //posicion del personaje dentro del canvas
	int ancho; //ancho del personaje
	int alto; //altura del personaje
	int dx; //para el desplazamiento de x
	int dy; //para el desplazamiento de y

	CIndicador();
	CIndicador(int x, int y, System::Drawing::Bitmap^ figura);
	~CIndicador();
	void setX(int x);
	int getX();
	void setY(int y);
	void setdx(int y);
	void setdy(int y);
	int getY();
	int getAncho();
	int getAlto();
	int getDX();
	int getDY();
	void dibujar(System::Drawing::BufferedGraphics^ g, System::Drawing::Bitmap^ figura);
};

#endif // !__INDICADOR_HPP__

