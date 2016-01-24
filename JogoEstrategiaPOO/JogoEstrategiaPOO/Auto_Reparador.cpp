#include "Auto_Reparador.h"

Auto_Reparador::Auto_Reparador()
{
	setNome("Auto_Reparador");
}

void Auto_Reparador::faz_acao()
{
	if (getintegridade()==100)
	{
		for (unsigned int i = 0; i < getSalasAdjacentes().size(); i++)
		{
			getSalasAdjacentes()[i]->setIntegridade(getSalasAdjacentes()[i]->getintegridade() + 5);
		}
	}
}
