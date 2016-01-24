#pragma once
#include "Sala.h"
#include "Jogo.h"
class Controlo_Escudo :public Sala
{
public:
	Controlo_Escudo();
	~Controlo_Escudo() {};

private:
	void fazacao(int dano, Jogo *j);

};