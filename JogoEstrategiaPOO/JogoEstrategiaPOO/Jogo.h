#ifndef MENU_H
#define	MENU_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <random>
#include "Sala.h"
#include"Evento.h"

class Sala;
class Equipamento;
class Tripulante;
class Evento;

using namespace std;

class Jogo{
	Consola c;
    int dificuldade;
	int percurso;
	int fim;
	bool fim_jogo;
	vector<Sala*> salas; //O jogador equipa a nave com diferentes salas
	vector<Tripulante*> tripulantes; //O jogador equipa a nave com diferentes tripulantes
	vector<Evento*> eventos;
	int iteracao;

public:
    Jogo(int d);
    ~Jogo();
	void AdicionaSala(Sala *s);
	void Move(string cmd);
	void turno();
	void TripulantesDisponiveis();
	vector<Evento*> getEventos();
	vector<Sala*> getSalas();
	void addEvento(Evento* e);
	bool sorteiaEvento();
	void verificaEstadoSala(Sala *s);
	void mostraMensagens(string msg);
	bool VerificaSalas();
	string getNomeSala(int i) const;
	string getTripulantes(int salai) const;
	bool VerificaTripulantesSeEstaEmSala() const;
	bool guiaNave(Tripulante *a);

private:
	bool chegouFim(int p);
	
};

#endif	/* MENU_H */

