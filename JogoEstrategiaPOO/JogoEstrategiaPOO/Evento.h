#ifndef EVENTO_H
#define	EVENTO_H

#include "Libraries.h"
#include "Sala.h"
#include "Jogo.h"

using namespace std;

class Evento {
public:
	virtual void danificaNave(Sala* s) = 0;
};

#endif EVENTO_H
