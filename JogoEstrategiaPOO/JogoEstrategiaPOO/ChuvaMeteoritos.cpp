#include "ChuvaMeteoritos.h"
#include <random>

ChuvaMeteoritos::ChuvaMeteoritos(string n = "ChuvaMeteoritos") :nome(n) {}

void ChuvaMeteoritos::danificaNave(Jogo* j) {
	Consola c;
	c.gotoxy(65, 8);
	cout << "Chuva de Meteoritos!" << endl;
	


	//s->recebeDano(10);
	c.gotoxy(65, 10);
	//cout << s->getnome() << " recebeu dano." << endl;
	//j->verificaEstadoSala(s); //verifica estado da sala; se integridade da sala correspondente for <=0 então nave rebenta, pára o jogo
}


string ChuvaMeteoritos::getNome() {
	return nome;
}