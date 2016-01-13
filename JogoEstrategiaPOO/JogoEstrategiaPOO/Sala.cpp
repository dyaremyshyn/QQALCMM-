#include "Sala.h"
class Tripulante;

Sala::Sala(string n)
{
	nome = n;
	integridade = 100;
	oxigenio = 100;
}
Sala::~Sala() {}

void Sala::reparSala(int vida) {
	integridade += vida;
}


int Sala::getintegridade() const
{
	return integridade;
}

string Sala::getnome() const
{
	return nome;
}

void Sala::setIntegridade(int valor) 
{
	integridade = valor;
}

void Sala::recebeDano(int dano) {
	integridade -= dano;
}

int Sala::getOxigenio() const {
	return oxigenio;
}

void Sala::setOxigenio(int o) {
	oxigenio = o;
}