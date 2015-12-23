#include "Sala.h"
Sala::Sala(string n)
{
	nome = n;
	integridade = 100;
	oxigenio = 100;
}
Sala::~Sala() {}

int Sala::getintegridade() const
{
	return integridade;
}

string Sala::getnome() const
{
	return nome;
}
