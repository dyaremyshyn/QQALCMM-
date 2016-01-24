#pragma once
#include "Unidades.h"
class Pirata :public Unidades {
	string nome;
public:
	Pirata();
	~Pirata();
	string getNome();
	void setOndeEstou();
};