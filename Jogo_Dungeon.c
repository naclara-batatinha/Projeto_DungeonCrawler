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
		printf("O QUE VOC� DESEJA FAZER? (1, 2, 3 (sair)): ");
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
			printf("Esse jogo consiste em tr�s n�veis que v�o aumentando de dificuldade ao passar de um para outro,\no seu objetivo � abrir a porta final de cada n�vel e escapar.\n#################\nMovimenta��o:\nW: anda para cima\nA: anda para esquerda\nS: anda para tr�s\nD: anda para direita\n\n");
			printf("\nDigite 1 e d� enter para continuar...");
			scanf("%d", &lixo);
			break;
		case (3):
			system("cls || clear");
			printf("At� mais!\nDigite 1 e d� enter\n");
			scanf("%d", &lixo);
			break;
		default:
			printf("escolha inv�lida!\nTente novamente.");
			printf("\nDigite 1 e d� enter");
			scanf("%d", &lixo);
			break;
				
		}


}
return 0;
}

void Jogo()
{
	
	
	
}
