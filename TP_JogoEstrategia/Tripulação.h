#ifndef TRIPULANTE_H
#define	TRIPULANTE_H
#include "Libraries.h"
class Tripulante
{
	int posicao;
	string nome;
    
public:
	Tripulante();
	~Tripulante();

	string getNome();
	void setNome(string n);

	int getPosicao();
	void setPosicao();

private:

};



#endif	/* TRIPULANTE_H */

