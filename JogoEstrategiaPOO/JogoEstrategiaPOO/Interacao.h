#pragma once
#include "Jogo.h"
class Interacao

{
	Consola c;
public:
	Interacao();
	void Entrada(); //Fun��o s� para ficar com um aspeto grafico inicial mais bonito
	void Configurar_Nave(); //Fun��o para ler comandos inseridos pelo utilizador
	void MostraAmbienteGrafico(); //Mostrar nave
	void next() { }
	void Novo_Jogo();
	void Jogar();
private:
	Jogo *jogo; //Ponteiro para poder aceder a classe jogo
	bool jogo_criado;
};

