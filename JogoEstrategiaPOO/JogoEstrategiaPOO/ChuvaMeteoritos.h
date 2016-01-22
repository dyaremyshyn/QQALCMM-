#pragma once
#ifndef CHUVAMETEORITOS_H
#define	CHUVAMETEORITOS_H

#include "Evento.h"
using namespace std;

class ChuvaMeteoritos :public Evento {
	string nome;
public:
	ChuvaMeteoritos(string n);
	~ChuvaMeteoritos();

	void danificaNave(Jogo* j);

	string getNome();
};

#endif CHUVAMETEORITOS_H