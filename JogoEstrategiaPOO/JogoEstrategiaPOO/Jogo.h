#ifndef MENU_H
#define	MENU_H

#include "Interacao.h"
#include "Pirata.h"

class Sala;
class Evento;

using namespace std;

class Jogo{
	Consola c;
    int dificuldade;
	int percurso;
	int fim;
	bool fim_jogo;
	vector<Sala*> salas; //O jogador equipa a nave com diferentes salas
	vector<Evento*> eventos;
	int iteracao;
	int escudo;

public:
    Jogo(int d);
    ~Jogo();
	int getEscudo();
	void setEscudo(int valor);
	void AdicionaSala(Sala *s);
	void Move(string cmd);
	void turno();
	void TripulantesDisponiveis();
	vector<Evento*> getEventos();
	vector<Sala*> getSalas();
	void addEvento(Evento* e);
	//bool sorteiaEvento();
	void verificaEstadoSala(Sala *s);
	void mostraMensagens(string msg);
	bool VerificaSalas();
	string getNomeSala(int id) const;
	string getTripulantes(int salai) const;
	void PrimeirosTripulantes();
	
	void gerirDano(int dano, string e); // terá que receber algo! 
private:
	bool chegouFim(int p);
	bool existeRaioLaser();
	bool operaPonte();
	bool operaRaioLaser();
	void provocaBrecha();

	void danoChuvaMeteoritos(int dano);
	void danoAtaquePiratas(int dano);
	void danoAtaqueXenomorfo(int dano);
	void danoCampoCosmico(int dano);
	void invasaoPiratas();
};

#endif	/* MENU_H */

