#pragma once
#ifndef ATAQUEXENOMORFO_H
#define	ATAQUEXENOMORFO_H

#include "Evento.h"
#include "Jogo.h"
using namespace std;

class AtaqueXenomorfo :public Evento {
	string nome;
public:
	AtaqueXenomorfo(string n);
	void danificaNave(Jogo* j);

	string getNome();
};

#endif ATAQUEXENOMORFO_H