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
	Consola c;
    int dificuldade;
	int percurso;
	int fim;
	bool fim_jogo;
	vector<Sala*> salas; //O jogador equipa a nave com diferentes salas
	vector<Tripulante*> tripulantes; //O jogador equipa a nave com diferentes tripulantes
	int iteracao;

public:
    Jogo(int d);
    ~Jogo();
	void AdicionaSala(Sala *s);
	void DesenhaSala(int i, string n);
	void DesenhaTripulante(string e, int p);
	void Move(string cmd);
	void turno();
	void TripulantesDisponiveis();
	
private:
	bool chegouFim(int p);
	
};




#endif	/* MENU_H */

