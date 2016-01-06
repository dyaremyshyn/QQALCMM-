#include "Evento.h"
#include <random>


void CampoCosmico::danificaNave(Sala* s) {
	Consola c;
	//Jogo *j;
	c.gotoxy(65, 8);
	cout << "Campo de po cosmico!" << endl;
	s->recebeDano(10);
	c.gotoxy(65, 10);
	cout << s->getnome() << " recebeu dano." << endl;
	//j->verificaEstadoSala(s); //verifica estado da sala; se integridade da sala correspondente for <=0 então nave rebenta, pára o jogo
}