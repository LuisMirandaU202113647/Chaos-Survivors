#pragma once
#pragma once
#ifndef __VIRUS_HPP__
#define __VIRUS_HPP__

#include "Enfermero.hpp"

//enum Direccion {Arriba,Abajo,Izquierda,Derecha,Ninguno};
class CVirus : public CPersonajes
{
private:
	CEnfermero* habi;//el aliado a matar
	CEnfermero* con;
public:
	bool atender;
	int muertes;
	CVirus();
	CVirus(int x, int y, System::Drawing::Bitmap^ figura, int lx, int ly);
	~CVirus();

	void mover(Direccion tecla, int xx, int yy);
	double distanciia(int posx, int posy, int posxx, int posyy);
	void atacar(CEnfermero* H);
	bool este(double xx, double yy);//verifica si esta dentro del escenario
};
#endif // !__VIRUS_HPP__
