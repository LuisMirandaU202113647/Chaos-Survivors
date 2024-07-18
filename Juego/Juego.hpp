#pragma once
#ifndef __JUEGO_HPP__
#define __JUEGO_HPP__
#include "Virus.hpp"
#include <fstream>
using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

class CJuego
{
private:
	CIndicador* winner;
	CDoctor* objDoctor;
	CFondo* fondo;
	CHabitantes** habitante;
	CEnfermero** Enf;
	CBolaNieve* BolaNievea;
	CVirus** virus;
	int NH; //numero de habitantes
	int NE;//numero de enfermeros
	int NV; //numero de virus
	int tiempo;
	bool escritura1, escritura2;
public:
	//son publicas para evitar tener varios set y get
	int Nenfermos;
	int Nhabitantes;
	int NEnfermero;
	int NVirus;
	int Puntos;
	int Nrecuperados;
	int nivel;

	CJuego(System::Drawing::Bitmap^ figura, System::Drawing::Bitmap^ figuraa, System::Drawing::Bitmap^ figurab, System::Drawing::Bitmap^ figura_Enfermero, System::Drawing::Bitmap^ figura_Virus, System::Drawing::Bitmap^ figura_winnera, System::Drawing::Bitmap^ figura_winnerb, int NumH, int NumE, System::Drawing::Bitmap^ figurabolaNieve, int NumV, int P)
	{
		escritura1 = true;
		escritura2 = true;
		tiempo = timee;
		Puntos = 50;
		this->NV = NumV;
		this->nivel = 1;
		this->Nenfermos = 0;
		this->Nhabitantes = NumH;
		this->NEnfermero = NumE;
		this->NVirus = NumV;
		this->Puntos = 100;
		this->Nrecuperados = 0;
		fondo = new CFondo(20, 20, figuraa);
		NH = NumH;
		NE = NumE;
		winner = new CIndicador(20, 20, figura_winnera);
		objDoctor = new CDoctor(50, 50, figura, fondo->getAncho(), fondo->getAlto());
		habitante = new CHabitantes * [NH]();
		BolaNievea = new CBolaNieve(-20, -20, figurabolaNieve);
		Enf = new CEnfermero * [NE]();
		for (int i = 0; i < NE; i++)
		{
			Enf[i] = new CEnfermero(50 * i + 40, 0, figura_Enfermero, fondo->getAncho(), fondo->getAlto());
		}
		for (int i = 0; i < NH; i++)
		{
			int aux1 = rand() % fondo->getAncho();

			int aux2 = rand() % fondo->getAlto();
			while (dist(aux1, aux2, objDoctor->getX(), objDoctor->getY()) < 110)
			{
				aux1 = rand() % fondo->getAncho();

				aux2 = rand() % fondo->getAlto();
			}
			habitante[i] = new CHabitantes(aux1, aux2, figurab, fondo->getAncho(), fondo->getAlto());
		}
		virus = new CVirus * [NV]();
		for (int i = 0; i < NV; i++)
		{
			int aux1 = rand() % (fondo->getAncho() - 50) + 25;

			int aux2 = rand() % (fondo->getAlto() - 50) + 25;
			while (dist(aux1, aux2, objDoctor->getX(), objDoctor->getY()) < 110)
			{
				aux1 = rand() % (fondo->getAncho() - 50) + 25;

				aux2 = rand() % (fondo->getAlto() - 50) + 25;
			}
			virus[i] = new CVirus(aux1, aux2, figura_Virus, fondo->getAncho(), fondo->getAlto());
		}

	}
	~CJuego() {}

	int getProtestados()
	{
		int aux = 0;
		for (int i = 0; i < this->NH; i++)
			if (habitante[i]->protestar)
				aux++;
		return aux;
	}

	void setTiempo(int a)
	{
		this->tiempo = a;

	}
	void desaparecerAlis()
	{
		for (int i = 0; i < NE; i++)
		{
			Enf[i]->vida = false;
		}
	}
	int getEnfermos()
	{
		int aux = 0;
		for (int i = 0; i < Nhabitantes; i++)
			aux += habitante[i]->veces;
		return aux;
	}
	int getRecuperados()
	{
		int aux = 0;
		for (int i = 0; i < NEnfermero; i++)
			aux += Enf[i]->recuperados;
		return aux;
	}
	int getMuertes()
	{
		int aux = 0;
		for (int i = 0; i < this->NV; i++)
			aux = aux + virus[i]->muertes;
		return aux;
	}

	void setEnfermos(int a)
	{
		Nenfermos = Nenfermos + a;
	}
	void cambiarDireccion(Direccion teclaPulsada)
	{
		objDoctor->cambiarDireccion(teclaPulsada);

	}

	bool mover_habitantes(Direccion teclaPulsada)
	{
		return true;
	}

	void mover(Direccion teclaPulsada)
	{
		if (this->nivel == 1)
		{
			if (rand() % 100 < 50)
			{

				CEnfermero* aux = nullptr;
				for (int i = 0; i < NE; i++)
					if (Enf[i]->vida)
						aux = Enf[i];

				if (aux != nullptr)
				{
					if (aux->vida)
					{
						for (int i = 0; i < NV; i++)
							if (!virus[i]->atender)
							{
								virus[i]->atacar(aux);
								virus[i]->atender = true;
								i = 1000;
							}
					}
				}
			}

			for (int i = 0; i < NH; i++)
			{

				habitante[i]->mover(teclaPulsada);

			}

			for (int i = 0; i < NE; i++)
				if (Enf[i]->vida)
					Enf[i]->mover(teclaPulsada);
			for (int i = 0; i < NV; i++)
				virus[i]->mover(teclaPulsada, objDoctor->getX(), objDoctor->getY());
			objDoctor->mover(teclaPulsada);
		}
		else
		{
			if (BolaNievea->getY() < 0 || BolaNievea->getX() < 0 || BolaNievea->getX() > 800 || BolaNievea->getY() > 500)
				BolaNievea->visible = false;
			if (rand() % 100 < 5)
			{

				CEnfermero* aux = nullptr;
				for (int i = 0; i < NE; i++)
					if (Enf[i]->vida)
						aux = Enf[i];

				if (aux != nullptr)
				{
					if (aux->vida)
					{
						for (int i = 0; i < NV; i++)
							if (!virus[i]->atender)
							{
								virus[i]->atacar(aux);
								virus[i]->atender = true;
								i = 5000;
							}
					}
				}

			}

			for (int i = 0; i < NH; i++)

			{//para quitarle el cartel de protestante a un habitante
				if (dist(BolaNievea->getX(), BolaNievea->getY(), habitante[i]->getX(), habitante[i]->getY()) < 50)
				{
					if (habitante[i]->protestar && !habitante[i]->enfermo)
					{
						habitante[i]->protestar = false;
						habitante[i]->enfermo = true;
						habitante[i]->veces++;
					}
				}
				habitante[i]->mover2(teclaPulsada);//protestan
			}

			for (int i = 0; i < NE; i++)
				if (Enf[i]->vida)
					Enf[i]->mover(teclaPulsada);
			for (int i = 0; i < NV; i++)
				virus[i]->mover(teclaPulsada, objDoctor->getX(), objDoctor->getY());
			objDoctor->mover(teclaPulsada);
			if (BolaNievea->visible)
				BolaNievea->mover();
		}
	}

	void disparar(Direccion tecla)
	{//se inicializa la bola de nieve
		if (BolaNievea->visible == false && tecla == Direccion::Arriba)
		{
			BolaNievea->setX(objDoctor->getX());
			BolaNievea->setY(objDoctor->getY());
			BolaNievea->setdx(0);
			BolaNievea->setdy(-5);
			BolaNievea->visible = true;
		}
		if (BolaNievea->visible == false && tecla == Direccion::Abajo)
		{
			BolaNievea->setX(objDoctor->getX());
			BolaNievea->setY(objDoctor->getY());
			BolaNievea->setdx(0);
			BolaNievea->setdy(5);
			BolaNievea->visible = true;
		}
		if (BolaNievea->visible == false && tecla == Direccion::Derecha)
		{
			BolaNievea->setX(objDoctor->getX());
			BolaNievea->setY(objDoctor->getY());
			BolaNievea->setdx(5);
			BolaNievea->setdy(0);
			BolaNievea->visible = true;
		}
		if (BolaNievea->visible == false && tecla == Direccion::Izquierda)
		{
			BolaNievea->setX(objDoctor->getX());
			BolaNievea->setY(objDoctor->getY());
			BolaNievea->setdx(-5);
			BolaNievea->setdy(0);
			BolaNievea->visible = true;
		}
	}


	void pararjuego()
		//cuando se gana o pierda, el juego se detiene, para no alterar el puntaje del juego y no ocasione un error
	{
		for (int i = 0; i < NE; i++)
			Enf[i]->atender = false;
		for (int i = 0; i < NV; i++)
			virus[i]->atender = false;
	}

	void reiniciar()
	{
		for (int i = 0; i < NH; i++)
		{
			habitante[i]->enfermo = false;
			habitante[i]->protestar = false;
			habitante[i]->veces = 0;
		}
		for (int i = 0; i < NE; i++)
		{
			Enf[i]->atender = false;
			Enf[i]->vida = false;
			Enf[i]->recuperados = 0;
			Enf[i]->no_seguir();
		}
		for (int i = 0; i < NV; i++)
		{
			virus[i]->atender = false;
			virus[i]->muertes = 0;
		}
	}

	void dibujar(System::Drawing::BufferedGraphics^ g, System::Drawing::Bitmap^ figura, System::Drawing::Bitmap^ figura_Fondo1, System::Drawing::Bitmap^ figurab, System::Drawing::Bitmap^ figura_Infectado, System::Drawing::Bitmap^ figura_Enfermero, System::Drawing::Bitmap^ figura_Virus, System::Drawing::Bitmap^ figura_winnera, System::Drawing::Bitmap^ figura_winnerb, System::Drawing::Bitmap^ figurak, System::Drawing::Bitmap^ fMP, System::Drawing::Bitmap^ fHP, System::Drawing::Bitmap^ BB)
	{

		fondo->dibujar(g, figura_Fondo1);
		//Perdedor
		if ((((-5 * getMuertes() + 10 * getRecuperados() - 2 * getProtestados() < 0) || (getMuertes() >= NE) || (tiempo <= 0)) && getNivel() == 1) || (((50 - 5 * getMuertes() + 10 * getRecuperados() - 2 * getProtestados() < 0) || (getMuertes() >= NE) || (tiempo <= 0)) && getNivel() == 2))//
		{
			pararjuego();
			winner->dibujar(g, figura_winnerb);
		}
		else
			if ((((-5 * getMuertes() + 10 * getRecuperados() - 2 * getProtestados()) >= 100) && getNivel() == 1) || (((50 - 5 * getMuertes() + 10 * getRecuperados() - 2 * getProtestados()) >= 100) && getNivel() == 2))//
			{
				pararjuego();
				winner->dibujar(g, figura_winnera);
			}
			else
			{
				objDoctor->dibujar(g, figura);
				for (int i = 0; i < NH; i++)
				{
					if (habitante[i]->enfermo)
						habitante[i]->dibujar(g, figura_Infectado);
					else
					{
						if (habitante[i]->getHombre())
						{
							if (!habitante[i]->protestar)
								habitante[i]->dibujar(g, figurab);
							else
								habitante[i]->dibujar(g, fHP);
						}
						else
						{
							if (!habitante[i]->protestar)
								habitante[i]->dibujar(g, figurak);
							else
								habitante[i]->dibujar(g, fMP);
						}
					}
				}
				for (int i = 0; i < NE; i++)
					if (Enf[i]->vida)
						Enf[i]->dibujar(g, figura_Enfermero);
				for (int i = 0; i < NV; i++)
					virus[i]->dibujar(g, figura_Virus);
				if (BolaNievea->visible)
					BolaNievea->dibujar(g, BB);
			}
	}

	//distancia entre dos puntos en el plano
	double dist(int posx, int posy, int posxx, int posyy)
	{
		return sqrt(pow(posx - posxx, 2) + pow(posy - posyy, 2));
	}
	//se ejecuta cuando se preiona la letra R
	void solicitud()
	{
		CEnfermero* aux = nullptr;
		int posx = objDoctor->getX();
		int posy = objDoctor->getY();
		int posxx;
		int posyy;
		double distancia = 500;//
		//buscaremos a un aliado que esté desocupado y vivo
		for (int i = 0; i < NE; i++)
			if (!Enf[i]->atender && Enf[i]->vida)
				aux = Enf[i];
		if (aux != nullptr)
			for (int i = 0; i < NH; i++)
			{
				//buscamos un enfrmo entre los habitantes
				if (habitante[i]->enfermo)
				{
					posxx = habitante[i]->getX();
					posyy = habitante[i]->getY();
					if (dist(posx, posy, posxx, posyy) < distancia)
					{
						distancia = dist(posx, posy, posxx, posyy);
						aux->enfermo(habitante[i]);
					}
				}
			}
	}

	void activar_aliado()
	{
		int i = 0;
		bool centinela = true;
		while (centinela && i < NEnfermero)
		{
			if (!Enf[i]->vida)
			{
				Enf[i]->vida = true;
				Enf[i]->setX(objDoctor->getX());
				Enf[i]->setY(objDoctor->getY());
				centinela = false;
			}
			i++;
		}
	}

	int getNivel()
	{
		return this->nivel;
	}
	void setNivel(int a)
	{
		this->nivel = a;
	}
	void lecturaEscrituraDeArchivosNivel1(){
		ifstream fichero1;
		ofstream fichero2;
		int nj;		
		//apertura del archivo de cantidad de jugadores que han jugado
		fichero1.open("cantidadJugadores.txt", ios::in);
		if (fichero1.is_open()) {
			fichero1 >> nj;
			fichero1.close();
			nj++;
			fichero2.open("cantidadJugadores.txt", ios::out);//sobreescritura de la cantidad de jugadores
			fichero2 << nj;
			fichero2.close();
		}
		else {			
			fichero2.open("cantidadJugadores.txt", ios::out);//en caso no haya el archivo, se crea uno nuevo con la cantidad de jugadores 1
			fichero2 << "1";
			nj = 1;
			fichero2.close();
		}
		//escritura en el archivo de partidas
		ofstream fichero3;
		fichero3.open("partidas.txt", ios::out|ios::app);
		fichero3 << endl;
		fichero3 << "Jugador->" << nj << endl;
		fichero3 << "Nivel 1:" << endl;
		fichero3 << "Tiempo->" << tiempo<<endl;		
		fichero3 << "Puntos->" << Puntos << endl;
		escritura1 = false;
	}
	void lecturaEscrituraDeArchivosNivel2() {
		//escritura en el archivo de partidas
		ofstream fichero;
		fichero.open("partidas.txt", ios::out | ios::app);
		fichero << "Nivel 2:" << endl;
		fichero << "Tiempo->" << tiempo << endl;
		fichero << "Puntos->" << Puntos << endl;
		escritura2 = false;
	}
	bool getEscritura1() { return escritura1; }
	bool getEscritura2() { return escritura2; }
};
#endif

