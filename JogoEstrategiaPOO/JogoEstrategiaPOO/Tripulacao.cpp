#include "Tripulacao.h"
char Tripulante::contador = 'a';

Tripulante::Tripulante()
{
	nome = contador;
	contador++;
	vida = 100;
}

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