#include "Sala_Maquinas.h"


Sala_Maquinas::Sala_Maquinas()
{
	setNome("Sala_Maquinas");
}

void Sala_Maquinas::faz_acao(Jogo *j)
{
	//Os propulsores nao trabalham e a nave nao pode avançar antes de todo esse dano ser reaprado.
	if (getintegridade() < 100)
		for (int i = 0; i < j->getSalas().size(); i++)
			if (j->getSalas()[i]->getnome() == "Propulsor")
			{
				integridadedopropulsor = j->getSalas()[i]->getintegridade();
				j->getSalas()[i]->setIntegridade(0);
			}
	//Sala das Maquinas reparadas e valor da integridade dos propulsores devolvido
	if (getintegridade() == 100 && integridadedopropulsor!= 0)
		for (int i = 0; i < j->getSalas().size(); i++)
			if (j->getSalas()[i]->getnome() == "Propulsor")
			{
				j->getSalas()[i]->setIntegridade(integridadedopropulsor);
			}

}
