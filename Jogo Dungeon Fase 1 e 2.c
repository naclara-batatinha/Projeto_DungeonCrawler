#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <conio.h>

	char matriz1 [15][15];
	char matriz2 [30][30];
	
  	int fim1=0;
  	int fim2=0;
  	
  	char tecla1;
  	char tecla2;
  	
  	int x1=7;
  	int y1=7;
 	int x2=15;
	int y2=15;
	
  	char chave1='@';
  	char chave2=' ';
  	
  	char porta1='D';
  	char porta2='D';
  	
  	char botao2='O';
  	
	char espinho2='#';
  	
  	int eminemX2=18;
	int eminemY2=25;
	
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
		fim2=0;
 		x1=7;
  		y1=7;
  		chave1='@';
  		porta1='D';
  		x2=15;
		y2=15;
  		chave2=' ';
  		porta2='D';
  		botao2='O';
		espinho2='#';
  		eminemX2=18;
		eminemY2=25;
		lifes=3;
	

		system("cls || clear");
		printf("*  #####    ##   ##  ##   ##    ####   #######   #####   ##   ##             ####   ######     ##     ##   ##  ####     #######  ######   *\n");
		printf("*   ## ##   ##   ##  ###  ##   ##  ##   ##   #  ##   ##  ###  ##            ##  ##   ##  ##   ####    ##   ##   ##       ##   #   ##  ##  *\n");
		printf("*   ##  ##  ##   ##  #### ##  ##        ## #    ##   ##  #### ##           ##        ##  ##  ##  ##   ##   ##   ##       ## #     ##  ##  *\n");
		printf("*   ##  ##  ##   ##  ## ####  ##        ####    ##   ##  ## ####           ##        #####   ##  ##   ## # ##   ##       ####     #####   *\n");
		printf("*   ##  ##  ##   ##  ##  ###  ##  ###   ## #    ##   ##  ##  ###           ##        ## ##   ######   #######   ##   #   ## #     ## ##   *\n");
		printf("*   ## ##   ##   ##  ##   ##   ##  ##   ##   #  ##   ##  ##   ##            ##  ##   ##  ##  ##  ##   ### ###   ##  ##   ##   #   ##  ##  *\n");
		printf("*  #####     #####   ##   ##    #####  #######   #####   ##   ##             ####   #### ##  ##  ##   ##   ##  #######  #######  #### ##  *\n");
		printf("\n \n \n \n");
		printf("|==================================================================================|\n \n \n");
		printf(" 1. JOGAR \n 2. TUTORIAL \n 3. SAIR \n \n \n");
		printf("|==============================================================================|\n \n");
		printf("O QUE VOC? DESEJA FAZER? (1, 2, 3 (sair)): ");
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
			printf("Esse jogo consiste em tres niveis que vao aumentando de dificuldade ao passar de um para outro,\no seu objetivo eh abrir a porta final de cada nivel e escapar.\n\n\n");
			printf("################################################################################################################################\n");	
			printf("\t\t\t\t\t\tMOVIMENTACAO                                                                                       \n");
			printf("        /--------\\                                                                                            \n");
			printf("        ||     | |                                                                                             \n");
			printf("        |\\  /  / |___________-> SEU PERSONAGEM SE MOVIMENTA PARA FRENTE                                       \n");
			printf("        | \\/ \\/  |                                                                                           \n");
			printf("/-------^--------^---------\\                                                                                  \n");
			printf("|   _    |   --   |  _     |                                                                                   \n");
			printf("|  |_|   |  '--,  |  | \\   |__-> SEU PERSONAGEM SE MOVIMENTA PARA A DIREITA                                   \n"); 
			printf("|  | |   |   --'  |  |_/   |                                                                                   \n");
			printf("\\--------^--------^--------/                                                                                  \n");
			printf("    |        |________________-> SEU PERSONAGEM SE MOVIMENTA PARA BAIXO                                        \n");
			printf("    |                                                                                                          \n");  
			printf("    |_________________________-> SEU PERSONAGEM SE MOVIMENTA PARA A ESQUERDA                             \n\n\n\n");           
			printf("\t/--------\\                                                                                                  \n");
			printf("\t|  ---   |                                                                                                   \n");
			printf("\t|   |    |___________-> SEU PERSONAGEM INTERAGE COM O ELEMENTO QUE EST� EM CIMA                              \n");
			printf("\t|  ---   |                                                                                                   \n");
			printf("\t\\--------/                                                                                            \n\n\n\n");              
			printf("\t\t& --------> Simbolo que representa o seu personagem;                                                       \n");
			printf("\t\t* --------> Simbolo que representa uma parede, seu personagem ao se movimentar n�o pode passar pela parede;\n");
			printf("\t\t@ --------> Simbolo que representa a chave, a porta abre no momento que o jogador interage com a chave;    \n");
			printf("\t\tD --------> Simbolo que representa a porta fechada;                                                        \n");
			printf("\t\t= --------> Simbolo que representa a porta aberta quando o jogador interage com a chave;                   \n");
			printf("\t\tO --------> Simbolo que representa um bot�o;                                                               \n");
			printf("\t\t# --------> Simbolo que representa um espinho;                                                             \n");
			printf("\t\t> --------> Simbolo que representa um teletransporte;                                                      \n");
			printf("\t\t� --------> Simbolo que representa o monstro n�vel 1;                                                      \n");
			printf("\t\tK --------> S�mbolo que representa o monstro n�vel 2;                                                      \n");

			
			scanf("%d", &lixo);
			break;
		case (3):
			system("cls || clear");
			printf("At? mais!\nDigite 1 e d? enter\n");
			scanf("%d", &lixo);
			break;
		default:
			printf("escolha inv?lida!\nTente novamente.");
			printf("\nDigite 1 e d? enter");
			scanf("%d", &lixo);
			break;
				
		}
			
	}


return 0;
}


void Jogo()
{
	while(fim1==0) //dinamica da fase1
	{	
		mapa1(matriz1,x1,y1,chave1,porta1);
	   	
		movimentacao1();	
    	
	}
	
	while(fim2==0) //dinamica da fase2
	{
		mapa2(matriz2,x2,y2,chave2,porta2,botao2,eminemY2,eminemX2);

		movimentacao2();
	}
		
}

//fun��es da fase 1
void mapa1(char matriz1[15][15],int x1, int y1, char chave1, char porta1)
{	
	int i,j;	
		for(i = 0; i < 15; i++)
    	{
        	for(j = 0; j < 15; j++)
        	{	
        		if(i==y1 && j==x1)
				{
					matriz1[i][j]='&';
				}
				else
				{
        			if(i==14 && j==7)
					{
						matriz1[i][j]=porta1;
					}
					else
					{ 
        				if(i==3 && j==7)
						{
							matriz1[i][j]=chave1;
						}
						else
						{			
   							if(i==0 || i==14)
							{
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
    	for(i = 0; i < 15; i++)
    	{
        	for(j = 0; j < 15; j++)
        	{
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

//fun��es da fase2
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
	for(i = 0; i < 30; i++) 
	{
		for(j = 0; j < 30; j++) 
		{
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
								printf("Voc� sofreu dano!\n");
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
							printf("Voc� sofreu dano!\n");
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
							printf("Voc� sofreu dano!\n");
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
							printf("Voc� sofreu dano!\n");
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

//fun��es da fase3
