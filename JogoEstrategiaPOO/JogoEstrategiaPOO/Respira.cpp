#include "Respira.h"
#include "Caracteristicas.h"
#include "Reparador.h"

Respira::Respira(string n) : Caracteristicas(n) {}

bool Respira::respirarOxi(Sala * s)
{
	if (s->getOxigenio() > 0) {
		s->setOxigenio(s->getOxigenio() - 1);
		return true;
	}
	else 
		return false;
}

bool Respira::repararSala(Sala * s)
{
	return false;
}
