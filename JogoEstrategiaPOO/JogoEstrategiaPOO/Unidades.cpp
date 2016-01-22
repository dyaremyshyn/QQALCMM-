#include "Unidades.h"


Unidades::Unidades()
{
	vida = 100;
}

Unidades::~Unidades()
{
}

string Unidades::getNome()
{
	return nome;
}

void Unidades::setNome(string n)
{
	nome = n;
}

void Unidades::setOndeEstou(Sala *s)
{
	ondeEstou = s;
}

Sala * Unidades::getOndeEstou()
{
	return ondeEstou;
}

