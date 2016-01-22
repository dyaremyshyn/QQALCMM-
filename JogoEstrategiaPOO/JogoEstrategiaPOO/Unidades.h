#pragma once
#include "Libraries.h"
class Sala;


class Caracteristicas;

class Unidades
{
public:
	Unidades();
	~Unidades();
	Sala * getOndeEstou();
	void setOndeEstou(Sala *s);
	string getNome();
	void setNome(string n);
private:
	//vector <Caracteristicas*> Caracteristicas;
	string nome;
	int vida;
	Sala * ondeEstou;

};

