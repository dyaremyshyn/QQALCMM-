#pragma once
#ifndef CHUVAMETEORITOS_H
#define	CHUVAMETEORITOS_H

#include "Evento.h"
using namespace std;

class ChuvaMeteoritos :public Evento {
public:
	void danificaNave(Sala* s);
};

#endif CHUVAMETEORITOS_H