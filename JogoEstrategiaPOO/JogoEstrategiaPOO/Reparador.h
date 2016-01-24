#pragma once
#include "Caracteristicas.h"
#include "Respira.h"
class Reparador :public Caracteristicas
{

public:
	Reparador(string n);
	~Reparador() {};
	bool repararSala(Sala *s);
	bool respiraOxi(Sala *s);
};