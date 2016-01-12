#include "CampoCosmico.h"
#include <random>
#include "Jogo.h"
CampoCosmico::CampoCosmico(string n = "CampoCosmico") :nome(n) {}


// min + (rand() % (int)(max - min + 1))

void CampoCosmico::danificaNave(Jogo* j) {
	Consola c;
	srand(time(NULL));
	int nsalas = 3 + (rand() % (int)(5 - 3 + 1)); // valores aleatório entre 3 e 5

	c.gotoxy(65, 8);
	cout << "Campo de po cosmico!" << endl;
	
	for (int i = 0; i < nsalas; i++) {
		srand(time(NULL));
		int r = rand() % 12 + 0;
		(j->getSalas())[r]->recebeDano(10);
		c.gotoxy(65, 10+i);
		cout << (j->getSalas())[r]->getnome() << " recebeu dano." << endl;
	}
}


string CampoCosmico::getNome() {
	return nome;
}