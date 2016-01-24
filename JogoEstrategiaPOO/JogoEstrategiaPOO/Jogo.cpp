#include "Jogo.h"
#include "Tripulacao.h"
#include "Unidades.h"

Jogo::Jogo(int d){
	iteracao = 0;
	percurso = 0;
	dificuldade = d;
	fim = 4000 + 1000 * d;
	salas.resize(12);
	salas.at(0) = new Propulsor();
	salas.at(1) = new Sala();
	salas.at(2) = new Sala();
	salas.at(3) = new Sala();
	salas.at(4) = new Sala_Maquinas();
	salas.at(5) = new Suporte_Vida();
	salas.at(6) = new Controlo_Escudo();
	salas.at(7) = new Ponte();
	salas.at(8) = new Propulsor();
	salas.at(9) = new Sala();
	salas.at(10) = new Sala();
	salas.at(11) = new Sala();
	PrimeirosTripulantes();
}

Jogo::~Jogo(){
	for (unsigned int i = 0; i < eventos.size(); i++)
		delete eventos[i];
}

void Jogo::PrimeirosTripulantes()
{
	for (int i = 0; i < 3; i++)
	{
		Tripulante *t = new Tripulante;
		int pos = 4 + (rand() % (int)(7 - 4 + 1));
		salas[pos]->AdicionaUnidade(t);
	}
}

bool Jogo::VerificaExisteSala(string nome_sala)
{
	for (int i = 0; i < salas.size(); i++)
	{
		if (salas[i]->getnome() == nome_sala)
			return true;
	}
	return false;
}

bool Jogo::VerificaExisteTripulantes(int pos)
{
	if (salas[pos]->getTripulantes())
		return true;

}
void Jogo::AdicionaSala(Sala *s) {
	for (int i = 0; i < salas.size(); i++) {
		if (salas[i]->getnome() == "Alojamento Capitao")          //So pode existir uma sala para alijar o capitao
		{	
			cout << "Ja existe uma sala para alojar o capitao";
			break;
		}
		if (salas[i]->getnome()== "?")
		{          //Adiciona sala caso ainda haja espaço no vetor de salas que existe na nave
			delete salas[i];
			salas.at(i) = s;
			break;
		}
		if (salas[11]->getnome() != "?")
		{
			c.gotoxy(3, 35);
			cout << "AVISO!" << endl;
			c.gotoxy(3, 36);
			cout << "Nao pode adicionar mais salas.";
			break;
		}
	}
}
void Jogo::Move(string cmd)
{
	int i = 0;
	string arr[4];
	stringstream ssin(cmd);
	while (ssin.good() && i < 4) {
		ssin >> arr[i];
		++i;
	}
		if (stoi(arr[1]) > 12 || stoi(arr[2]) > 12)
		{
			c.gotoxy(6, 35);
			cout << "Salas invalidas!";
		}
		if (salas.at(stoi(arr[1])-1)->VerificaExisteUnidade(arr[0]) == true)
		{
			salas.at(stoi(arr[2]))->AdicionaUnidade(salas[stoi(arr[1])]->RemoveUnidade(arr[0]));
		}
		
}
bool Jogo::chegouFim(int p) {
	if (p >= fim)
		return true;
	return false;
}
void Jogo::turno()   
{
	int propulsao=0;
	iteracao += 1;

	//if (!chegouFim(percurso)) {
	//	for (unsigned int i = 0; i < tripulantes.size(); i++) //Percorrer o vector de tripulantes
	//	{
	//		if (tripulantes[i]->estouPonte(tripulantes[i]->getOndeEstou()) == true) //Algum tripulante está a operar a ponte, a nave pode progredir
	//		{
	//			for (unsigned int i = 0; i < salas.size(); i++) //Verificar quantos propulsores a nave tem, a potencia da nave para deslocar-se é diretamente proporcional aos propulsores instalados
	//			{
	//				if (salas[i]->getnome() == "Propulsor" || salas[i]->getnome() == "Propulsor Adicional")
	//				{
	//					propulsao += salas[i]->getintegridade();
	//				}
	//				//if (salas[4]->getintegridade() == 100  /*salas[7]->getestado()==true*/) //Sala de maquinas, se estiver em bom estado, a nave anda

	//			}
	//			percurso += propulsao;
	//			c.gotoxy(65, 3);
	//			cout << "********* Iteraccao: " << iteracao << " *********" << endl;
	//			c.gotoxy(65, 5);
	//			cout << "Objetivo: " << fim << "km" << endl;
	//			c.gotoxy(65, 6);
	//			cout << "Percurreu: " << percurso << "km" << endl;
	//			c.gotoxy(65, 7);
	//			cout << "Faltam: " << fim-percurso << "km" << endl;
	//		}
	//	}
	//	if (percurso == 0) {
	//		c.gotoxy(65, 5);
	//		cout << "Ninguem esta a operar a Ponte" << endl;
	//	}
	//}
	/*else {
		c.gotoxy(65, 5);
		cout << "Chegou ao fim do percurso!" << endl;
	}*/



	//for (unsigned int i = 0; i < salas.size(); i++) //Verificar se beliches da nave estao destruidos, caso positivo, chegou ao fim do jogo
	//{
	//	if (salas[i]->getnome() == "Beliche" && salas[i]->getintegridade() <= 0)
	//		fim_jogo = true;
	//}

}
void Jogo::TripulantesDisponiveis()
{
	/*int j=16;
	for (unsigned int i = 0; i < salas.size(); i++)
	{
		c.gotoxy(120, j);
		cout << salas[i]->getUnidades();
		j++;
	
	}*/
}
vector<Sala*> Jogo::getSalas() {
	return salas;
}
void Jogo::addEvento(Evento *e) {
	eventos.push_back(e);
}
/*
bool Jogo::sorteiaEvento() {
	srand(time(NULL));
	int r = rand() % 100 + 1;
	if (r > 70)
		return true;
	return false;
}
*/
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
	if (salas[11]->getnome() == "?")
		return true;
	else
		return false;
}
string Jogo::getNomeSala(int id) const
{
	return salas[id]->getnome();
}
string Jogo::getTripulantes(int salai) const
{
	return salas[salai]->getUnidades();
}
void Jogo::gerirDano(int dano, string e) { //recebemos o maior dano que um determinado evento proporciona e gerimos 

	if (e == "ChuvaMeteoritos") { // para o caso da chuva de meteoritos o dano diminui
		danoChuvaMeteoritos(dano);
	}
	else if (e == "outroEvento")
		cout << "outroevento";
	
	
}
void Jogo::danoChuvaMeteoritos(int dano) {
	int d = 0;

	if (operaPonte()) 
		dano -= 2;
	d = dano + (rand() % (int)((dano * 2) - dano + 1));

	if (existeRaioLaser()) {
		if (operaRaioLaser()) {
			for (int i = 0; i < d; i++) {
				srand(time(NULL));
				int prob = 0 + (rand() % (int)(100 - 0 + 1)); // valores aleatório entre 3 e 5

				if (prob >= 50) { // o que acontece se alguém estiver a operar a sala Raio Laser ?!
					d -= 1;
				}
			}
		}
	}

	if (d > 0) {
		for (int j = 0; j < d; j++) {
			if(salas[6]->getintegridade()>0)
				salas[6]->recebeDano(10);	// NÃO ESTÁ CORRETA A POSICAO DA SALA, ALTERAR!!!!!!!!!!!!!!!!!!!
			else {
				int x = 0 + (rand() % (int)(11 - 0 + 1));
				salas[x]->recebeDano(10);
				salas[x]->setOxigenio(0);
			}
		}
	}

}
bool Jogo::existeRaioLaser() {
	for (int j = 0; j < salas.size(); j++) // vê se temos algum raio laser na nave
		if (salas[j]->getnome() == "Raio Laser")
			return true;
	return false;	
}
bool Jogo::operaPonte() {
	/*for (int i = 0; i < tripulantes.size(); i++) 
		if (tripulantes[i]->getOndeEstou()->getnome() == "Ponte") 
			return true;
	return false;*/
	return true;
}
bool Jogo::operaRaioLaser() {
	/*for (int i = 0; i < tripulantes.size(); i++) 
		if (tripulantes[i]->getOndeEstou()->getnome() == "Raio Laser") 
			return true;
	return false;*/
	return true;
}
