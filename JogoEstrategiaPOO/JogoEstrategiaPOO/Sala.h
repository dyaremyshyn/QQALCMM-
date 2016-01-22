#ifndef SALA_H
#define	SALA_H

#include "Libraries.h"
#include "Unidades.h"
using namespace std;


class Sala{
private:
    string nome;
	int id;
    int oxigenio;
	int integridade;
	int escudo;
	bool escudoativo;
	vector <Unidades*> V_Unidades; //O jogador equipa as salas com diferentes tripulantes
public:
	bool guiaNave(Unidades *a);
	void AdicionaUnidade(Unidades *u);
	bool VerificaExisteUnidade(string u);
	Unidades RemoveUnidade(string u);
	void reparSala(int vida);
	int getintegridade() const;
	int getOxigenio() const;
	void setOxigenio(int o);
	string getnome() const;
	int getid() const;
	Sala();
	~Sala();
	void setIntegridade(int vida);
	void recebeDano(int dano);
	void Primeiros_Tripulantes();
	void setNome(string n);
	string getUnidades() const;
};

#endif	/* SALA_H */

