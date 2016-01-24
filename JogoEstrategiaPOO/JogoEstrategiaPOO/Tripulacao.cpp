#include "Tripulacao.h"
#include "MembroTripulacao.h"
#include "Caracteristicas.h"

char Tripulante::contador = 'a';


Tripulante::Tripulante() {
	string n(1, contador);
	nome = n;
	contador++;
	
	vida = 100;
	combate = false;

	GanhaCaracteristica(new Respira("Respira"));
	GanhaCaracteristica(new Reparador("Reparador"));
	GanhaCaracteristica(new Combatente("Combatente"));
	GanhaCaracteristica(new Operador("Operador"));
	GanhaCaracteristica(new MembroTripulacao("MembroTripulacao"));
}

Tripulante::~Tripulante() {
	for (int i = 0; i < V_Caracteristicas.size(); i++)
		delete V_Caracteristicas[i];
}

void Tripulante::reparaDanos(Sala *a) {
	if (a -> getintegridade() < 100)
		a->reparSala(1);
}

bool Tripulante::estouPonte(Sala *s) {
	if (s->getnome() == "Ponte")
		return true;
	return false;
}


void Tripulante::inicioTurno() {
	Sala *s = getOndeEstou();

	for (int i = 0; i < V_Caracteristicas.size(); i++) {
		if (V_Caracteristicas[i]->getnome() == "Respira") {
			if (V_Caracteristicas[i]->respirarOxi(s)==false)
				vida--;
		}
	}
	if (s->getintegridade() == 100){
		if (combate == false) {
			operar = true;
		}
	}
}

void Tripulante::finalTurno() {
	Sala *s = getOndeEstou();

	if (!combate) {
		if(repararSala(s))
	}

}





