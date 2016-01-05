#include "Evento.h"
#include <random>


void CampoCosmico::danificaNave(Sala* s) {
	Consola c;
	c.gotoxy(65, 8);
	cout << "Campo de po cosmico!" << endl;
	s->recebeDano(10);
	c.gotoxy(65, 10);
	cout << s->getnome() << " recebeu dano." << endl;
}