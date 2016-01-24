#ifndef TRIPULANTE_H
#define	TRIPULANTE_H
#include "Libraries.h"
#include "Sala.h"
#include "Unidades.h"
#include "Respira.h"
#include "Reparador.h"
#include "Combatente.h"
#include "Operador.h"
#include "MembroTripulacao.h"


class Sala;

class Tripulante: public Unidades {
	bool operar = true;
private:
	static char contador;
	Sala * ondeEstou;
public:
	Tripulante();
	~Tripulante();
	
	void inicioTurno();
	void finalTurno();

	// FUNÇÕES APENAS PARA OS TRIOULANTES
	void reparaDanos(Sala *a);
	bool estouPonte(Sala *s);
	
};

#endif	/* TRIPULANTE_H */

