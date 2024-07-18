#pragma once
#ifndef __BOLANIEVE_HPP__
#define __BOLANIEVE_HPP__

#include "Indicador.hpp"

class CBolaNieve : public CIndicador
{


public:
	bool visible;
	CBolaNieve();
	CBolaNieve(int x, int y, System::Drawing::Bitmap^ figura);
	~CBolaNieve();
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
	void mover();
	void dibujar(System::Drawing::BufferedGraphics^ g, System::Drawing::Bitmap^ figura);
};

#endif // !__BOLANIEVE_HPP__

