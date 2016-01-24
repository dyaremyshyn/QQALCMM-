#pragma once
#include "Sala.h"
class Enfermaria :public Sala
{
public:
	Enfermaria();
	~Enfermaria() {};

private:
	void faz_acao();
};