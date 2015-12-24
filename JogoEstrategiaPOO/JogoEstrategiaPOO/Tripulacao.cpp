#include "Tripulacao.h"

char Tripulante::contador = 'a';

Tripulante::Tripulante()
{
	nome = contador;
	contador++;
	vida = 100;
}

Tripulante::~Tripulante() {}

string Tripulante::getNome()
{
	return nome;
}
void Tripulante::setOndeEstou(Sala *s)
{
	ondeEstou = s;
}

Sala * Tripulante::getOndeEstou()
{
	return ondeEstou;
}

void Tripulante::reparaDanos(Sala *a) {
	if (a -> getintegridade() < 100)
		a->reparSala(1);
}