#include "Sala.h"

Sala::Sala()
{
	nome = "?";
	integridade = 100;
	oxigenio = 100;
}

Sala::~Sala() {
}

string Sala::getUnidades() const
{
	ostringstream oss;
	for (int i = 0; i < V_Unidades.size(); i++)
		oss << V_Unidades[i]->getNome() << " ";
	return oss.str();
}

bool Sala::VerificaExisteUnidade(string u)
{
	for (int i = 0; i < V_Unidades.size(); i++)
		if (V_Unidades[i]->getNome() == u)
			return true;
	return false;
}

Unidades Sala::RemoveUnidade(string u)
{
	vector<Unidades*>::iterator it;

	for (; i < V_Unidades.size(); i++)
		if (V_Unidades[i]->getNome() == u)
		{
			Unidades *un = V_Unidades[i];
			delete V_Unidades[i];
			return *un;
		}
}

void Sala::reparSala(int vida) {
	integridade += vida;
}

void Sala::setNome(string n)
{
	nome = n;
}

bool Sala::guiaNave(Unidades *a)
{
	if (a != NULL)
		return true;
	return false;
}

void Sala::AdicionaUnidade(Unidades *u)
{
	V_Unidades.push_back(u);
}

int Sala::getintegridade() const
{
	return integridade;
}

string Sala::getnome() const
{
	return nome;
}

int Sala::getid() const
{
	return id;
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