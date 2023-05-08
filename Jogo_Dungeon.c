#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int escolha_menu;
	int lixo;
	while(escolha_menu != 3)
	{

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
		printf(" 1.JOGAR \n 2. TUTORIAL \n 3. SAIR \n \n \n");
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
			printf("Esse jogo consiste em três níveis que vão aumentando de dificuldade ao passar de um para outro,\no seu objetivo é abrir a porta final de cada nível e escapar.\n#################\nMovimentação:\nW: anda para cima\nA: anda para esquerda\nS: anda para trás\nD: anda para direita\n\n");
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
	
	
	
}
