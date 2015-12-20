#include <cstdlib>

#include "Jogo.h"
#include "Interacao.h"

using namespace std;

int main(int argc, char** argv) {

    
    //********************** INTERFACE **************************************
	Interacao control;
	control.Entrada();
	control.MostraAmbienteGrafico();
	while (1) {
		control.leComandos();
	}
}
    


