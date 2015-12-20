#include "Sala.h"
Sala::Sala(string n)
{
	nome = n;
	integridade = 100;
	oxigenio = 100;
	saude = 100;
}
Sala::~Sala() {}

string Sala::getnome() const
{
	return nome;
}