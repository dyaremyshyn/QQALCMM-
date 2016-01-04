#include "Evento.h"
#include <random>


void CampoCosmico::danificaNave(Sala* s) {
	Consola c;
	c.gotoxy(65, 8);
	cout << "Campo de po cosmico!" << endl;
	s->recebeDano(10);
}