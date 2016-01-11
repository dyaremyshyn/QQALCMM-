#ifndef CAMPOCOSMICO_H
#define	CAMPOCOSMICO_H

#include "Evento.h"
using namespace std;

class CampoCosmico :public Evento {
public:
	void danificaNave(Sala* s);
};

#endif CAMPOCOSMICO_H