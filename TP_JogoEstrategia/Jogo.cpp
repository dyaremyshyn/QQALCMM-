#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>

#include "Jogo.h"

Jogo::Jogo(int d){
	dificuldade = d;
	for (int i = 0; i < 10; i++) salas.push_back(new Sala(""));
	salas.insert(salas.begin(), new Sala("Propulsor")); //Adicionar uma sala numa posição especifica do vetor
	salas.insert(salas.begin()+4, new Sala("Sala Maquinas"));
	salas.insert(salas.begin()+5, new Sala("Suporte de Vida"));
	salas.insert(salas.begin()+6, new Sala("Controlo de Escudo"));
	salas.insert(salas.begin()+7, new Sala("Ponte"));
	salas.insert(salas.begin()+8, new Sala("Propulsor"));
}
Jogo::~Jogo(){}


void Jogo::AdicionaSala(int tipo)
{
	if (tipo=1) {
		for (int i = 0; i < salas.size();i++)
			if(salas[i]==NULL)
		salas.push_back(new Sala("Propulsor Adicional"));
		cout << "criado";
	}
	if (tipo = 2) {
		salas.push_back(new Sala("Beliche"));
	}
	if (tipo = 3) {
		salas.push_back(new Sala("Raio Laser"));
	}
	if (tipo = 4) {
		salas.push_back(new Sala("Auto-Reparador"));
	}
	if (tipo = 5) {
		salas.push_back(new Sala("Sistema Seguranca"));
	}
	if (tipo = 6) {
		salas.push_back(new Sala("Enfermaria"));
	}
	if (tipo = 7) {
		salas.push_back(new Sala("Sala de Armas"));
	}
	if (tipo = 8) {
		salas.push_back(new Sala("Alojamento Capitao"));
	}
	if (tipo = 1) {
		salas.push_back(new Sala("Oficina Robotica"));
	}
}