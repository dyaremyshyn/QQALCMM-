#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Capitulo 
{
public:
	Capitulo(string t, int p) : texto(t), pags(p) {};
	Capitulo();
	~Capitulo ();
	void setexto(string x) { texto = x; };
	void setpags(int p) { pags = p; };
	string obtemText() { return texto; };
	Capitulo &operator<<(const string &x);
	//ostream &operator<<(ostream & saida, const Capitulo &c);
private:
	string texto;
	int pags;

};
class Livro {
	Capitulo *texto;
	int numCaps;
	vector<Capitulo*> capitulos;
public: 
	void adiciona(string texto, int pags);
	Livro();
	~Livro();
	Livro &operator=(const Livro &c);
	Livro(const Livro &l);

};

void Livro::adiciona(string texto, int pags)
{
	Capitulo *c;
	capitulos.push_back(c);
	c->setexto(texto);
	c->setpags(pags);
}

Livro::Livro() {};
Livro::~Livro() {
	for (unsigned int i = 0; i < capitulos.size(); i++)
	{
		delete capitulos[i];
	}
};
Capitulo ::Capitulo()
{
	texto = "";
}
Capitulo &Capitulo::operator<<(const string &x) {
	texto.append(x);
	return *this;
}
Livro &Livro::operator=(const Livro &c)
{
		for (unsigned int i = 0; i < this->capitulos.size(); i++)
		{
			delete capitulos[i];
		}
		capitulos.clear();

		for (unsigned int i = 0; i < c.capitulos.size(); i++)
			this->capitulos.push_back(new Capitulo(*c.capitulos[i]));
		return *this;

}
Livro::Livro(const Livro &l)
{
		for (unsigned int i = 0; i < l.capitulos.size(); i++)
			this->capitulos.push_back(new Capitulo(*l.capitulos[i]));
}
//ostream &operator<<(ostream & saida, const Capitulo &c) {
//	return saida << c.obtemText() <<
//}
Capitulo ::~Capitulo ()
{
}
