#ifndef SALA_H
#define	SALA_H

#include "Libraries.h"
#include "Unidades.h"
using namespace std;


class Sala{
private:
    string nome;
	int local;
    int oxigenio, integridade;
	int n_unidades;
	vector <Unidades*> V_Unidades; //O jogador equipa as salas com diferentes tripulantes
	//vector <EfeotpsAmbientais*> Efeitos;
	vector <Sala *> SalasAdjacentes;
public:
	void AdicionaUnidade(Unidades *u);
	bool VerificaExisteUnidade(string u);
	bool getTripulantes();
	Unidades* RemoveUnidade(string u);
	void reparSala(int vida);
	int getintegridade() const;
	int getOxigenio() const;
	void setOxigenio(int o);
	string getnome() const;
	int getid() const;
	Sala():integridade(100),oxigenio(100),n_unidades(0) {};
	~Sala();
	void setIntegridade(int vida);
	void recebeDano(int dano);
	void setNome(string n);
	string getNomeUnidades() const;
	vector<Sala*> getSalasAdjacentes();
	vector<Unidades*> getUnidades();
};

#endif	/* SALA_H */

