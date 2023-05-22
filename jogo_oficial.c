#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <conio.h>

	char matriz1 [15][15];
	char matriz2 [30][30];
	char matriz3 [60][60];
	
  	int fim1=0;
  	int fim2=0;
  	int fim3=0;
  	
  	char tecla1;
  	char tecla2;
  	char tecla3;
  	
  	int x1=7;
  	int y1=7;
 	int x2=15;
	int y2=15;
	int x3=30;
  	int y3=30;
	
  	char chave1='@';
  	char chave2=' ';
  	char chave3=' ';
  	
  	//char carta1= 'X';
  	//char carta2= 'X';
  	//char carta3= 'X';
  	
  	char porta1='D';
  	char porta2='D';
  	char porta3='D';
  	
  	char botao2='O';
  	char botao3='O';
  	
	char espinho2='#';
	char espinho3='#';
	char caixa_espinhos3 = '#';
	char espinhos_chave3 = ' ';
  	
  	int eminemX2=18;
	int eminemY2=25;
	int eminemX3=38;
	int eminemY3=55;
	int monstro3X= 30;
	int monstro3Y= 10;
	
	char tp = ' ';
	
	int lifes=3;
	int lixo;

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int escolha_menu;
	int lixo;
	while(escolha_menu != 3)
	{
		fim1=0;
 		x1=7;
  		y1=7;
  		chave1='@';
  		porta1='D';
	

		system("cls || clear");		
		printf("\n\n\n\n\n\n\n");
		system("color 07");
		printf("   *  #####    ##   ##  ##   ##    ####   #######   #####   ##   ##             ####   ######     ##     ##   ##  ####     #######  ######   *\n");
		system("color 06");
		Sleep(200);
		printf("   *   ## ##   ##   ##  ###  ##   ##  ##   ##   #  ##   ##  ###  ##            ##  ##   ##  ##   ####    ##   ##   ##       ##   #   ##  ##  *\n");
		system("color 05");
		Sleep(200);
		printf("   *   ##  ##  ##   ##  #### ##  ##        ## #    ##   ##  #### ##           ##        ##  ##  ##  ##   ##   ##   ##       ## #     ##  ##  *\n");
		system("color 04");
		Sleep(200);
		printf("   *   ##  ##  ##   ##  ## ####  ##        ####    ##   ##  ## ####           ##        #####   ##  ##   ## # ##   ##       ####     #####   *\n");
		system("color 03");
		Sleep(200);
		printf("   *   ##  ##  ##   ##  ##  ###  ##  ###   ## #    ##   ##  ##  ###           ##        ## ##   ######   #######   ##   #   ## #     ## ##   *\n");
		system("color 02");
		Sleep(200);
		printf("   *   ## ##   ##   ##  ##   ##   ##  ##   ##   #  ##   ##  ##   ##            ##  ##   ##  ##  ##  ##   ### ###   ##  ##   ##   #   ##  ##  *\n");
		system("color 01");
		Sleep(200);
		printf("   *  #####     #####   ##   ##    #####  #######   #####   ##   ##             ####   #### ##  ##  ##   ##   ##  #######  #######  #### ##  *\n");
		system("color 06");
		Sleep(200);
		printf("\n \n \n \n");
		printf("   |==========================================================================================================================================|\n \n \n");
		Sleep(200);
		printf("\t\t\t\t\t /=============\\         /=============\\         /=============\\\n");
		printf("\t\t\t\t\t |  1. JOGAR   |         | 2. TUTORIAL |         |   3. SAIR   | \n");
		printf("\t\t\t\t\t \\=============/         \\=============/         \\=============/\n\n\n");
		Sleep(200);
		printf("   |==========================================================================================================================================|\n \n");
		Sleep(200);
		printf("\t\t\t\t\t\tO QUE VOC? DESEJA FAZER? (1, 2, 3 (sair)): ");
		scanf("%d", &escolha_menu);

		system("cls || clear");

		switch(escolha_menu)
		{

		case (1):
			system("cls || clear");
			Jogo();
			break;
		case (2):
			system("cls || clear");
			tutorial();
			break;
		case (3):
			system("cls || clear");
			sair();
			break;
		default:
			printf("\t\t\t\t\t\tOPS:/  ACHO QUE APERTOU EM ALGUM BOTAO ERRADO\n");
			printf("\n\t\t\t\t\t\t     TENTE NOVAMENTE DIGITANDO 1 E APERTANDO ENTER.");
			printf("\n\t\t\t\t\t\t\t=> ");
			scanf("%d", &lixo);
			break;
				
		}
			
	}


return 0;
}

void tutorial()
{
	printf("\n\n");
	printf("\t  ________________________________________________________________________________________________________________________\n");
	printf("\t /  ____ \\                                                                                                                \\\n");
	printf("\t/  / ___\\ \\                                                                                                                \\\n");
	printf("\t| | /_\\  \\ |                                BEM VINDO, HEROI! PRAPARADO PARA A SUA JORADA?                                  |\n");
	printf("\t\\  \\__/__/ |                                                                                                                |\n");
	printf("\t \\______/  |       Esse e um jogo com tres fases e que vao aumentado de dificuldade ao passar de uma para outra.            |\n");
	printf("\t           |                                                                                                                |\n");
	printf("\t           |        Seu objetivo e abrir a porta final para dorrotar o dragao e salvar a princesa das garras do             |\n");
	printf("\t           |        terrivel dragao. Mas cuidado existem monstros e espinhos te esperando, entao tome cuidado e             |\n");
	printf("\t           |        evite tocar na maioria deles.                                                                           |\n");
	printf("\t           |                                                                                                                |\n");
	printf("\t           |        Mais que sua sorte precisamos da sua coragem, caro heroi. Afinal, a princesa precisa de voce.           |\n");
	printf("\t           |                                                                                                                |\n");
	printf("\t           |                                   ENTAO AQUI VAO ALGUMAS REGRINHAS                                             |\n");
	printf("\t           |                                                                                                                |\n");
	printf("\t           |       1- Voce possiu 3 vidas no durante todo o jogo, se perder todas volta pro menu e tera que fazer           |\n");
	printf("\t           |          tudo do zero.                                                                                         |\n");
	printf("\t           |       2- A cada dano antes da derrota voce retorna a posicao inicial.                                          |\n");
	printf("\t           |       3- Voce nao leva dano se so tocar nas paredes, porem nao pode ultrapassa-las.                            |\n");
	printf("\t           |       4- So pode sair da sala se passar pela porta destrancada.                                                |\n");
	printf("\t           |       5- Existe apenas uma chave por mapa que sempre abrira a porta final.                                     |\n");
	printf("\t           |       6- O teletransporte funciona como entrada e saida, se passar por '>' saira por '<' e vice versa.         |\n");
//	printf("\t           |       7- As cartas sao importante para a historia do jogo, interaja com elas mesmo que nao alterem a           |\n");
//	printf("\t           |          nada no jogo.                                                                                         |\n");
	printf("\t           |       8- Voce so interage com um elemento se entiver em cima dele e apertar a tecla 'i'.                       |\n");
	printf("\t           |                                                                                                                |\n");
	printf("\t           |                                                                                                                |\n");
	printf("\t           |    _______________________________________________________________________________________________________________\n");
	printf("\t           |   / __  \\                                                                                                         \\\n");
	printf("\t           \\  | /__\\  \\                                                                                                         |\n");
	printf("\t            \\  \\___/__/                                                                                                         |\n");
	printf("\t             \\_______/_________________________________________________________________________________________________________/\n");				
	system("pause");
	system("cls");
	printf("\n\n\n\n\n");
	printf("                               CONTROLE                                        ||               JOGABILIDADE                                \n");						
	printf("                                                                               ||                                                           \n");
	printf("                 ____-> SEU PERSONAGEM SE MOVIMENTA PARA FRENTE	               ||     \n");
	printf("                |                                                              ||\n");
	printf("           /----|---\\                                                          ||\n");
	printf("           ||     | |                                                          ||                                                           \n");
	printf("           |\\  /  / |    ____-> SEU PERSONAGEM SE MOVIMENTA PARA A DIREITA     ||   & --------> Simbolo que representa o seu personagem;    \n");
	printf("           | \\/ \\/  |   |                                                      ||   * --------> Simbolo que representa as parede;           \n");
	printf("   /-------^--------^---|-----\\                                                ||   @ --------> Simbolo que representa a chave;             \n");
	printf("   |   _    |   --   |  _     |                                                ||   D --------> Simbolo que representa a porta fechada;     \n");
	printf("   |  |_|   |  '--,  |  | \\   |                                                ||   = --------> Simbolo que representa a porta aberta;      \n");
	printf("   |  | |   |   --'  |  |_/   |                                                ||   O --------> Simbolo que representa o botao;             \n");
	printf("   \\---|----^---|----^--------/                                                ||   # --------> Simbolo que representa os espinho           \n");
	printf("       |        |____-> SEU PERSONAGEM SE MOVIMENTA PARA BAIXO                 ||   > --------> Simbolo que representa o teletransporte;    \n");  
	printf("       |                                                                       ||   ¬ --------> Simbolo que representa o monstro nivel 1;   \n");         
	printf("       |____-> SEU PERSONAGEM SE MOVIMENTA PARA A ESQUERDA                     ||   K --------> Simbolo que representa o monstro nivel 2;   \n");
//	printf("                                                                               ||   X --------> Simbolo que representa a carta              \n");
	printf("           /--------\\                                                          ||                                                           \n");
	printf("       	   |  ---   |                                                          ||                                                           \n");
	printf("           |   |    |                                                          ||                                                           \n");
	printf("           |  ---   |                                                          ||                                                           \n");
	printf("           \\---|----/                                                          ||\n");
	printf("               |____-> SEU PERSONAGEM INTERAGE COM O BOTAO/CARTA               ||                                                           \n");
	printf("\n\n\t\t\t\t\tPREPARADO PARA ESSA AVENTURA? ENTAO DIGITE 1 E DE ENTER PARA CONTINUAR\n");
	printf("\t\t\t\t\t==> ");			
	scanf("%d", &lixo);	
}

void sair()
{
	printf("\n\n\n\n\n\n");
	printf("\t\t\t   Entao eh aqui que nossa aventura chega ao fim. Foi um enorme prazer conhecer um heroi tao valente \n");
	printf("\t\t\t\t\t\t\t\tAte a proxima batalha ;)\n");
	printf("\n\n\n\n");			
	printf("\t\t\t\t\t--------------------------------------------------------------------------\n");
	printf("\t\t\t\t\t|                                                                        |\n");
	printf("\t\t\t\t\t|                        ========================                        |\n");
	printf("\t\t\t\t\t|                        ||  CREDITOS DO JOGO  ||                        |\n");
	printf("\t\t\t\t\t|                        ========================                        |\n");
	printf("\t\t\t\t\t|                                                                        |\n");
	printf("\t\t\t\t\t|            EQUIPE RESPONSAVEL:                                         |\n");
	printf("\t\t\t\t\t|                                                                        |\n");
	printf("\t\t\t\t\t|               ANA CLARA OLIVEIRA BARATINHA                             |\n");
	printf("\t\t\t\t\t|                                                                        |\n");
	printf("\t\t\t\t\t|               ENZO GUIMARAES BEVILAQUA                                 |\n");
	printf("\t\t\t\t\t|                                                                        |\n");
	printf("\t\t\t\t\t|               PAULO VICTOR CARDOSO GONCALVES DA MOTTA FRAZAO           |\n");
	printf("\t\t\t\t\t|                                                                        |\n");
	printf("\t\t\t\t\t--------------------------------------------------------------------------\n\n");			
	printf("\t\t\t\t\tDigite 1 e aperte enter\n");
	scanf("%d", &lixo);
}
                       
void descanso()          
{
	system("cls");
    system("color 0D");
	printf("\n\n\n\n\n\n\t\t\t\t\t\t\t . ABRINDO FASE .  ");
	Sleep(300);
	system("cls");
	printf("\n\n\n\n\n\n\t\t\t\t\t\t\t . .   ABRINDO FASE . . ");
	Sleep(300);
	system("cls");
	printf("\n\n\n\n\n\n\t\t\t\t\t\t\t . . .   ABRINDO FASE . . . ");
	Sleep(300);
	system("cls");
	printf("\n\n\n\n\n\n\t\t\t\t\t\t\t . . . .   ABRINDO FASE . . . . ");
	Sleep(300);
	Beep(700,700);
	system("cls");
}

void historia()
{
	printf("\n\n\n\n");
	printf("\t\t       _______________________________________________     _______________________________________________      \n");
	printf("\t\t    , |                                               \\   /                                    |   |      | `   \n");
	printf("\t\t   / ||                                                \\ /                                     |   |      |  \\  \n");
	printf("\t\t  | ||\\                                                 |                                      |   |      ||  | \n");
	printf("\t\t  ||||/     Era uma vez, em uma epoca distante, quando  |    Desesperado com o sequestro de sua|   |      ||| | \n");
	printf("\t\t  |||||                                                 |                                      |   |      \\|||| \n");
	printf("\t\t  |||||   reis, rainhas, principes e princesa existiam  |  doce gigi, como a chamava carinhosa-|   |      /|||| \n");
	printf("\t\t___||||                                                 |                                      |   |      \\|||| \n");
	printf("\t\t>___||/   por todo o planeta em grande harmonia, um     |  mente, o rei ofereceu a maior recon-| ^ |      /|||| \n");
	printf("\t\t  ||||\\                                                 |                                      |/ \\|      \\|||| \n");
	printf("\t\t  ||||/   terrivel e asqueroso dragao criado nas trevas |  pensa ja vista para quem recuperace a princesa./|||| \n");
	printf("\t\t  ||||\\                                                 |                                                 ||\\|| \n");
	printf("\t\t  |||||   sequestrou a adoravel princesa Giselle, do    |  Porem, por muito tempo ninguem foi capaz de    ||/|| \n");
	printf("\t\t  |||||                                                 |                                                 ||\\|| \n");
	printf("\t\t  |||||  reino de Programares, liderado pelo rei Sr.    |  realizar tal feito.                            ||||| \n");
	printf("\t\t  ||/||                                                 |                                                 ||||| \n");
	printf("\t\t  ||\\||  Arnold Fellipe Girotto III, levando-a para as  |    E quando todas as esperancas estavam acabando||____\n");
	printf("\t\t  ||/||                                                 |                                                 ||   /\n");
	printf("\t\t  ||\\||  carvernas frias das terras do norte, um lugar  |  um jovem juntou todas a sua coragem para salvar||   \\ \n");
	printf("\t\t  |||||                                                 |                                                 /|----\n");
	printf("\t\t  |||||  impiedoso, cheia de monstros, grutas e armadi- |  a princesa e matar o dragao. E assim comeca a  \\|||| \n");
	printf("\t\t  ||||\\                                                 |                                                 /|||| \n");
	printf("\t\t  ||||/  lhas mortais.                                  |  jornada de Dungeon Crawler.                    ||||| \n");
	printf("\t\t  ||| |_____/\\/_______/\\_______________________________/ \\____/\\_______________________________/\\_________| ||| \n");
	printf("\t\t  ||  /____________________/\\__________|   |__/\\______(   )________/\\___/\\_________/\\_____________________\\  || \n");
	printf("\t\t  (_/____________/\\__________________/\\| ^ |___________( )____________________/\\______________/\\___________ \\_) \n");
	printf("\t\t                                       |/ \\|                                                                    \n");
	system("pause");
	system("cls");	
}

void Jogo()
{
	//printf("\n");
	historia();
	descanso();	
	while(fim1==0) //dinamica da fase1
	{	
		mapa1(matriz1,x1,y1,chave1,porta1);
	   	
		movimentacao1();	
    	
	}
	
	descanso();
	while(fim2==0) //dinamica da fase2
	{
		mapa2(matriz2,x2,y2,chave2,porta2,botao2,eminemY2,eminemX2);

		movimentacao2();
	}
	
	descanso();
	while(fim3 == 0)
	{

		mapa3(matriz3, x3, y3, chave3, porta3, botao3, eminemY3, eminemX3, espinho3);

		movimentacao3();
	}		
}

//funções da fase 1
void mapa1(char matriz1[15][15],int x1, int y1, char chave1, char porta1)
{		
	int i,j;	
		for(i = 0; i < 15; i++)
    	{
        	for(j = 0; j < 15; j++)
        	{	
        		if(i==y1 && j==x1)//posição do jogador 
				{
					matriz1[i][j]='&';
				}
				else
				{
        			if(i==14 && j==7)//posição da porta 
					{
						matriz1[i][j]=porta1;
					}
					else
					{ 
        				if(i==3 && j==7)//posição da chave 
						{
							matriz1[i][j]=chave1;
						}
						else
						{			
   							if(i==0 || i==14)//construçõa da parede 
							{
								printf("\n");
			 	 	 	 	 	matriz1[i][j]='*';printf("\n");
							}
							else
							{
								if(j==0 || j==14)
								{
									matriz1[i][j]='*';
								}
								else
								{					
									matriz1[i][j]=' ';
					    		}													
	    		        	}		
						}
					}
				}
        	}
    	}
    system("clear || cls");
    printf("\n\n\n\n\n\n\n\n");
    	for(i = 0; i < 15; i++)
    	{
    		printf("\t\t\t\t\t\t\t  ");
        	for(j = 0; j < 15; j++)
        	{
        		printf(" ");
            	printf("%c", matriz1[i][j]);
        	}
        	printf("\n");
    	}
}

void movimentacao1()
{
	scanf("%c", &tecla1);
    	switch(tecla1)
		{
			case 'w':
				if(y1==1)
				{}
				else
				{
					y1--;	
				}					
				break;
			case 's':
				if((y1==13 && matriz1[14][7]=='D')&& (x1!=7 || x1==7))
				{}
				else
				{
					if(y1==13 && x1!=7)
					{}
					else
					{						
						y1++;
						if(y1==14 && x1==7)
						{
							fim1=1;
						}
						else{}
					}
				}
				break;	
			case 'a':
				if(x1==1)
				{}
				else
				{
					x1--;
				}
				break;
			case 'd':
				if(x1==13)
				{}
				else
				{
					x1++;
				}
				break;
			case 'i':
				if(x1==7 && y1==3)
				{
					chave1=' ';
					porta1='=';
				}
				else{}
				default:
				break;

		}
}

//funções da fase2
void mapa2(char matriz2[30][30],int x2, int y2, char chave2, char porta2, char botao2, int eminemY2, int eminemX2, char espinho2) 
{
	int i,j;

	for(i = 0; i < 30; i++) 
	{
		for(j = 0; j < 30; j++) 
		{
			if (i==eminemY2 && j==eminemX2 ) 
			{
				matriz2[i][j]='E';
			}
			else 
			{
				if(i==y2 && j==x2) 
				{
					matriz2[i][j]='&';
				}
				else 
				{
					if(i==0 && j==15) 
					{
						matriz2[i][j]=porta2;
					}
					else 
					{
						if(i==27 && j==18) 
						{
							matriz2[i][j]=botao2;
						}
						else 
						{
							if (i==15 && j==15) 
							{
								matriz2[i][j]=chave2;
							}
							else 
							{

								if(i==0 || i==29) 
								{
									matriz2[i][j]='*';
									printf("\n");
								}
								else 
								{
									if(j==0 || j==29) 
									{
										matriz2[i][j]='*';
									}
										//labirinto
										else if(i==2 && j==10 || i==2 && j==11 || i==2 && j==12)
										{
											matriz2[i][j]='*';
										}
										else if(i==3 && j==2 || i==3 && j==22)
										{
											matriz2[i][j]='*';
										}
										else if(i==4 && j==13 || i==4 && j==14 || i==4 && j==18 || i==4 && j==19 || i==4 && j==28)
										{
										matriz2[i][j]='*';
										}
										else if(i==5 && j==28)
										{
											matriz2[i][j]='*';
										}
										else if(i==6 && j==27 || i==7 && j==27 || i==8 && j==27 || i==9 && j==27 || i==10 && j==27 || i==11 && j==27)
										{
											matriz2[i][j]='*';
										}
									
									
									else 
									{
										matriz2[i][j]=' ';
									}
									
										//espinhos
										if(i==1 && j ==6 || i==1 && j ==7 || i==1 && j ==8 || i==1 && j ==9 || i==1 && j ==22 ||i==1 && j ==26)
										{
											matriz2[i][j] = '#';
										}
										if(i==2 && j ==3 || i==2 && j ==4 || i==2 && j ==5 || i==2 && j ==7 || i==2 && j ==7 ||i==2 && j ==26)
										{
											matriz2[i][j] = '#';
										}
								
										//labirinto
										if(i == 26 && j == 17 || i == 26 && j == 18 || i == 26 && j == 19)
										{
											matriz2[i][j] = '#';
										}
										if(i == 27 && j == 16 ||i == 27 && j == 17 || i == 27 && j == 19)
										{
											matriz2 [i][j] = '#';
										}
										if(i == 28 && j == 19)
										{
											matriz2[i][j] = '#';
										}
								}
							}
						}
					}
				}
			}
		}
	}
	system("clear || cls");
	
	printf("\n\n");
	for(i = 0; i < 30; i++) 
	{
		printf("\t\t\t\t\t  ");
		for(j = 0; j < 30; j++) 
		{
			printf(" ");
			printf("%c", matriz2[i][j]);
		}
		printf("\n");
		
		
	}
}

void movimentacao2() 
{
	scanf("%c", &tecla2);
	switch(tecla2) 
	{
		case 'w':
			if((y2==1 && matriz2[0][15]=='D')&& (x2!=15 || x2==15)) 
			{} 
			else 
			{
				if(y2==1 && x2!=15) 
				{}
				else 
				{
					y2--;
					eminemMove2();
					if(y2==0 && x2==15) 
					{
						fim2=1;
					} 
					else {}
						if (x2==eminemX2 && y2==eminemY2) 
						{
							lifes--;
							x2=15;
							y2=15;
							chave2=' ';
							porta2='D';
							botao2='O';
							eminemX2=18;
							eminemY2=25;
								if (lifes==0) 
								{
									printf("Game Over!\n");
									printf("\nDigite 1 e pressione enter para continuar...");
									scanf("%d", &lixo);
									fim2=1;
									break;
								} 
								else {}
						} 
						else {}							
							//verificar o dano do espinho							
							if (matriz2[y2][x2] == espinho2) 
							{
								printf("Você sofreu dano!\n");
								Sleep(2000);
								lifes--;
								x2=15;
								y2=15;
								chave2=' ';
								porta2='D';
								botao2='O';
								eminemX2=18;
								eminemY2=25;
									if (lifes==0) 
									{
										printf("Game Over!\n");
										printf("\nDigite 1 e pressione enter para continuar...");
										scanf("%d", &lixo);
										fim2=1;
										break;
									} 
									else {}
							}
							
				}
			}
			break;
		case 's':
			if(y2==28) 
			{} 
			else 
			{
				y2++;
				eminemMove2();
					if (x2==eminemX2 && y2==eminemY2) 
					{
						lifes--;
						x2=15;
						y2=15;
						chave2=' ';
						porta2='D';
						botao2='O';
						eminemX2=18;
						eminemY2=25;
							if (lifes==0) 
							{
								printf("Game Over!\n");
								printf("\nDigite 1 e pressione enter para continuar...");
								scanf("%d", &lixo);
								fim2=1;
								break;
							} 
							else {}
					} 
					else {}					
					//verificar o dano do espinho
						if (matriz2[y2][x2] == espinho2) 
						{
							printf("Você sofreu dano!\n");
							Sleep(2000);
							lifes--;
							x2=15;
							y2=15;
							chave2=' ';
							porta2='D';
							botao2='O';
							eminemX2=18;
							eminemY2=25;
								if (lifes==0) 
								{
									printf("Game Over!\n");
									printf("\nDigite 1 e pressione enter para continuar...");
									scanf("%d", &lixo);
									fim2=1;
									break;
								} 
								else {}
						}
							
			
			break;
		case 'a':
			if(x2==1) 
			{} 
			else 
			{
				x2--;
				eminemMove2();
					if (x2==eminemX2 && y2==eminemY2) 
					{
						lifes--;
						x2=15;
						y2=15;
						chave2=' ';
						porta2='D';
						botao2='O';
						eminemX2=18;
						eminemY2=25;
							if (lifes==0) 
							{
								printf("Game Over!\n");
								printf("\nDigite 1 e pressione enter para continuar...");
								scanf("%d", &lixo);
								fim2=1;
								break;
							} 
							else {}
					} 
					else {}					
					//verificar o dano do espinho							
						if (matriz2[y2][x2] == espinho2) 
						{
							printf("Você sofreu dano!\n");
							Sleep(2000);
							lifes--;
							x2=15;
							y2=15;
							chave2=' ';
							porta2='D';
							botao2='O';
							eminemX2=18;
							eminemY2=25;
								if (lifes==0) 
								{
									printf("Game Over!\n");
									printf("\nDigite 1 e pressione enter para continuar...");
									scanf("%d", &lixo);
									fim2=1;
									break;
								} 
								else {}
						}	
			}							
			break;
		case 'd':
			if(x2==28) 
			{} 
			else 
			{
				x2++;
				eminemMove2();
					if (x2==eminemX2 && y2==eminemY2) 
					{
						lifes--;
						x2=15;
						y2=15;
						chave2=' ';
						porta2='D';
						botao2='O';
						eminemX2=18;
						eminemY2=25;
							if (lifes==0) 
							{
								printf("Game Over!\n");
								printf("\nDigite 1 e pressione enter para continuar...");
								scanf("%d", &lixo);
								fim2=1;
								break;
							} 
							else {}
					} 
					else {}						
						//verificar o dano do espinho			
						if (matriz2[y2][x2] == espinho2) 
						{
							printf("Você sofreu dano!\n");
							Sleep(2000);
							lifes--;
							x2=15;
							y2=15;
							chave2=' ';
							porta2='D';
							botao2='O';
							eminemX2=18;
							eminemY2=25;
								if (lifes==0) 
								{
									printf("Game Over!\n");
									printf("\nDigite 1 e pressione enter para continuar...");
									scanf("%d", &lixo);
									fim2=1;
									break;
								} 
								else {}
						}
							
						
			}
			break;
		case 'i':
			if(x2==18 && y2==27) 
			{
				chave2='@';
				botao2=' ';
			} 
			else {}
				if (x2==15 && y2==15 && chave2=='@') 
				{
					porta2='=';
					chave2=' ';
				}
				default:
				break;
			}
	}
}
void eminemMove2() 
{
	int eminem2;
	srand(time(NULL));
	eminem2 = 1 + (rand() % 4);
	
	switch (eminem2) 
	{
		case 1:
			if(eminemY2==1) 
			{} 
			else 
			{
				eminemY2--;
			}
			break;
		case 2:
			if(eminemY2==28) 
			{} 
			else 
			{
				eminemY2++;

			}
			break;
		case 3:
			if(eminemX2==1) 
			{} 
			else 
			{
				eminemX2--;
			}
			break;
		case 4:
			if(eminemX2==28) 
			{} 
			else 
			{
				eminemX2++;
			}
			break;
	}
}


void mapa3(char matriz3[60][60], int x3, int y3, char chave3, char porta3, char botao3, int eminemY3, int eminemX3, char espinho3)
{
	int i, j;

	for(i = 0; i < 60; i++)
	{
		for(j = 0; j < 60; j++)
		{
			if(i == monstro3Y && j == monstro3X)
			{
				matriz3[i][j] = 'K';
			}
			else
			{


				if (i == eminemY3 && j == eminemX3 )
				{
					matriz3[i][j] = '?';
				}
				else
				{
					if(i == y3 && j == x3)
					{
						matriz3[i][j] = '&';
					}
					else
					{
						if(i == 56 && j == 29)
						{
							matriz3[i][j] = tp;
						}
						else
						{
							if(i == 24 && j == 30)
							{
								matriz3[i][j] = tp;
							}
							else
							{								
								if(i == 0 && j == 30)
								{
									matriz3[i][j] = porta3;
								}
								else
								{
									if(i == 28 && j == 30)
									{
										matriz3[i][j] = botao3;
									}
									else
									{
										if (i == 56 && j == 4)
										{
											matriz3[i][j] = chave3;
										}
										else
										{

											if(i == 0 || i == 59)
											{
												matriz3[i][j] = '*';
												printf("\n");
											}
											else
											{
												if(j == 0 || j == 59)
												{
													matriz3[i][j] = '*';
												}
												else
												{
													matriz3[i][j] = ' ';
												}

												//espinhos
												//caixa de espinhos
												if(i == 35 && (j > 24 && j <= 35))
												{
													matriz3[i][j] = caixa_espinhos3;
												}
												else
												{

													if(i == 25 && (j > 24 && j <= 35))
													{
														matriz3[i][j] = caixa_espinhos3;
													}
													else
													{

														if(j == 25 && (i > 24 && i <= 35))
														{
															matriz3[i][j] = caixa_espinhos3;
														}
														else
														{

															if(j == 35 && (i > 24 && i <= 35))
															{
																matriz3[i][j] = caixa_espinhos3;
															}
															else
															{
																//espinhos chave
																if(i == 57 && (j > 2 && j <= 30))
																{
																	matriz3[i][j] = espinhos_chave3;
																}
																else
																{
																	if(i == 55 && (j > 2 && j <= 30))
																	{
																		matriz3[i][j] = espinhos_chave3;
																	}
																	else
																	{
																		if(i == 56 && j == 3)
																		{
																			matriz3[i][j] = espinhos_chave3;
																		}
																		else
																		{
																			if(i == 56 && j == 30)
																			{
																				matriz3[i][j] = espinhos_chave3;
																			}
																		}
																	}

																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}


		}
	}
	system("clear || cls");
	printf("\n");
	for(i = 0; i < 60; i++)
	{
		printf("\t\t\t\t\t\t\t\t\");
		for(j = 0; j < 60; j++)
		{
			printf("%c", matriz3[i][j]);
			printf(" ");
		}
		printf("\n");
	}
}

void movimentacao3()
{
	scanf("%c", &tecla3);
	switch(tecla3)
	{
	case 'w':
		if((y3 == 1 && matriz3[0][30] == 'D') && (x3 != 30 || x3 == 30))
		{}
		else
		{
			if(y3 == 1 && x3 != 30)
			{}
			else
			{
				y3--;
				eminemMove3();
				monstro_movimentacao3();
				if(y3 == 0 && x3 == 30)
				{
					fim3 = 1;
				}
				else {}
				if ((x3 == eminemX3 && y3 == eminemY3) || (x3 == monstro3X && y3 == monstro3Y))
				{
					lifes--;
					x3 = 30;
					y3 = 30;
					chave3 = ' ';
					porta3 = 'D';
					botao3 = 'O';
					tp = ' ';
					espinhos_chave3 = ' ';
					caixa_espinhos3 = '#';
					eminemX3 = 38;
					eminemY3 = 55;
					if (lifes == 0)
					{
						printf("Game Over!\n");
						printf("\nDigite 1 e pressione enter para continuar...");
						scanf("%d", &lixo);
						fim3 = 1;
						break;
					}
					else {}
				}
				else {}
				//verificar o dano do espinho
				if (matriz3[y3][x3] == espinho3)
				{
					printf("Voc? sofreu dano!\n");
					lifes--;
					x3 = 30;
					y3 = 30;
					chave3 = ' ';
					porta3 = 'D';
					botao3 = 'O';
					tp = ' ';
					espinhos_chave3 = ' ';
					caixa_espinhos3 = '#';
					eminemX3 = 38;
					eminemY3 = 55;
					if (lifes == 0)
					{
						printf("Game Over!\n");
						printf("\nDigite 1 e pressione enter para continuar...");
						scanf("%d", &lixo);
						fim3 = 1;
						break;
					}
					else {}
				}

			}
		}
		break;
	case 's':
		if(y3 == 58)
		{}
		else
		{
			y3++;
			eminemMove3();
			monstro_movimentacao3();
			if ((x3 == eminemX3 && y3 == eminemY3) || (x3 == monstro3X && y3 == monstro3Y))
			{
				lifes--;
				x3 = 30;
				y3 = 30;
				chave3 = ' ';
				porta3 = 'D';
				botao3 = 'O';
				tp = ' ';
				espinhos_chave3 = ' ';
				caixa_espinhos3 = '#';
				eminemX3 = 38;
				eminemY3 = 55;
				if (lifes == 0)
				{
					printf("Game Over!\n");
					printf("\nDigite 1 e pressione enter para continuar...");
					scanf("%d", &lixo);
					fim3 = 1;
					break;
				}
				else {}
			}
			else {}
			//verificar o dano do espinho
			if (matriz3[y3][x3] == espinho3)
			{
				printf("Voc? sofreu dano!\n");
				lifes--;
				x3 = 30;
				y3 = 30;
				chave3 = ' ';
				porta3 = 'D';
				botao3 = 'O';
				tp = ' ';
				espinhos_chave3 = ' ';
				caixa_espinhos3 = '#';
				eminemX3 = 38;
				eminemY3 = 55;
				if (lifes == 0)
				{
					printf("Game Over!\n");
					printf("\nDigite 1 e pressione enter para continuar...");
					scanf("%d", &lixo);
					fim3 = 1;
					break;
				}
				else {}
			}


			break;
		case 'a':
			if(x3 == 1)
			{}
			else
			{
				x3--;
				eminemMove3();
				monstro_movimentacao3();
				if ((x3 == eminemX3 && y3 == eminemY3) || (x3 == monstro3X && y3 == monstro3Y))
				{
					lifes--;
					x3 = 30;
					y3 = 30;
					chave3 = ' ';
					porta3 = 'D';
					botao3 = 'O';
					tp = ' ';
					espinhos_chave3 = ' ';
					caixa_espinhos3 = '#';
					eminemX3 = 38;
					eminemY3 = 55;
					if (lifes == 0)
					{
						printf("Game Over!\n");
						printf("\nDigite 1 e pressione enter para continuar...");
						scanf("%d", &lixo);
						fim3 = 1;
						break;
					}
					else {}
				}
				else {}
				//verificar o dano do espinho
				if (matriz3[y3][x3] == espinho3)
				{
					printf("Voc? sofreu dano!\n");
					lifes--;
					x3 = 30;
					y3 = 30;
					chave3 = ' ';
					porta3 = 'D';
					botao3 = 'O';
					tp = ' ';
					espinhos_chave3 = ' ';
					caixa_espinhos3 = '#';
					eminemX3 = 38;
					eminemY3 = 55;
					if (lifes == 0)
					{
						printf("Game Over!\n");
						printf("\nDigite 1 e pressione enter para continuar...");
						scanf("%d", &lixo);
						fim3 = 1;
						break;
					}
					else {}
				}
			}
			break;
		case 'd':
			if(x3 == 58)
			{}
			else
			{
				x3++;
				eminemMove3();
				monstro_movimentacao3();
				if ((x3 == eminemX3 && y3 == eminemY3) || (x3 == monstro3X && y3 == monstro3Y))
				{
					lifes--;
					x3 = 30;
					y3 = 30;
					chave3 = ' ';
					porta3 = 'D';
					botao3 = 'O';
					tp = ' ';
					espinhos_chave3 = ' ';
					caixa_espinhos3 = '#';
					eminemX3 = 38;
					eminemY3 = 55;
					if (lifes == 0)
					{
						printf("Game Over!\n");
						printf("\nDigite 1 e pressione enter para continuar...");
						scanf("%d", &lixo);
						fim3 = 1;
						break;
					}
					else {}
				}
				else {}
				//verificar o dano do espinho
				if (matriz3[y3][x3] == espinho3)
				{
					printf("Voc? sofreu dano!\n");
					lifes--;
					x3 = 30;
					y3 = 30;
					chave3 = ' ';
					porta3 = 'D';
					botao3 = 'O';
					tp = ' ';
					espinhos_chave3 = ' ';
					caixa_espinhos3 = '#';
					eminemX3 = 38;
					eminemY3 = 55;
					if (lifes == 0)
					{
						printf("Game Over!\n");
						printf("\nDigite 1 e pressione enter para continuar...");
						scanf("%d", &lixo);
						fim3 = 1;
						break;
					}
					else {}
				}


			}
			break;
		case 'i':
			if(x3 == 30 && y3 == 28)
			{
				chave3 = '@';
				botao3 = ' ';
				caixa_espinhos3 = ' ';
				espinhos_chave3 = '#';
				tp = '>';
			}
			else
			{

				if(x3 == 30 && y3 == 24 && tp == '>')
				{
					x3 = 29;
					y3 = 56;
				}
				else
				{

					if(x3 == 29 && y3 == 56 && tp == '>')
					{
						x3 = 30;
						y3 = 24;
					}
					else
					{

						if (x3 == 4 && y3 == 56 && chave3 == '@')
						{
							porta3 = '=';
							chave3 = ' ';
						}
						else {}
					}
				}
			}
		default:
			break;
		}
	}
}
void eminemMove3()
{
	int eminem3;
	srand(time(NULL));
	eminem3 = 1 + (rand() % 4);

	switch (eminem3)
	{
	case 1:
		if(eminemY3 == 1)
		{}
		else
		{
			eminemY3--;
		}
		break;
	case 2:
		if(eminemY3 == 58)
		{}
		else
		{
			eminemY3++;

		}
		break;
	case 3:
		if(eminemX3 == 1)
		{}
		else
		{
			eminemX3--;
		}
		break;
	case 4:
		if(eminemX3 == 58)
		{}
		else
		{
			eminemX3++;
		}
		break;
	}
}

void monstro_movimentacao3()
{
	if(monstro3X < x3)
	{
		monstro3X++;
	}
	else
	{
		monstro3X--;
	}
	if(monstro3Y < y3)
	{
		monstro3Y++;
	}
	else
	{
		monstro3Y--;
	}

}
