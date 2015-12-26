#include "Jogo.h"

Jogo::Jogo(int d){
	dificuldade = d;
	fim = 4000 + 1000 * d;
	salas.resize(12);
	salas.at(0) = new Sala("Propulsor");
	salas.at(4) = new Sala("Sala Maquinas");
	salas.at(5) = new Sala("Suporte de Vida");
	salas.at(6) = new Sala("Controlo Escudo");
	salas.at(7) = new Sala("Ponte");
	salas.at(8) = new Sala("Propulsor");
	tripulantes.push_back(new Tripulante());
	tripulantes.push_back(new Tripulante());
	tripulantes.push_back(new Tripulante());
}

Jogo::~Jogo(){}

void Jogo::AdicionaSala(Sala *s)
{
	for (int i = 0; i < salas.size(); i++) {
		//if (salas[i]->getnome() == "Alojamento Capitao")          //So pode existir uma sala para alijar o capitao
		//	{	
		//		cout << "Ja existe uma sala para alojar o capitao";
		//		break;
		//	}
		if (salas[i] == NULL) 
			{          //Adiciona sala caso ainda haja espaço no vetor de salas que existe na nave
				salas.at(i) = s;			//Atribuir à posição i do vetor que esteja vazia a sala "propulsor adicional" 
				if (s->getnome() == "Beliche")
					tripulantes.push_back(new Tripulante());
				DesenhaSala(i, salas[i]->getnome());
				break;
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
		if (!regex_match(n, regex_pattern)) //Verificar se não existem espaços nem caracteres na string
		{
			string n1, n2;
			n1 = n.substr(0, n.find(" ")); //n1 fica com a primeira parte da string
			n2 = n.substr(n.find(" ") + 1, 10); //n2 fica com a segunda parte da string (a seguir a um espaço ou a seguir a um "-")
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
		if (!regex_match(n, regex_pattern)) //Verificar se não existem espaços nem caracteres na string
		{
			string n1, n2;
			n1 = n.substr(0, n.find(" ")); //n1 fica com a primeira parte da string
			n2 = n.substr(n.find(" ") + 1, 10); //n2 fica com a segunda parte da string (a seguir a um espaço ou a seguir a um "-")
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
		if (!regex_match(n, regex_pattern)) //Verificar se não existem espaços nem caracteres na string
		{
			string n1, n2;
			n1 = n.substr(0, n.find(" ")); //n1 fica com a primeira parte da string
			n2 = n.substr(n.find(" ") + 1, 10); //n2 fica com a segunda parte da string (a seguir a um espaço ou a seguir a um "-")
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
		if (!regex_match(n, regex_pattern)) //Verificar se não existem espaços nem caracteres na string
		{
			string n1, n2;
			n1 = n.substr(0, n.find(" ")); //n1 fica com a primeira parte da string
			n2 = n.substr(n.find(" ") + 1, 10); //n2 fica com a segunda parte da string (a seguir a um espaço ou a seguir a um "-")
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
		if (!regex_match(n, regex_pattern)) //Verificar se não existem espaços nem caracteres na string
		{
			string n1, n2;
			n1 = n.substr(0, n.find(" ")); //n1 fica com a primeira parte da string
			n2 = n.substr(n.find(" ") + 1, 10); //n2 fica com a segunda parte da string (a seguir a um espaço ou a seguir a um "-")
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
		if (!regex_match(n, regex_pattern)) //Verificar se não existem espaços nem caracteres na string
		{
			string n1, n2;
			n1 = n.substr(0, n.find(" ")); //n1 fica com a primeira parte da string
			n2 = n.substr(n.find(" ") + 1, 10); //n2 fica com a segunda parte da string (a seguir a um espaço ou a seguir a um "-")
			cout << n1;
			c.gotoxy(36, 22);
			cout << n2;
		}
		else
			cout << n;
	}

}

void Jogo::Move(string cmd)
{
	string e;
	int p;
	//do{
		e = cmd.substr(0, 1); //elemento tripulante "e" fica com a primeira parte da string
		p = stoi(cmd.substr(1, 99999)); //posição "p" fica com a segunda parte da string
		if (p > 12)
		{
			c.gotoxy(6, 35);
			cout << "Sala invalida!";
		}
		

		for (unsigned int i = 0; i < tripulantes.size(); i++)
		{
			if (salas[p-1]!=NULL &&  tripulantes[i]->getNome() == e && tripulantes[i]->getOndeEstou()==NULL) //Verificar se existe uma sala criada e se a unidade ja nao esta noutra sala
			{
				tripulantes[i]->setOndeEstou(salas[p-1]) ; //Vai para a sala indicada menos 1, pois o vector começa no 0
				DesenhaTripulante(e, p);
				break;
			}
		}
	//} while (cmd!="feito");
}

void Jogo::DesenhaTripulante(string e, int p)
{
	if (p == 1) //Primeira sala
	{
		c.gotoxy(6, 6);
		cout << e;
		
	}
	if (p == 2) //Segunda sala 
	{
		c.gotoxy(16, 6);
		cout << e;
	}
	if (p == 3) //Terceira sala 
	{
		c.gotoxy(26, 6);
		cout << e;
	}
	if (p == 4) //Quarta sala
	{
		c.gotoxy(36, 6);
		cout << e;
	}
	if (p == 5) 
	{
		c.gotoxy(16, 16);
		cout << e;
	}
	if (p == 6) 
	{
		c.gotoxy(26, 16);
		cout << e;
	}
	if (p == 7)
	{
		c.gotoxy(36, 16);
		cout << e;
	}
	if (p == 8) 
	{
		c.gotoxy(46, 16);
		cout << e;
	}
	if (p == 9)
	{
		c.gotoxy(6, 24);
		cout << e;
	}
	if (p == 10)
	{
		c.gotoxy(16, 24);
		cout << e;
	}
	if (p == 11) 
	{
		c.gotoxy(26, 24);
		cout << e;
	}
	if (p == 12)
	{
		c.gotoxy(36, 24);
		cout << e;
	}
}

void Jogo::turno()   // 
{
	int propulsao=0;

	for (unsigned int i = 0; i < tripulantes.size(); i++) //Percorrer o vector de tripulantes
	{
		if (tripulantes[i]->estouPonte(tripulantes[i]->getOndeEstou()) == true) //Algum tripulante está a operar a ponte, a nave pode progredir
		{
			for (unsigned int i = 0; i < salas.size(); i++) //Verificar quantos propulsores a nave tem, a potencia da nave para deslocar-se é diretamente proporcional aos propulsores instalados
			{
				if (salas[i]->getnome() == "Propulsor" || salas[i]->getnome() == "Propulsor Adicional")
				{
					propulsao += salas[i]->getintegridade(); 
				}
				//if (salas[4]->getintegridade() == 100  /*salas[7]->getestado()==true*/) //Sala de maquinas, se estiver em bom estado, a nave anda
					
				
			}
		}
	}
	percurso = percurso + propulsao;
	c.gotoxy(65, 3);
	cout << "Ja percorreu: " << percurso;
	//for (unsigned int i = 0; i < salas.size(); i++) //Verificar se beliches da nave estao destruidos, caso positivo, chegou ao fim do jogo
	//{
	//	if (salas[i]->getnome() == "Beliche" && salas[i]->getintegridade() <= 0)
	//		fim_jogo = true;
	//}

}

void Jogo::TripulantesDisponiveis()
{
	int j=16;
	for (unsigned int i = 0; i < tripulantes.size(); i++)
	{
		c.gotoxy(65, j);
		cout << tripulantes[i]->getNome();
		j++;
	}
}