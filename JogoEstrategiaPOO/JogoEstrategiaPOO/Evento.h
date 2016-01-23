#ifndef EVENTO_H
#define	EVENTO_H


#include "Sala.h"
#include "Jogo.h"

using namespace std;

class Evento {
public:
	virtual void danificaNave(Jogo *j) = 0;
	virtual string getNome() = 0;
};

#endif EVENTO_H
