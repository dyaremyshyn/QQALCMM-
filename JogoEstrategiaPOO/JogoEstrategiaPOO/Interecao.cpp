#include "Interacao.h"
Interacao::Interacao()
{
		jogo_criado = false; //O jogador ainda nao iniciou o jogo
}

void Interacao::Entrada()
{
	c.setTextSize(8, 8); //Temos de diminuir o tamanho da letra para caber dentro da janela
	c.setScreenSize(95, 85);  //Valores muito altos podem nao dar
	c.setBackgroundColor(c.PRETO);  //Utilizar o c.Preto para aceder a constante para o Preto
	c.setTextColor(c.BRANCO_CLARO);
	c.clrscr();
	ifstream myReadFile;
	myReadFile.open("Entrada.txt");
	char output[100];
	if (myReadFile.is_open()) {  //Ler todo o ficheiro Entrada.txt e desenhar caracteres
		while (!myReadFile.eof()) {

			myReadFile >> output;
			cout << output;
			cout << endl;

		}
		myReadFile.close();
	}
	c.setTextSize(8, 8);
	c.setTextColor(c.VERMELHO_CLARO);
	cout << "\n****************   OOOOOOOOOOOO)) OOOOOOOOOOOOO)) O))               ****************  \n";
	cout << "****************   O))                  O))       O))               ****************  \n";
	cout << "****************   O))                  O))       O))               ****************  \n";
	cout << "****************   OOOOOO))             O))       O))               ****************  \n";
	cout << "****************   O))                  O))       O))               ****************  \n";
	cout << "****************   O))                  O))       O))               ****************  \n";
	cout << "****************   O))                  O))       OOOOOOOOOOOOO))   ****************  \n";
	c.gotoxy(35, 92);
	c.setTextColor(c.AMARELO_CLARO);
	cout << "<<INSERT COIN!>>\n";
	getchar();
	c.clrscr();
	c.setTextColor(c.BRANCO_CLARO);
	c.setBackgroundColor(c.PRETO);  // favor consultar o .h para ver as constantes
	c.setTextColor(c.BRANCO_CLARO);
	c.setScreenSize(80, 100);
}

void Interacao::MostraAmbienteGrafico()
{
	c.setScreenSize(45, 115);

	/*Desenhar janela esquerda onde vai estar a nave*/
	c.gotoxy(1, 1);
	for (int i = 0; i < 60;i++) //Desenhar linha horizontal superior da janela
		cout << char(220);

	c.gotoxy(1, 30);
	for (int i = 0; i < 60; i++) //Desenhar linha horizontal inferior da janela
		cout << char(220);

	for (int j = 2; j < 31; j++) //Desenhar linha vertical esquerda da janela
		{
			c.gotoxy(1, j);
			cout << char(178);
		}

	for (int j = 2; j < 31; j++) //Desenhar linha vertical direita da janela
	{
		c.gotoxy(60, j);
		cout << char(178);
	}


	/*Desenhar janela direita onde vai estar o historico de eventos*/
	c.gotoxy(62, 1);
	for (int i = 0; i < 50; i++) //Desenhar linha horizontal superior da janela
		cout << char(220);

	c.gotoxy(62, 30);
	for (int i = 0; i < 50; i++) //Desenhar linha horizontal inferior da janela
		cout << char(220);

	for (int j = 2; j < 31; j++) //Desenhar linha vertical esquerda da janela
	{
		c.gotoxy(62, j);
		cout << char(178);
	}

	for (int j = 2; j < 31; j++) //Desenhar linha vertical direita da janela
	{
		c.gotoxy(111, j);
		cout << char(178);
	}

	/*Desenhar janela direita onde vai estar a linha de comandos*/
	c.gotoxy(1, 32);
	for (int i = 0; i < 111; i++) //Desenhar linha horizontal superior da janela
		cout << char(220);

	c.gotoxy(1, 42);
	for (int i = 0; i < 111; i++) //Desenhar linha horizontal inferior da janela
		cout << char(220);

	for (int j = 33; j < 43; j++) //Desenhar linha vertical esquerda da janela
	{
		c.gotoxy(1, j);
		cout << char(178);
	}

	for (int j = 33; j < 43; j++) //Desenhar linha vertical direita da janela
	{
		c.gotoxy(111, j);
		cout << char(178);
	}

	/*////////////////////////////////DESENHAR NAVE/////////////////////////////////////////*/
	
	c.gotoxy(5, 4);
	for (int i = 0; i < 40; i++)		//Primeira Linha
		cout << char(178);				//Desenha linha
	c.gotoxy(5, 12);				    //Posição da linha seguinte
	for (int i = 0; i < 50; i++)		//Segunda Linha
		cout << char(178);
	
	c.gotoxy(5, 20);					//Posição da linha seguinte
	for (int i = 0; i < 50; i++)		//Terceira Linha
		cout << char(178);
	
	c.gotoxy(5, 28);					//Posição da linha seguinte
	for (int i = 0; i < 40; i++)		//Quarta Linha
		cout << char(178);

	for (int i = 5; i < 48; i = i + 10) //Ciclo para desenhar colunas da primeira linha da nave
	{
		for (int j = 4; j < 13; j++)    //Cada espaçamente entre as linhas tem 8 caracteres
		{
			c.gotoxy(i, j);
			cout << char(178);
		}
	}

	for (int i = 15; i < 58; i = i + 10) //Ciclo para desenhar colunas da segunda linha da nave
	{
		for (int j = 12; j < 21; j++) //Cada espaçamente entre as linhas tem 8 caracteres
		{
			c.gotoxy(i, j);
			cout << char(178);
		}
	}
	
	for (int i = 5; i < 48; i = i + 10) //Ciclo para desenhar colunas da terceira linha da nave
	{
		for (int j = 20; j < 29; j++) //Cada espaçamente entre as linhas tem 5 caracteres
		{
			c.gotoxy(i, j);
			cout << char(178);
		}
	}
	c.gotoxy(6, 5);
	cout << "Propulsor";
	c.gotoxy(19, 5);
	cout << "?";
	c.gotoxy(29, 5);
	cout << "?";
	c.gotoxy(39, 5);
	cout << "?";
	c.gotoxy(18, 14);					//Posição do quadrado da sala de maquinas
	cout << "Sala";
	c.gotoxy(17, 15);
	cout << "Maquinas";
	c.gotoxy(27, 14);
	cout << "Suporte";
	c.gotoxy(27, 15);
	cout << "de Vida";
	c.gotoxy(37, 14);
	cout << "Controlo";
	c.gotoxy(36, 15);
	cout << "de Escudo";
	c.gotoxy(48, 14);
	cout << "Ponte";
	c.gotoxy(6, 21);
	cout << "Propulsor";
	c.gotoxy(20, 21);
	cout << "?";
	c.gotoxy(30, 21);
	cout << "?";
	c.gotoxy(40, 21);
	cout << "?";

	/*************************************Mostrar comandos disponiveis********************************/
	c.gotoxy(80, 2);
	cout << "Configure a nave: ";
	c.gotoxy(65, 3);
	cout << "Comandos: ";
	c.gotoxy(65, 4);
	cout << "pa -> Propulsores Adicionais";
	c.gotoxy(65, 5);
	cout << "b -> Beliche";
	c.gotoxy(65, 6);
	cout << "rl -> Raio Laser";
	c.gotoxy(65, 7);
	cout << "ar -> Auto-Reparador";
	c.gotoxy(65, 8);
	cout << "ss -> Sistema de Segurança Interno";
	c.gotoxy(65, 9);
	cout << "e -> Enfermaria";
	c.gotoxy(65, 10);
	cout << "sa -> Sala de Armas";
	c.gotoxy(65, 11);
	cout << "ac -> Alojamentos do Capitão";
	c.gotoxy(65, 12);
	cout << "or -> Oficina Robótica";
	

	Novo_Jogo();

	c.gotoxy(50, 33);
	cout << "<<Comandos>>";
	c.gotoxy(3, 35);
	cout << ">>:";

}

void Interacao::Novo_Jogo()
{
	string n;
	
	regex regex_pattern("^[1-9]+$");
	do
	{
		c.gotoxy(3, 35);
		c.clrscr_comandline();
		cout << "Indique a Dificuldade do jogo: ";
		cin >> n;
	} while (!regex_match(n, regex_pattern));
	
	int valor = atoi(n.c_str()); //converter string n para inteiro
	jogo = new Jogo(valor);
}

void Interacao::Configurar_Nave() {
	regex regex_pattern("[a-z][0-9]+");
	Sala *pa = new Sala("Propulsor Adicional");
	Sala *b = new Sala("Beliche");
	Sala *rl = new Sala("Raio Laser");
	Sala *ar = new Sala("Auto-Reparador");
	Sala *ss = new Sala("Sistema Seguranca");
	Sala *e = new Sala("Enfermaria");
	Sala *sa = new Sala("Sala Armas");
	Sala *ac = new Sala("Alojamento Capitao");
	Sala *ofr = new Sala("Oficina Robotica");

	while (1) {
		c.gotoxy(65, 15);
		cout << "Tripulantes disponiveis para mover: ";
		jogo->TripulantesDisponiveis();
		c.gotoxy(6, 35);
		string comando, cmd;
		c.clrscr_comandline();
		getline(cin, comando);

		if (comando == "next") // passar para próxima iteracção
			next();
		else {
			istringstream iss(comando);
			iss >> cmd;

			//******************************* Comandos Relativos a Configuração da Nave ************************************

			if (cmd == "pa") {
				jogo->AdicionaSala(pa);
			}
			if (cmd == "b") {
				jogo->AdicionaSala(b);
			}
			if (cmd == "rl") {
				jogo->AdicionaSala(rl);
			}
			if (cmd == "ar") {
				jogo->AdicionaSala(ar);
			}
			if (cmd == "ss") {
				jogo->AdicionaSala(ss);
			}
			if (cmd == "e") {
				jogo->AdicionaSala(e);
			}
			if (cmd == "sa") {
				jogo->AdicionaSala(sa);
			}
			if (cmd == "ac") {
				jogo->AdicionaSala(ac);
			}
			if (cmd == "or") {
				jogo->AdicionaSala(ofr);
			}
			if (regex_match(cmd, regex_pattern)) { //Mover tripulantes para salas, so aceita letra seguido de numero
				jogo->Move(cmd);
			}
			if (cmd == "feito")
			{
				Jogar();
			}
		}

	}
}

void Interacao::Jogar()
{
	limpaParteDireita();
	while (1) { //Ler comandos quando estamos a jogar
		regex regex_pattern("[a-z][0-9]+");
		c.gotoxy(6, 35);
		string comando, cmd;
		c.clrscr_comandline();
		getline(cin, comando);
		
		if (comando == "next") { // Validação para passar à próxima iteracção
			jogo->turno(); //O utilizador não quer alterar nada, e avança no turno
			//next();
		}
		else {
			istringstream iss(comando);
			iss >> cmd;
			string e;
			int p;
			
			e = cmd.substr(0, 1); //elemento tripulante "e" fica com a primeira parte da string
			p = stoi(cmd.substr(1, 99999)); //posição "p" fica com a segunda parte da string

			//*******************************Comandos Relativos a controlo dos tripulantes************************************
			if (regex_match(cmd, regex_pattern)) { //Mover tripulantes para salas, so aceita letra seguido de numero
				jogo->Move(cmd);
				jogo->DesenhaTripulante(e,p);
				jogo->turno(); //Depois de tomada a acção do utilizador, avança nos turnos
				next();
			}
		}
	}
}

void Interacao::limpaParteDireita()
{
	int i, j;
	c.gotoxy(80, 2);
	cout << "                            ";
	for ( i = 65; i < 66; i++) {
		for ( j = 3; j < 20; j++) {
			c.gotoxy(i, j);
			cout << "                                     ";
		}
	}
	
}


void Interacao::sorteiaEvento() {

}
