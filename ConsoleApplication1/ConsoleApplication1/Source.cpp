#include "Header.h"
#include <string>
using namespace std;
int main() {
	Capitulo cap;
	const Capitulo conclusao("isto é facil", 100);
	int pags;
	string a = "Introducao", b = "texto de introducao", c1 = "etc";
	cap << a << b;
	//cap = cap + c;
	//cout << cap << conclusao << "fim";
	//pags = cap;
	Livro a1;
	a1.adiciona("introducao", 5);
	a1.adiciona("conclusao", 10);
	Livro b1 = a1;
	
	Livro &c = a1;
	c = b;
	return 0;
}