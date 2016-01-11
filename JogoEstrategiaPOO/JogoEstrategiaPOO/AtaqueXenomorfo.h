#pragma once
#ifndef ATAQUEXENOMORFO_H
#define	ATAQUEXENOMORFO_H

#include "Evento.h"
using namespace std;

class AtaqueXenomorfo :public Evento {
public:
	void danificaNave(Sala* s);
};

#endif ATAQUEXENOMORFO_H