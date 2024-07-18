#pragma once
#include "Virus.hpp"

CVirus::CVirus() : CPersonajes() {}

CVirus::CVirus(int x, int y, System::Drawing::Bitmap^ figura, int ancho, int largo) : CPersonajes(x, y, figura)
{
	this->limx = ancho;
	this->limy = largo;
	muertes = 0;
	atender = false;
	habi = nullptr;
}

CVirus::~CVirus() {}

//distancia entre dos puntos en el plano
double CVirus::distanciia(int posx, int posy, int posxx, int posyy)
{
	return sqrt(pow(posx - posxx, 2) + pow(posy - posyy, 2));
}
//verifica si esta dentro del escenario
bool CVirus::este(double xx, double yy)//verifica si esta dentro del escenario
{
	return ((xx > 40 && xx < this->limx - 40) && (yy > 40 && yy < this->limy - 40));
}
void CVirus::mover(Direccion tecla, int xx, int yy)
{

	int aux = 0;
	if (atender && habi != nullptr)
	{
		if (abs(x - habi->getX()) > 5)
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
				if (habi->atender)
				{
					muertes++;
					this->atender = false;
					this->dx = 0;
					this->dy = 0;
					this->indiceY = 0;
					this->habi->vida = false;//mata
					this->habi->atender = false;
				}
				else
				{
					this->atender = false;
				}

			}
		}
	}

	// se controla el radio de repulsion de los agentes, producido por el lider
	//si el agente queda dentro del radio del lider, no se movera
	if (distanciia(xx, yy, this->x, this->y) < 100)
	{
		int aux1, aux2;
		aux1 = 0;
		aux2 = 0;
		int cont = 0;
		while (cont < 20 && distanciia(xx, yy, this->x + aux1, this->y + aux2) < 100 && este(this->x + aux1, this->y + aux2))
		{
			cont++;
			aux1 = (rand() % 10 + 5);
			aux1 = aux1 * pow(-1, rand() % 10);
			aux2 = (rand() % 10 + 5);
			aux2 = aux2 * pow(-1, rand() % 10);

		}
		if (cont < 20)
		{
			this->x = this->x + aux1;
			this->y = this->y + aux2;
		}
	}

	//las columnas
	indiceX++;
	if (indiceX > 3)//indice de la figura es {0,1,2,3}
		indiceX = 0;
	//actualizar la posicion de la figura en el canvas
	//si el agente queda dentro del radio del lider, no se movera
	if (distanciia(xx, yy, this->x, this->y) > 100)
	{
		x += dx;
		y += dy;
	}

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
}


void CVirus::atacar(CEnfermero* H)
{
	this->habi = H;
	this->atender = true;
}
