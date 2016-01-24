#include "Tripulacao.h"
#include "MembroTripulacao.h"
char Tripulante::contador = 'a';

//string Tripulante::incrementaid()
//{
//	/*stringstream ss;*/
//	string nome(1,Tripulante::contador);
//	/*ss << Tripulante::contador;
//	ss >> nome;*/
//	Tripulante::contador++;
//	return nome;
//}

Tripulante::Tripulante() {
	string n(1, contador);
	nome = n;
	contador++;
	u->GanhaCaracteristica(new MembroTripulacao);
}

Tripulante::~Tripulante() {}

void Tripulante::reparaDanos(Sala *a) {
	if (a -> getintegridade() < 100)
		a->reparSala(1);
}

bool Tripulante::estouPonte(Sala *s) {
	if (s->getnome() == "Ponte")
		return true;
	return false;
}

void Tripulante::setOndeEstou(Sala * s)
{
	ondeEstou = s;
}

string Tripulante::getNome() { return nome; }
