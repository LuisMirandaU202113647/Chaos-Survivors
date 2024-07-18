#pragma once
#ifndef __FONDO_HPP__
#define __FONDO_HPP__

#include "BolaNieve.hpp"

class CFondo : public CIndicador
{

public:
	CFondo();
	CFondo(int x, int y, System::Drawing::Bitmap^ figura);
	~CFondo();
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

#endif // !__FONDO_HPP__


