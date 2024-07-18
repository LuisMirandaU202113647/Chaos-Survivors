#pragma once
#ifndef __HABITANTES_HPP__
#define __HABITANTES_HPP__

#include "Doctor.hpp"

class CHabitantes : public CPersonajes
{
	bool HHombre;
public:
	int veces;//veces que se a enfermado
	bool protestar;

	CHabitantes();
	CHabitantes(int x, int y, System::Drawing::Bitmap^ figura, int lx, int ly);
	~CHabitantes();
	bool getHombre();
	bool enfermo;
	void mover(Direccion tecla);
	void mover2(Direccion tecla);
};

#endif // !__HABITANTES_HPP__

