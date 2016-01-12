#pragma once
#ifndef ATAQUEPIRATAS_H
#define	ATAQUEPIRATAS_H

#include "Evento.h"
using namespace std;

class AtaquePiratas :public Evento {
	string nome;
public:
	AtaquePiratas(string n);

	void danificaNave(Jogo *j);

	string getNome();
};

#endif ATAQUEPIRATAS_H