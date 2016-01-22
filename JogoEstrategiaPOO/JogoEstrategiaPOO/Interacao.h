#pragma once

#include "Evento.h"
#include "CampoCosmico.h"
#include "AtaqueXenomorfo.h"
#include "AtaquePiratas.h"
#include "ChuvaMeteoritos.h"
#include "Alojamento_Capitao.h"
#include "Auto_Reparador.h"
#include "Beliche.h"
#include "Controlo_Escudo.h"
#include "Oficina_Robotica.h"
#include "Ponte.h"
#include "Propulsor.h"
#include "Propulsor_Adicional.h"
#include "Raio_Laser.h"
#include "Sala_Armas.h"
#include "Sala_Maquinas.h"
#include "Sistema_Seguranca_Interno.h"
#include "Suporte_Vida.h"
#include "Enfermaria.h"

#include "Jogo.h"

class Interacao {
	Consola c;
public:
	Interacao();
	void Entrada(); //Fun��o s� para ficar com um aspeto grafico inicial mais bonito
	void Configurar_Nave(); //Fun��o para ler comandos inseridos pelo utilizador
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

