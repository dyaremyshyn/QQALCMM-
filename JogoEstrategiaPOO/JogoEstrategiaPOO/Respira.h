#pragma once
#include "Caracteristicas.h"
class Respira :public Caracteristicas
{

public:
	Respira(string n);
	~Respira() {};

	bool respirarOxi(Sala *s);
	bool repararSala(Sala *s);
};