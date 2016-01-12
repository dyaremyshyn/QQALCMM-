#pragma once
#include "Jogo.h"
#include "Evento.h"
#include "CampoCosmico.h"
#include "AtaqueXenomorfo.h"
#include "AtaquePiratas.h"
#include "ChuvaMeteoritos.h"

class Interacao {
	Consola c;
public:
	Interacao();
	void Entrada(); //Função só para ficar com um aspeto grafico inicial mais bonito
	void Configurar_Nave(); //Função para ler comandos inseridos pelo utilizador
	void MostraAmbienteGrafico(); //Mostrar nave
	void next() { }
	void Novo_Jogo();
	void Jogar();
	void gerirEvento();
	void Jogo_A_Iniciar();

	
	//int escreveIntegridade(int pos);
private:
	Jogo *jogo; //Ponteiro para poder aceder a classe jogo
	bool jogo_criado;
	void limpaParteDireita();
	int opcaoEvento();
	bool verificaExisteEvento(string e);
	int posEvento(string e);
};

