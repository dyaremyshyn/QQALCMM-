#include "AtaqueXenomorfo.h"
#include <random>


void AtaqueXenomorfo::danificaNave(Sala* s) {
	Consola c;
	//Jogo *j;
	c.gotoxy(65, 8);
	cout << "Ataque de Xenomorfo!" << endl;
	s->recebeDano(10);
	c.gotoxy(65, 10);
	cout << s->getnome() << " recebeu dano." << endl;
	//j->verificaEstadoSala(s); //verifica estado da sala; se integridade da sala correspondente for <=0 então nave rebenta, pára o jogo
}