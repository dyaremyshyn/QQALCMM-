#ifndef EVENTO_H
#define	EVENTO_H

#include "Libraries.h"
#include "Sala.h"
using namespace std;

class Evento {
public:
	virtual void danificaNave() = 0;
};

class CampoCosmico:public Evento {
public:
	void danificaNave();
};

#endif EVENTO_H
