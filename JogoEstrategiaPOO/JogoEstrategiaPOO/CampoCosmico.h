#ifndef CAMPOCOSMICO_H
#define	CAMPOCOSMICO_H

#include "Evento.h"
#include "Jogo.h"
using namespace std;

class CampoCosmico :public Evento {
	string nome;
public:
	CampoCosmico(string n);

	void danificaNave(Jogo* j);

	string getNome();
};

#endif CAMPOCOSMICO_H