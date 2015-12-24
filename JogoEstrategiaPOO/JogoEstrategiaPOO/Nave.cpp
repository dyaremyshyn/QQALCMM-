#include "Nave.h"
class Sala;
class Equipamento;
class Tripulante;

Nave::Nave(const string n) :nome(n) {};
Nave::~Nave() {}

bool Nave::guiaNave(Tripulante *a)
{
	if (a != NULL)
		return true;
	return false;
}
