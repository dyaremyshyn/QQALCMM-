#ifndef SALA_H
#define	SALA_H

#include "Tripula��o.h"


using namespace std;

class Sala{
private:
    string nome;
    int saude;
    int oxigenio;
	int integridade;
public:
	int reparasala();
	Sala(string n);
	~Sala();

	
};

#endif	/* SALA_H */

