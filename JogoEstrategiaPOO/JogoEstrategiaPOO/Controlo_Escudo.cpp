#include "Controlo_Escudo.h"

Controlo_Escudo::Controlo_Escudo()
{
	setNome("Controlo_Escudo");
}

void Controlo_Escudo::fazacao(int dano, Jogo *j)
{
	if (getintegridade() < 100)
		j->setEscudo(0);
	if (j->getEscudo() > 0)
		j->setEscudo(j->getEscudo()-dano);
	

}