#pragma once
#include "Sala.h"
#include "Jogo.h"
class Suporte_Vida :public Sala
{
public:
	Suporte_Vida();
	~Suporte_Vida() {};

private:
	void atribuioxigenio(Jogo *j);
};