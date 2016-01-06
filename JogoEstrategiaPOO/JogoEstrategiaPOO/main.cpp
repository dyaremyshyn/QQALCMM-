#include <cstdlib>
#include "Consola.h"
#include "Jogo.h"
#include "Interacao.h"

using namespace std;

int main(int argc, char** argv) {

    
    //********************** INTERFACE **************************************
	Interacao control;
	control.Entrada();
	control.MostraAmbienteGrafico();
	control.Configurar_Nave();
	control.Jogar();

}
    


