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
public:
	/*Tripulante():Unidades() {
		setNome(incrementaid());
	}*/

	Tripulante();
	~Tripulante();
	void reparaDanos(Sala *a);
	bool estouPonte(Sala *s);
	//string incrementaid();

	string getNome();
};

#endif	/* TRIPULANTE_H */

