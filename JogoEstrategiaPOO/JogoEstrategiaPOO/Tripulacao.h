#ifndef TRIPULANTE_H
#define	TRIPULANTE_H
#include "Libraries.h"
#include "Sala.h"
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

	void reparaDanos(Sala *a);
private:
	static char contador;
	string nome;
	Sala * ondeEstou;
};



#endif	/* TRIPULANTE_H */

