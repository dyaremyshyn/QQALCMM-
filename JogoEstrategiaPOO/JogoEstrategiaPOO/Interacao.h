#pragma once
#include "Jogo.h"
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
private:
	Jogo *jogo; //Ponteiro para poder aceder a classe jogo
	bool jogo_criado;
	void limpaParteDireita();
};

