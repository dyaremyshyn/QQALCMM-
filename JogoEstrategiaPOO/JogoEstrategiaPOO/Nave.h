#ifndef NAVE_H
#define	NAVE_H

#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>
#include <vector>

class Sala;
class Equipamento;
class Tripulante;

using namespace std;

class Nave{
    const string nome;
    vector<Sala*> salas; //O jogador equipa a nava com diferentes salas
	vector<Equipamento*> equipamentos; //O jogador equipa a nava com diferentes equipamentos
	vector<Tripulante*> tripulantes; //O jogador equipa a nava com diferentes tripulantes
	
public:
    Nave(const string n);
    ~Nave();
    
	bool guiaNave(Tripulante *a);

private:
    
};

#endif	/* NAVE_H */

