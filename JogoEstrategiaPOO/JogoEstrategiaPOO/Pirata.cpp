#include "Pirata.h"

Pirata::Pirata(string n="Pirata"):nome(n){}

Pirata::~Pirata() { }

string Pirata::getNome() { return nome; }