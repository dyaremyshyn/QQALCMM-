#include "AtaquePiratas.h"
#include <random>

AtaquePiratas::AtaquePiratas(string n = "AtaquePiratas") :nome(n) {}

void AtaquePiratas::danificaNave(Jogo* j) {
	Consola c;

	c.gotoxy(65, 8);
	cout << "Ataque de Piratas!" << endl;
	
	int d = 30 + (rand() % (int)(60 - 30 + 1));
	j->gerirDano(d, nome);
}

string AtaquePiratas::getNome() {
	return nome;
}