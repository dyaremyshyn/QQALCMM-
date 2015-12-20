#ifndef SALA_H
#define	SALA_H

#include "Tripulação.h"


using namespace std;

class Sala{
private:
    string nome;
    int saude;
    int oxigenio;
	int integridade;
public:
	int reparasala();
	string getnome() const;
	Sala(string n);
	~Sala();

	
};

#endif	/* SALA_H */

