#include "Unidades.h"

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
vector<Caracteristicas*> Unidades::getCaracteristicas()
{
	return V_Caracteristicas;
}
void Unidades::GanhaCaracteristica(Caracteristicas *c)
{
	V_Caracteristicas.push_back(c);
}
void Unidades::PerdeCaracteristica(Caracteristicas * c)
{
	//
}
Unidades::Unidades()
{
}
//
Sala * Unidades::getOndeEstou()
{
	return ondeEstou;
}

