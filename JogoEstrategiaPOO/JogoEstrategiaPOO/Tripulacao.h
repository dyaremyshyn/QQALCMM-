#ifndef TRIPULANTE_H
#define	TRIPULANTE_H
#include "Libraries.h"
class Sala;


class Tripulante
{
	int vida;
//	Sala posicao;
//	string nome;
//	string comando;
	   
public:
	Tripulante();
	~Tripulante();
	
//	string getNome();
//	void setNome(string n);

//	int getPosicao();
	//void setPosicao();
	Sala * getOndeEstou();
	void setOndeEstou(Sala *a);
	string getNome();
private:
	static char contador;
	string nome;
	Sala * ondeEstou;
};



#endif	/* TRIPULANTE_H */

