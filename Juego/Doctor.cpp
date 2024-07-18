#include "Doctor.hpp"

CDoctor::CDoctor() :CPersonajes() {}

CDoctor::CDoctor(int x, int y, System::Drawing::Bitmap^ figura, int ancho, int largo) : CPersonajes(x, y, figura)
{
	this->limx = ancho;
	this->limy = largo;
}

CDoctor::~CDoctor() {}

void CDoctor::setdx(int y)
{
	this->dx = y;
}

void CDoctor::setdy(int y)
{
	this->dy = y;
}

void CDoctor::cambiarDireccion(Direccion tecla)
{
	switch (tecla)
	{
	case Arriba:
		this->dx = 0; this->dy = -5;
		break;
	case Abajo:
		this->dx = 0; this->dy = 5;
		break;
	case Izquierda:
		this->dx = -5; this->dy = 0;
		break;
	case Derecha:
		this->dx = 5; this->dy = 0;
		break;
	case Ninguno:
		this->dx = this->dy = 0;
		break;
	default:
		break;
	}
}
bool CDoctor::mover(Direccion tecla)
{
	bool aux = false;
	//establecer la fila del personaje a mostrar
	//para el corte de la figura
	if (tecla == Direccion::Arriba) this->indiceY = 3;
	if (tecla == Direccion::Abajo) this->indiceY = 0;
	if (tecla == Direccion::Izquierda) this->indiceY = 1;
	if (tecla == Direccion::Derecha) this->indiceY = 2;

	//las columnas
	indiceX++;
	if (indiceX > 2)//indice de la figura es {0,1,2,3}
		indiceX = 0;
	//actualizar la posicion de la figura en el canvas

	x += dx;
	y += dy;

	// limites del lider
	if (this->x > limx - 10)//pasarse del limite derecho vertical
	{
		this->x = this->x - this->dx;
	}
	if (this->x <= 0)//pasar el limete izquierdo vertical
	{
		this->x = this->x - this->dx;//aquí estamos haciendo una suma
	}
	if (this->y > limy - 30)//pasar el limite inferior horizantal 
	{
		this->y = this->y - this->dy;
	}
	if (this->y <= 0)//pasar el limete superior horizontal 
	{
		this->y = this->y - this->dy;//una suma -*-
	}
	return aux;
}
