#pragma once

#include "Jogo.h"
#include "Sala.h"
class Caracteristicas;
static int ids = 0;

class Unidades {
public:
	virtual string getNome() = 0;
	void setNome(string n);
	virtual void setOndeEstou(Sala *a) = 0;
	vector<Caracteristicas*> getCaracteristicas();
	Unidades() :id(ids++), arma(0), exo(0), moveu(false) {};
	~Unidades() {};
	Sala * getOndeEstou();
	void GanhaCaracteristica(Caracteristicas *c);
	void PerdeCaracteristica(Caracteristicas *c);
	//virtual void setNome(string n) = 0;
private:
	string nome;
	int vida, id, arma, exo;
	bool moveu;
	Sala * ondeEstou;
	Unidades * hospedeiro;
	vector <Caracteristicas*> V_Caracteristicas;
};

