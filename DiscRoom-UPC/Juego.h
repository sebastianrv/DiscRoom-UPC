#ifndef _JUEGO_H_
#define _JUEGO_H_
#include "Jugador.h"
#include "ArrDiscos.h"
#include "Mapa.h"

class CJuego
{
public:
	CJuego()
	{
		objJugador = new CJugador(60, 60);
		tiempoMapa = 0;
		nivelJuego = 0;
		comenzarJuego = false;
	}
	void IniciaJuego()
	{
		switch (nivelJuego)
		{
		case 0:
		{


		}
		default:
			break;
		}
	}
	void dibujarJuego(Graphics ^g, Bitmap^ bmpNivel1, Bitmap^bmpBatman)
	{
		objMapa->dibujarNivel1(g, bmpNivel1);
		objJugador->mover(g, bmpBatman);
	}
	CJugador * getObjJugador()
	{
		return objJugador;
	};
	~CJuego() {}

private:
	CMapa * objMapa;
	CJugador * objJugador;
	int tiempoMapa;
	bool comenzarJuego;
	int nivelJuego;
};



#endif // !_JUEGO_H_


