#pragma once
#include "Unidades.h"
#include "Respira.h"
#include "Reparador.h"

class Caracteristicas
{
public:
	Caracteristicas(string n);
	~Caracteristicas();
	string getnome();

	virtual bool respirarOxi(Sala *s) = 0;
	virtual bool repararSala(Sala *s) = 0;
protected:
	string nome;
};

