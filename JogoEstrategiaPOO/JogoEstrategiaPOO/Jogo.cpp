#include "Jogo.h"


Jogo::Jogo(int d){
	iteracao = 0;
	percurso = 0;
	dificuldade = d;
	fim = 4000 + 1000 * d;
	salas.resize(12);
	salas.at(0) = new Sala("Propulsor");
	salas.at(1) = new Sala("?");
	salas.at(2) = new Sala("?");
	salas.at(3) = new Sala("?");
	salas.at(4) = new Sala("Sala Maquinas");
	salas.at(5) = new Sala("Suporte de Vida");
	salas.at(6) = new Sala("Controlo Escudo");
	salas.at(7) = new Sala("Ponte");
	salas.at(8) = new Sala("Propulsor");
	salas.at(9) = new Sala("?");
	salas.at(10) = new Sala("?");
	salas.at(11) = new Sala("?");
	tripulantes.push_back(new Tripulante());
	tripulantes.push_back(new Tripulante());
	tripulantes.push_back(new Tripulante());
}

Jogo::~Jogo(){
	for (int i = 0; i < eventos.size(); i++)
		delete eventos[i];
}

void Jogo::AdicionaSala(Sala *s) {
	int i = 0;
	do {
		if (salas[i]->getnome() == "?")
		{          //Adiciona sala caso ainda haja espaço no vetor de salas que existe na nave
			salas.at(i) = s;			//Atribuir à posição i do vetor que esteja vazia a sala "propulsor adicional" 
			if (s->getnome() == "Beliche")
				tripulantes.push_back(new Tripulante());
			break;
		}
		if (salas[11]->getnome() != "?")
		{
			c.gotoxy(65, 20);
			cout << "AVISO!" << endl;
			c.gotoxy(65, 21);
			cout <<"Nao pode adicionar mais salas.";
			break;
		}		
		i++;
	} while (i < salas.size());

	/*
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
			c.gotoxy(65, 8);
			cout << "Nao pode adicionar mais";
			break;
		}
	}
	*/
}

void Jogo::Move(string cmd)
{
	string e;
	int p;
		e = cmd.substr(0, 1); //elemento tripulante "e" fica com a primeira parte da string
		p = stoi(cmd.substr(1, 99999)); //posição "p" fica com a segunda parte da string
		if (p > 12)
		{
			c.gotoxy(6, 35);
			cout << "Sala invalida!";
		}
		

		for (unsigned int i = 0; i < tripulantes.size(); i++)
		{
			if (salas[p-1]->getnome()!="?" &&  tripulantes[i]->getNome() == e ) //Verificar se existe uma sala criada e se a unidade ja nao esta noutra sala
			{
				tripulantes[i]->setOndeEstou(salas[p-1]) ; //Vai para a sala indicada menos 1, pois o vector começa no 0
				break;
			}
		}
}

bool Jogo::chegouFim(int p) {
	if (p >= fim)
		return true;
	return false;
}

bool Jogo::VerificaTripulantesSeEstaEmSala() const {

	for (int i = 0; i < tripulantes.size(); i++)
	{
		if (tripulantes[i]->getOndeEstou() != NULL)
			return true;
		else
			return false;
	}
}

void Jogo::turno()   
{
	int propulsao=0;
	iteracao += 1;

	if (!chegouFim(percurso)) {
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
				percurso += propulsao;
				c.gotoxy(65, 3);
				cout << "********* Iteraccao: " << iteracao << " *********" << endl;
				c.gotoxy(65, 5);
				cout << "Objetivo: " << fim << "km" << endl;
				c.gotoxy(65, 6);
				cout << "Percurreu: " << percurso << "km" << endl;
				c.gotoxy(65, 7);
				cout << "Faltam: " << fim-percurso << "km" << endl;
			}
		}
		if (percurso == 0) {
			c.gotoxy(65, 5);
			cout << "Ninguem esta a operar a Ponte" << endl;
		}
	}
	else {
		c.gotoxy(65, 5);
		cout << "Chegou ao fim do percurso!" << endl;
	}



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
		c.gotoxy(120, j);
		cout << tripulantes[i]->getNome();
		j++;
	
	}
}

vector<Sala*> Jogo::getSalas() {
	return salas;
}

string Jogo::getNomeSala(int i) const
{
	return salas[i]->getnome();
}
string Jogo::getTripulantes(int salai) const
{
	ostringstream oss;
	for (int i = 0; i < tripulantes.size(); i++)
	{
		if (tripulantes[i]->getOndeEstou() == salas[salai])
			oss << tripulantes[i]->getNome() << " ";
	}
	return oss.str();
}
void Jogo::addEvento(Evento *e) {
	eventos.push_back(e);
}
bool Jogo::sorteiaEvento() {
	srand(time(NULL));
	int r = rand() % 100 + 1;
	if (r > 70)
		return true;
	return false;
}

vector<Evento*> Jogo::getEventos() {
	return eventos;
}

void Jogo::verificaEstadoSala(Sala * s) {

	if (s->getintegridade() <= 0) {
		fim_jogo = true; //pára o jogo e diz que a nave tem uma sala destruida
		
		mostraMensagens("Uma das salas sofreu dano grave!");
	}
}

void Jogo::mostraMensagens(string msg) {
	c.gotoxy(65, 10);
	cout << msg << endl;
}

bool Jogo::VerificaSalas()
{
	if (salas[11] == NULL)
		return true;
	else
		return false;
}
bool Jogo::guiaNave(Tripulante *a)
{
	if (a != NULL)
		return true;
	return false;
}