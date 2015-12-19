#pragma once
#include "Jogo.h"
class Interacao

{
	Consola c;
public:
	Interacao();
	void Entrada(); //Função só para ficar com um aspeto grafico inicial mais bonito
	void leComandos(); //Função para ler comandos inseridos pelo utilizador
	void MostraAmbienteGrafico(); //Mostrar nave
	void next() { }
	void sets_cmd(int s);
	void Novo_Jogo();
private:
	Jogo *jogo; //Ponteiro para poder aceder a classe jogo
	bool jogo_criado;
};

