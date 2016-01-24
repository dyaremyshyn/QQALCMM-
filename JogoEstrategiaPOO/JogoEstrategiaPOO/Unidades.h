#pragma once
#include "Jogo.h"
#include "Sala.h"
class Caracteristicas;
static int ids = 0;

class Unidades {


public:
	string getNome();
	void setNome(string n);
	virtual void setOndeEstou(Sala *a) = 0;
	vector<Caracteristicas*> getCaracteristicas();
	Unidades();
	~Unidades();
	Sala * getOndeEstou();
	void GanhaCaracteristica(Caracteristicas *c);
	void PerdeCaracteristica(Caracteristicas *c);
	//virtual void setNome(string n) = 0;
	
	//*****************************
	virtual void inicioTurno() = 0;
	virtual void finalTurno() = 0;

private:	
	bool moveu;
	Sala * ondeEstou;
protected:
	bool combate;
	string nome;
	int vida, id;
	Unidades * hospedeiro;
	vector <Caracteristicas*> V_Caracteristicas;
};

