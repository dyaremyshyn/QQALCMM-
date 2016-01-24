#include "Suporte_Vida.h"



Suporte_Vida::Suporte_Vida()
{
	setNome("Suporte_Vida");
}

void Suporte_Vida::atribuioxigenio(Jogo *j)
{
	if (getintegridade() == 100)
	{
		for (int i = 0; i < j->getSalas().size(); i++)
			if(j->getSalas()[i]->getOxigenio()<100 /*|| j->getSalas()[i]->getBrecha() == true*/)
				j->getSalas()[i]->setOxigenio(getOxigenio() + 2);
	}
}
