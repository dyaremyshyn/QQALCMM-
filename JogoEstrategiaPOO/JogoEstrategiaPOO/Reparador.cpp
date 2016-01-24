#include "Reparador.h"
#include "Caracteristicas.h"

Reparador::Reparador(string n): Caracteristicas(n){}

bool Reparador::repararSala(Sala * s)
{
	if (s->getintegridade() < 100) {
		s->setIntegridade(s->getintegridade() + 1);
		return true;
	}
	return false;
}

bool Reparador::respiraOxi(Sala * s)
{
	return false;
}
