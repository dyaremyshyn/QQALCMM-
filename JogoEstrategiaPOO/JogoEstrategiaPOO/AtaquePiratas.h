#pragma once
#ifndef ATAQUEPIRATAS_H
#define	ATAQUEPIRATAS_H

#include "Evento.h"
using namespace std;

class AtaquePiratas :public Evento {
public:
	void danificaNave(Sala* s);
};

#endif ATAQUEPIRATAS_H