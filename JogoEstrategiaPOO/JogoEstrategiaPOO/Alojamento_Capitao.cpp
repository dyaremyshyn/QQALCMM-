#include "Alojamento_Capitao.h"
#include "Capitao.h"

Alojamento_Capitao::Alojamento_Capitao()
{
	setNome("Alojamento_Capitao");
	for (int i = 0; i < getUnidades().size(); i++) {
		for (unsigned int j = 0; j < getUnidades()[i]->getCaracteristicas().size(); j++)
			if (getUnidades()[i]->getCaracteristicas()[j]->getnome() == "Tripulacao")
			{
				delete getUnidades()[i];
				AdicionaUnidade(new Capitao);
			}
	}
}