#ifndef TRIPULANTE_H
#define	TRIPULANTE_H
#include "Libraries.h"
#include "Sala.h"

class Sala;

class Tripulante: public Unidades
{
private:
	static char contador;
public:
	Tripulante():Unidades() {
		setNome(incrementaid());
	}
	~Tripulante() {}
	void reparaDanos(Sala *a);
	bool estouPonte(Sala *s);
	string incrementaid();

	
};



#endif	/* TRIPULANTE_H */

