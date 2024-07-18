#pragma once
#ifndef __ENFERMERO_HPP__
#define __ENFERMERO_HPP__

#include "Habitantes.hpp"

class CEnfermero : public CPersonajes
{
private:
	CHabitantes* habi;//El habitante al que tine que buscar y curar

public:
	int recuperados;
	bool atender; //si tiene que ir a ayudar a un habitante
	bool vida; // indica si esta vivo o muerto
	CEnfermero();
	CEnfermero(int x, int y, System::Drawing::Bitmap^ figura, int lx, int ly);
	~CEnfermero();
	void no_seguir();
	void mover(Direccion tecla);
	void enfermo(CHabitantes* H);
};

#endif // !__ENFERMERO_HPP__
