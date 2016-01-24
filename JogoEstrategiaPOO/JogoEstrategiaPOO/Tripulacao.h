#ifndef TRIPULANTE_H
#define	TRIPULANTE_H
#include "Libraries.h"
#include "Sala.h"

class Sala;

class Tripulante: public Unidades {
	string nome;
	int vida;
private:
	static char contador;
	Sala * ondeEstou;
public:
	Tripulante();
	~Tripulante();
	void reparaDanos(Sala *a);
	bool estouPonte(Sala *s);
	//string incrementaid();
	void setOndeEstou(Sala *s);
	string getNome();
};

#endif	/* TRIPULANTE_H */

