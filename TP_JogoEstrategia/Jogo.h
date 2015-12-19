#ifndef MENU_H
#define	MENU_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include "Sala.h"
class Sala;
class Equipamento;
class Tripulante;
using namespace std;

class Jogo{
    int dificuldade;
	vector<Sala*> salas; //O jogador equipa a nave com diferentes salas
	vector<Equipamento*> equipamentos; //O jogador equipa a nava com diferentes equipamentos
	vector<Tripulante*> tripulantes; //O jogador equipa a nava com diferentes tripulantes
public:
    Jogo(int d);
    ~Jogo();
	void AdicionaSala(int tipo);
};




#endif	/* MENU_H */

