#include "Jogo.h"

Jogo::Jogo(int d){
	dificuldade = d;
	salas.resize(12);
	salas.at(0) = new Sala("Propulsor");
	salas.at(4) = new Sala("Sala Maquinas");
	salas.at(5) = new Sala("Suporte de Vida");
	salas.at(6) = new Sala("Controlo Escudo");
	salas.at(7) = new Sala("Ponte");
	salas.at(8) = new Sala("Propulsor");
}
Jogo::~Jogo(){}


void Jogo::AdicionaSala(int tipo)
{
	for (int i = 0; i < salas.size(); i++) {
		if (tipo == 1) {
				if (salas[i] == NULL) {
					salas.at(i) = new Sala("Propulsor Adicional"); //Atribuir � posi��o i do vetor que esteja vazia a sala "propulsor adicional" 
					DesenhaSala(i, salas[i]->getnome());
					break;
				}
		}
		if (tipo == 2) {
				if (salas[i] == NULL) {
					salas.at(i) = new Sala("Beliche"); //Atribuir � posi��o i do vetor que esteja vazia a sala "propulsor adicional" 
					DesenhaSala(i, salas[i]->getnome());
					break;
				}
		}
		if (tipo == 3) {
				if (salas[i] == NULL) {
					salas.at(i) = new Sala("Raio Laser"); //Atribuir � posi��o i do vetor que esteja vazia a sala "propulsor adicional" 
					DesenhaSala(i, salas[i]->getnome());
					break;
				}
		}
		if (tipo == 4) {
				if (salas[i] == NULL) {
					salas.at(i) = new Sala("Auto-reparador"); //Atribuir � posi��o i do vetor que esteja vazia a sala "propulsor adicional" 
					DesenhaSala(i, salas[i]->getnome());
					break;
				}
		}
		if (tipo == 5) {
				if (salas[i] == NULL) {
					salas.at(i) = new Sala("Sistema Seguranca"); //Atribuir � posi��o i do vetor que esteja vazia a sala "propulsor adicional" 
					DesenhaSala(i, salas[i]->getnome());
					break;
				}
		}
		if (tipo == 6) {
				if (salas[i] == NULL) {
					salas.at(i) = new Sala("Enfermaria"); //Atribuir � posi��o i do vetor que esteja vazia a sala "propulsor adicional" 
					DesenhaSala(i, salas[i]->getnome());
					break;
				}
		}
		if (tipo == 7) {
				if (salas[i] == NULL) {
					salas.at(i) = new Sala("Sala Armas"); //Atribuir � posi��o i do vetor que esteja vazia a sala "propulsor adicional" 
					DesenhaSala(i, salas[i]->getnome());
					break;
				}
		}
		if (tipo == 8) {
				if (salas[i] == NULL) {
					salas.at(i) = new Sala("Alojamentos Capitao"); //Atribuir � posi��o i do vetor que esteja vazia a sala "propulsor adicional" 
					DesenhaSala(i, salas[i]->getnome());
					break;
				}
		}
		if (tipo == 9) {
				if (salas[i] == NULL) {
					salas.at(i) = new Sala("Oficina Robotica"); //Atribuir � posi��o i do vetor que esteja vazia a sala "propulsor adicional" 
					DesenhaSala(i, salas[i]->getnome());
					break;
				}
		}
		if (salas[11] != NULL)
		{
			cout << "Nao pode adicionar mais";
			break;
		}
	}
}

void Jogo::DesenhaSala(int i, string n) {
	regex regex_pattern("^[A-Za-z]+");
	if (i == 1) //Primeira sala com "?" na primeira linha
	{
		c.gotoxy(16, 5);
		if (!regex_match(n, regex_pattern)) //Verificar se n�o existem espa�os nem caracteres na string
		{
			string n1, n2;
			n1 = n.substr(0, n.find(" ")); //n1 fica com a primeira parte da string
			n2 = n.substr(n.find(" ") + 1, 10); //n2 fica com a segunda parte da string (a seguir a um espa�o ou a seguir a um "-")
			cout << n1;
			c.gotoxy(16, 6);
			cout << n2;
		}
		else
			cout << n;
	}
	if (i == 2) //Segunda sala com "?" na primeira linha
	{
		c.gotoxy(26, 5);
		if (!regex_match(n, regex_pattern)) //Verificar se n�o existem espa�os nem caracteres na string
		{
			string n1, n2;
			n1 = n.substr(0, n.find(" ")); //n1 fica com a primeira parte da string
			n2 = n.substr(n.find(" ") + 1, 10); //n2 fica com a segunda parte da string (a seguir a um espa�o ou a seguir a um "-")
			cout << n1;
			c.gotoxy(26, 6);
			cout << n2;
		}
		else
			cout << n;
	}
	if (i == 3) //Terceira sala com "?" na primeira linha
	{
		c.gotoxy(36, 5);
		if (!regex_match(n, regex_pattern)) //Verificar se n�o existem espa�os nem caracteres na string
		{
			string n1, n2;
			n1 = n.substr(0, n.find(" ")); //n1 fica com a primeira parte da string
			n2 = n.substr(n.find(" ") + 1, 10); //n2 fica com a segunda parte da string (a seguir a um espa�o ou a seguir a um "-")
			cout << n1;
			c.gotoxy(36, 6);
			cout << n2;
		}
		else
			cout << n;
	}
	if (i == 9) //Quarta sala com "?" na Terceira linha
	{
		c.gotoxy(16, 21);
		if (!regex_match(n, regex_pattern)) //Verificar se n�o existem espa�os nem caracteres na string
		{
			string n1, n2;
			n1 = n.substr(0, n.find(" ")); //n1 fica com a primeira parte da string
			n2 = n.substr(n.find(" ") + 1, 10); //n2 fica com a segunda parte da string (a seguir a um espa�o ou a seguir a um "-")
			cout << n1;
			c.gotoxy(16, 22);
			cout << n2;
		}
		else
			cout << n;
	}
	if (i == 10) //Quinta sala com "?" na Terceira linha
	{
		c.gotoxy(26, 21);
		if (!regex_match(n, regex_pattern)) //Verificar se n�o existem espa�os nem caracteres na string
		{
			string n1, n2;
			n1 = n.substr(0, n.find(" ")); //n1 fica com a primeira parte da string
			n2 = n.substr(n.find(" ") + 1, 10); //n2 fica com a segunda parte da string (a seguir a um espa�o ou a seguir a um "-")
			cout << n1;
			c.gotoxy(26, 22);
			cout << n2;
		}
		else
			cout << n;
	}
	if (i == 11) //Sexta sala com "?" na Terceira linha
	{
		c.gotoxy(36, 21);
		if (!regex_match(n, regex_pattern)) //Verificar se n�o existem espa�os nem caracteres na string
		{
			string n1, n2;
			n1 = n.substr(0, n.find(" ")); //n1 fica com a primeira parte da string
			n2 = n.substr(n.find(" ") + 1, 10); //n2 fica com a segunda parte da string (a seguir a um espa�o ou a seguir a um "-")
			cout << n1;
			c.gotoxy(36, 22);
			cout << n2;
		}
		else
			cout << n;
	}

}