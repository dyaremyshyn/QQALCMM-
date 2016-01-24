#include "CampoCosmico.h"
#include <random>
#include "Jogo.h"
CampoCosmico::CampoCosmico(string n = "CampoCosmico") :nome(n) {}


// min + (rand() % (int)(max - min + 1))

void CampoCosmico::danificaNave(Jogo* j) {
	Consola c;

	c.gotoxy(65, 8);
	cout << "Campo de po cosmico!" << endl;
	j->gerirDano(10, nome);
}


string CampoCosmico::getNome() {
	return nome;
}