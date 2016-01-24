#include "Sala_Armas.h"


Sala_Armas::Sala_Armas()
{
	setNome("Sala_Armas");
}

void Sala_Armas::FimTurnoSala()
{
	bool verifica = false;
	for (int i = 0; i < getUnidades().size(); i++){
		for (unsigned int j = 0; j < getUnidades()[i]->getCaracteristicas().size(); j++)

			if (getUnidades()[i]->getCaracteristicas()[j]->getnome() == ""); // falta completar!!!!!!!!!!!!!!!!!!!!!!!!!!


	}

}
