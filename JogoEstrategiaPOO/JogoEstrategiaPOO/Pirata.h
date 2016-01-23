#pragma once
#include "Unidades.h"
class Pirata :public Unidades {
	string nome;
public:
	Pirata(string n);
	~Pirata();
	string getNome();
};