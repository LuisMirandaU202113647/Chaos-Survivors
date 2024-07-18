#pragma once
#pragma once
#ifndef __DOCTOR_HPP__
#define __DOCTOR_HPP__

#include "Personaje.hpp"

class CDoctor : public CPersonajes
{
private:

public:
	CDoctor();
	CDoctor(int x, int y, System::Drawing::Bitmap^ figura, int lx, int ly);
	~CDoctor();
	void setdx(int y);
	void setdy(int y);

	void cambiarDireccion(Direccion tecla);
	bool mover(Direccion tecla);
};

#endif // !__DOCTOR_HPP__
