#include "ChuvaMeteoritos.h"
#include <random>

ChuvaMeteoritos::ChuvaMeteoritos(string n = "ChuvaMeteoritos") :nome(n) {}

void ChuvaMeteoritos::danificaNave(Jogo *j) {
	Consola c;
	c.gotoxy(65, 8);
	cout << "Chuva de Meteoritos!" << endl;
	j->gerirDano(6, nome);
}


ChuvaMeteoritos::~ChuvaMeteoritos(){

}

string ChuvaMeteoritos::getNome() {	return nome; }