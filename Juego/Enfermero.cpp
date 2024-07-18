#include "Enfermero.hpp"

CEnfermero::CEnfermero() : CPersonajes() {}

CEnfermero::CEnfermero(int x, int y, System::Drawing::Bitmap^ figura, int ancho, int largo) : CPersonajes(x, y, figura)
{
	this->limx = ancho;
	this->limy = largo;
	recuperados = 0;
	atender = false;
	vida = true;
	habi = nullptr;
}

CEnfermero::~CEnfermero() {}

void CEnfermero::no_seguir()
{
	this->habi = nullptr;
}

void CEnfermero::mover(Direccion tecla)
{
	int aux = 0;
	if (atender)
	{
		if (abs(x - habi->getX()) > 5)//valor absuluto - para calcular distancia
		{
			if (x < habi->getX())
			{
				this->dx = 5;
				this->dy = 0;
				this->indiceY = 2;
			}
			else
			{
				this->dx = -5;
				this->dy = 0;
				this->indiceY = 1;
			}
		}
		else
		{
			if (abs(y - habi->getY()) > 5)
			{
				if (y > habi->getY())
				{
					this->dx = 0;
					this->dy = -5;
					this->indiceY = 3;
				}
				else
				{
					this->dx = 0;
					this->dy = 5;
					this->indiceY = 0;
				}
			}
			else
			{
				if (habi->enfermo)
					this->recuperados++;
				habi->enfermo = false;//cura el enfermo
				this->atender = false;//ponerse al servicio del lider
				this->dx = 0;
				this->dy = 0;
				this->indiceY = 0;
				this->habi = nullptr;//no tiene enfermos que atender
			}
		}
	}
	//las columnas
	indiceX++;
	if (indiceX > 3)//indice de la figura es {0,1,2,3}
		indiceX = 0;
	//actualizar la posicion de la figura en el canvas

	x += dx;
	y += dy;
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
}


void CEnfermero::enfermo(CHabitantes* H)
{
	this->habi = H;
	this->atender = true;
}