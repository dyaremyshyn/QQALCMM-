#include "Sala.h"

Sala::Sala()
{
	nome = "?";
	integridade = 100;
	oxigenio = 100;
}

Sala::~Sala() {
}

string Sala::getNomeUnidades() const
{
	ostringstream oss;
	for (int i = 0; i < V_Unidades.size(); i++)
		oss << V_Unidades[i]->getNome() << " ";
	return oss.str();
}

vector<Sala*> Sala::getSalasAdjacentes()
{
	return SalasAdjacentes;
}

vector<Unidades*> Sala::getUnidades()
{
	return V_Unidades;
}

bool Sala::VerificaExisteUnidade(string u)
{
	for (int i = 0; i < V_Unidades.size(); i++)
		if (V_Unidades[i]->getNome() == u)
			return true;
	return false;
}

bool Sala::getTripulantes()
{
	for (int i = 0; i < V_Unidades.size(); i++)
		for (int j = 0; i < V_Unidades[i]->getCaracteristicas().size(); i++)
			if (V_Unidades[i]->getCaracteristicas()[j]->getnome() == "Tripulante")
				return true;
	return false;
}

Unidades* Sala::RemoveUnidade(string u)
{
	for (int i=0; i < V_Unidades.size(); i++)
		if (V_Unidades[i]->getNome() == u)
		{
			Unidades *un = V_Unidades[i];
			delete V_Unidades[i];
			return un;
		}
}

void Sala::reparSala(int vida) {
	integridade += vida;
}

void Sala::setNome(string n)
{
	nome = n;
}

void Sala::AdicionaUnidade(Unidades *u)
{
	V_Unidades.push_back(u);
	n_unidades++;
	u->setOndeEstou(this);
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