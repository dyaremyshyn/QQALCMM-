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
	int reparasala();
	int getintegridade() const;
	string getnome() const;
	Sala(string n);
	~Sala();

	
};

#endif	/* SALA_H */

