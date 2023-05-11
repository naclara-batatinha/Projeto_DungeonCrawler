#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
char matriz [15][15];
  int fim=0;
  char tecla;
  int x=7;
  int y=7;
  char chave='@';
  char porta='D';
int main()
{
	setlocale(LC_ALL, "Portuguese");
	int escolha_menu;
	int lixo;
	while(escolha_menu != 3)
	{
		fim=0;
 		x=7;
  		y=7;
  		chave='@';
  		porta='D';
	

		system("cls || clear");
		printf("*  #####    ##   ##  ##   ##    ####   #######   #####   ##   ##             ####   ######     ##     ##   ##  ####     #######  ###### *\n");
		printf("*   ## ##   ##   ##  ###  ##   ##  ##   ##   #  ##   ##  ###  ##            ##  ##   ##  ##   ####    ##   ##   ##       ##   #   ##  ## *\n");
		printf("*   ##  ##  ##   ##  #### ##  ##        ## #    ##   ##  #### ##           ##        ##  ##  ##  ##   ##   ##   ##       ## #     ##  ## *\n");
		printf("*   ##  ##  ##   ##  ## ####  ##        ####    ##   ##  ## ####           ##        #####   ##  ##   ## # ##   ##       ####     ##### *\n");
		printf("*   ##  ##  ##   ##  ##  ###  ##  ###   ## #    ##   ##  ##  ###           ##        ## ##   ######   #######   ##   #   ## #     ## ## *\n");
		printf("*   ## ##   ##   ##  ##   ##   ##  ##   ##   #  ##   ##  ##   ##            ##  ##   ##  ##  ##  ##   ### ###   ##  ##   ##   #   ##  ## *\n");
		printf("*  #####     #####   ##   ##    #####  #######   #####   ##   ##             ####   #### ##  ##  ##   ##   ##  #######  #######  #### ## *\n");
		printf("\n \n \n \n");
		printf("|==================================================================================|\n \n \n");
		printf(" 1. JOGAR \n 2. TUTORIAL \n 3. SAIR \n \n \n");
		printf("|==============================================================================|\n \n");
		printf("O QUE VOCÊ DESEJA FAZER? (1, 2, 3 (sair)): ");
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
			printf("Esse jogo consiste em tres níveis que vão aumentando de dificuldade ao passar de um para outro,\no seu objetivo é abrir a porta final de cada nivel e escapar.\n#################\nMovimentação:\nW: anda para cima\nA: anda para esquerda\nS: anda para trás\nD: anda para direita\nI: Interagir\n\n");
			printf("###########################################################\n");
			printf("&: Símbolo que representa o jogador.\n*: Símbolo que representa uma parede, o jogador ao se movimentar não pode passar pela parede.\n@: Símbolo que representa a chave para abrir a porta para finalizar a fase, a porta abre no momento que o jogador interage com a chave.\nD: Símbolo que representa a porta fechada.\n");
    		printf("=: Símbolo que representa a porta aberta quando o jogador interage com a chave.\nO: Símbolo que representa um botão que o usuário pode interagir, o botão fica no chão e o jogador deve ficar em cima dele para poder interagir.\n");   
			printf("#: Símbolo que representa um espinho. A fase é reiniciada quando o jogador toca no espinho, caso a fase seja reiniciada três vezes, o jogo volta para o menu principal.\n>: Símbolo que representa um teletransporte. O teletransporte sempre deve vir em pares, quando o jogador toca em um ele é transportado para o outro e vice-versa.\n");    
			printf(">: Símbolo que representa um teletransporte. O teletransporte sempre deve vir em pares, quando o jogador toca em um ele é transportado para o outro e vice-versa.\n¬: Símbolo que representa o monstro nível 1. O mostro tem um movimento aleatório, logo, ele movimenta um bloco para cima ou para direita\nou para esquerda ou para baixo. O mostro sempre faz uma movimentação depois do usuário se movimentar ou interagir com um objeto.\n");    
			printf("K: Símbolo que representa o monstro nível 2. O mostro nível dois tem uma inteligência de se movimentar na direção do jogador. O monstro não precisa saber desviar de obstáculos, ele sempre vai andar em linha reta em direção do jogador.\n\n");       
			printf("\nDigite 1 e dê enter para continuar...");
			scanf("%d", &lixo);
			break;
		case (3):
			system("cls || clear");
			printf("Até mais!\nDigite 1 e dê enter\n");
			scanf("%d", &lixo);
			break;
		default:
			printf("escolha inválida!\nTente novamente.");
			printf("\nDigite 1 e dê enter");
			scanf("%d", &lixo);
			break;
				
		}
			
		}


return 0;
}


void Jogo()
{
	while(fim==0){
	
		mapa(matriz,x,y,chave,porta);
	   	
		movimentacao();	
    	
	}
		
}

void mapa(char matriz[15][15],int x, int y, char chave, char porta){
	
	int i,j;
	
		for(i = 0; i < 15; i++)
    {
        for(j = 0; j < 15; j++)
        {	
        	if(i==y && j==x){
				matriz[i][j]='&';
			}else{
        		if(i==14 && j==7){
					matriz[i][j]=porta;
				}else{ 
        			if(i==3 && j==7){
						matriz[i][j]=chave;
					}else{
				
			
   					if(i==0 || i==14){
			 	 	 	 	 	 matriz[i][j]='*';printf("\n");
				
					}else{
						if(j==0 || j==14){
							matriz[i][j]='*';
						}else{
					
							matriz[i][j]=' ';
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
            printf("%c", matriz[i][j]);
        	}
        	printf("\n");
    	}
}
void movimentacao(){
	scanf("%c", &tecla);
    	switch(tecla){
			case 'w':
				if(y==1){
					
				}else{
					y--;	
				}
					
				
				break;
			case 's':
				if((y==13 && matriz[14][7]=='D')&& (x!=7 || x==7)){
					
				}else{
					if(y==13 && x!=7){
						
					}else{
						
						y++;
						if(y==14 && x==7){
							fim=1;
						}else{}
					}
				}
				break;	
			case 'a':
				if(x==1){
					
				}else{
					x--;
				}
				break;
			case 'd':
				if(x==13){
					
				}else{
					x++;
				}
				break;
			case 'i':
				if(x==7 && y==3){
					chave=' ';
					porta='=';
				}else{}
			default:
				break;

		}
}
