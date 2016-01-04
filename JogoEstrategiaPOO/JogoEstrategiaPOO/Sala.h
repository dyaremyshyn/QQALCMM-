#ifndef SALA_H
#define	SALA_H

#include "Tripulacao.h"

using namespace std;

class Sala{
private:
    string nome;
    int oxigenio;
	int integridade;
public:
	void reparSala(int vida);
	int getintegridade() const;
	string getnome() const;
	Sala(string n);
	~Sala();
	void setIntegridade(int vida);
	void recebeDano(int dano);
	
};

#endif	/* SALA_H */

