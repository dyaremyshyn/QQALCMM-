#ifndef EVENTO_H
#define	EVENTO_H

#include "Libraries.h"
#include "Sala.h"
class Jogo;

using namespace std;

class Evento {
public:
	virtual void danificaNave(Jogo *j) = 0;
	virtual string getNome() = 0;
};

#endif EVENTO_H
