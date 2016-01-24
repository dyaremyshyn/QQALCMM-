#pragma once
#include "Sala.h"
#include "Jogo.h"
class Sala_Maquinas :public Sala
{
public:
	Sala_Maquinas();
	~Sala_Maquinas() {};

private:
	void faz_acao(Jogo *j);
	int integridadedopropulsor=0;
};