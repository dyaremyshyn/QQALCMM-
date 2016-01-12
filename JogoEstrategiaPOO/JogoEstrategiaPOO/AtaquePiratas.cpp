#include "AtaquePiratas.h"
#include <random>

AtaquePiratas::AtaquePiratas(string n = "AtaquePiratas") :nome(n) {}

void AtaquePiratas::danificaNave(Jogo* j) {
	Consola c;

	c.gotoxy(65, 8);
	cout << "Ataque de Piratas!" << endl;
	//s->recebeDano(10);
	c.gotoxy(65, 10);
	//cout << s->getnome() << " recebeu dano." << endl;
	//j->verificaEstadoSala(s); //verifica estado da sala; se integridade da sala correspondente for <=0 então nave rebenta, pára o jogo
}

string AtaquePiratas::getNome() {
	return nome;
}