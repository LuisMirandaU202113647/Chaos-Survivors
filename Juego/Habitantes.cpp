#include "Habitantes.hpp"

CHabitantes::CHabitantes() : CPersonajes()
{
}
CHabitantes::CHabitantes(int x, int y, System::Drawing::Bitmap^ figura, int ancho, int largo) : CPersonajes(x, y, figura)
{
	this->limx = ancho;
	this->limy = largo;
	protestar = false;
	veces = 0;
	enfermo = false;
	dx = rand() % 10;
	dy = 0;//avance hacia abajo
	if (rand() % 100 < 50)
		HHombre = true;
	else
		HHombre = false;
}
CHabitantes::~CHabitantes() {}

bool CHabitantes::getHombre()
{
	return this->HHombre;
}

void CHabitantes::mover(Direccion tecla)
{
	if (rand() % 600 == 88 && !this->enfermo)
	{
		this->enfermo = true;
		veces++;
	}
	int aux = rand() % 100;
	if (aux < 10)
	{
		aux = rand() % 100;

		if (aux > 75)
		{
			this->dx = 5;
			this->dy = 0;
			this->indiceY = 2;
		}
		else
		{
			if (aux > 55)
			{
				this->dx = -5;
				this->dy = 0;
				this->indiceY = 1;
			}
			else
			{
				if (aux > 25)
				{
					this->dx = 0;
					this->dy = 5;
					this->indiceY = 0;
				}
				else
				{
					this->dx = 0;
					this->dy = -5;
					this->indiceY = 3;
				}
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
	//esta parte controla los limites del escenario
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

void CHabitantes::mover2(Direccion tecla)
{
	int auxx = 0;
	if (rand() % 600 == 88 && !this->enfermo)
	{
		this->protestar = true;
	}
	int aux = rand() % 100;
	if (aux < 10)
	{
		aux = rand() % 100;

		if (aux > 75)
		{
			this->dx = 5;
			this->dy = 0;
			this->indiceY = 2;
		}
		else
		{
			if (aux > 55)
			{
				this->dx = -5;
				this->dy = 0;
				this->indiceY = 1;
			}
			else
			{
				if (aux > 25)
				{
					this->dx = 0;
					this->dy = 5;
					this->indiceY = 0;
				}
				else
				{
					this->dx = 0;
					this->dy = -5;
					this->indiceY = 3;
				}
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
	//esta parte controla los limites del escenario
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
