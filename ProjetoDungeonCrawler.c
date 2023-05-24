#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <conio.h>
initconio(); 
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
	char caixa_espinhos = '#';
	char espinhos_chave = ' ';
  	
  	int eminemX2=18;
	int eminemY2=25;	
  	int eminem2X2=5;
	int eminem2Y2=7;
  	int eminem3X2=6;
	int eminem3Y2=24;

	int eminemX3=38;
	int eminemY3=55;
	int monstro2X= 30;
	int monstro2Y= 10;
	
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

//parte grafica do jogo
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
	printf("\t           |       7- Voce so interage com um elemento se entiver em cima dele e apertar a tecla 'i'.                       |\n");
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

void vitoria()
{
	printf("\n\n\n\n");
	printf("\t\t       _______________________________________________     _______________________________________________      \n");
	printf("\t\t    , |                                               \\   /                                    |   |      | `   \n");
	printf("\t\t   / ||                                                \\ /                                     |   |      |  \\  \n");
	printf("\t\t  | ||\\                                                 |                                      |   |      ||  | \n");
	printf("\t\t  ||||/     E entao depois de percorrer e explorar cada |    -Meu heroi, meu doce heroi, se nao|   |      ||| | \n");
	printf("\t\t  |||||                                                 |                                      |   |      \\|||| \n");
	printf("\t\t  |||||   gruta presente naquela caverna infernal, com  |  por ti venha por mim pela honra, ou |   |      /|||| \n");
	printf("\t\t___||||                                                 |                                      |   |      \\|||| \n");
	printf("\t\t>___||/   dificuldades, enfrentando monstros cedentos   |  mesmo por alguem que amas. Imploro  | ^ |      /|||| \n");
	printf("\t\t  ||||\\                                                 |                                      |/ \\|      \\|||| \n");
	printf("\t\t  ||||/   por sangue, espinhos venenosos unido com as   |  apenas que venha me salvar.                    /|||| \n");
	printf("\t\t  ||||\\                                                 |                                                 ||\\|| \n");
	printf("\t\t  |||||   armadinhas implantadas pelo entao dragao,     |    As palavras resoaram no heroi como jamais    ||/|| \n");
	printf("\t\t  |||||                                                 |                                                 ||\\|| \n");
	printf("\t\t  |||||  o heroi quase desistiu de tudo, incluseve de   |  resoou qualquer outra na vida, entao levantou  ||||| \n");
	printf("\t\t  ||/||                                                 |                                                 ||||| \n");
	printf("\t\t  ||\\||  se mesmo. Convicto que iria desistir, o heroi  |   respirou fundo e foi ao encontro da princesa. ||____\n");
	printf("\t\t  ||/||                                                 |                                                 ||   /\n");
	printf("\t\t  ||\\||  olhou para o teto da caverna, e uma leve brisa |  As portas da ultima sala abriram e uma voz se  ||   \\ \n");
	printf("\t\t  |||||                                                 |                                                 /|----\n");
	printf("\t\t  |||||  lhe trouxe um cheiro familiar, doce e suave    |  se vez presente:                               \\|||| \n");
	printf("\t\t  ||||\\                                                 |                                                 /|||| \n");
	printf("\t\t  ||||/  junto com um sussuro:                          |   -Por todos esses anos eu me livrei de cada um.||||| \n");
	printf("\t\t  ||| |_____/\\/_______/\\_______________________________/ \\____/\\_______________________________/\\_________| ||| \n");
	printf("\t\t  ||  /____________________/\\__________|   |__/\\______(   )________/\\___/\\_________/\\_____________________\\  || \n");
	printf("\t\t  (_/____________/\\__________________/\\| ^ |___________( )____________________/\\______________/\\___________ \\_) \n");
	printf("\t\t                                       |/ \\|                                                                    \n");
	system("pause");
	system("cls");
	printf("\n\n\n\n");
	printf("\t\t       _______________________________________________     _______________________________________________      \n");
	printf("\t\t    , |                                               \\   /                                    |   |      | `   \n");
	printf("\t\t   / ||                                                \\ /                                     |   |      |  \\  \n");
	printf("\t\t  | ||\\                                                 |                                      |   |      ||  | \n");
	printf("\t\t  ||||/   Matei soldados e valentes para no fim de tudo |    -Pela coroa, claro. Pelo poder e  |   |      ||| | \n");
	printf("\t\t  |||||                                                 |                                      |   |      \\|||| \n");
	printf("\t\t  |||||   um completo desconhecido tirar a princesa de  |  pelas riquezas, me recuso a perder  |   |      /|||| \n");
	printf("\t\t___||||                                                 |                                      |   |      \\|||| \n");
	printf("\t\t>___||/   mim. Achas mesmo que permitirei tudo isso??   |  meu trono para quem quer que seja,  | ^ |      /|||| \n");
	printf("\t\t  ||||\\                                                 |                                      |/ \\|      \\|||| \n");
	printf("\t\t  ||||/    Foi entao que uma silhueta se formou por     |  ate mesmo minha propria filha.                 /|||| \n");
	printf("\t\t  ||||\\                                                 |                                                 ||\\|| \n");
	printf("\t\t  |||||   entre as sompras. Porem nao era um dragao que |    Cada palavra dita por Sr. Girotto III enfu-  ||/|| \n");
	printf("\t\t  |||||                                                 |                                                 ||\\|| \n");
	printf("\t\t  |||||  se escondia ali, era um homem velho e com      |  receu o heroi, que o atacou com toda força e   ||||| \n");
	printf("\t\t  ||/||                                                 |                                                 ||||| \n");
	printf("\t\t  ||\\||  vestes similares ao de um nobre:               |  eles começaram uma batalha e apesar do rei     ||____\n");
	printf("\t\t  ||/||                                                 |                                                 ||   /\n");
	printf("\t\t  ||\\||    -Nao, nao e possivel. VOSSA MAGESTADE- grita |  possuir certa idade, a experiencia o fez der-  ||   \\ \n");
	printf("\t\t  |||||                                                 |                                                 /|----\n");
	printf("\t\t  |||||  o heroi, incredulo- Como pode fazer isso com   |  rubar seu oponente:                            \\|||| \n");
	printf("\t\t  ||||\\                                                 |                                                 /|||| \n");
	printf("\t\t  ||||/  o reino? Com a propria filha?                  |   -Esse e o momento de desistir, garoto. Luta   ||||| \n");
	printf("\t\t  ||| |_____/\\/_______/\\_______________________________/ \\____/\\_______________________________/\\_________| ||| \n");
	printf("\t\t  ||  /____________________/\\__________|   |__/\\______(   )________/\\___/\\_________/\\_____________________\\  || \n");
	printf("\t\t  (_/____________/\\__________________/\\| ^ |___________( )____________________/\\______________/\\___________ \\_) \n");
	printf("\t\t                                       |/ \\|                                                                    \n");
	system("pause");
	system("cls");
	printf("\n\n\n\n");
	printf("\t\t       _______________________________________________     _______________________________________________      \n");
	printf("\t\t    , |                                               \\   /                                    |   |      | `   \n");
	printf("\t\t   / ||                                                \\ /                                     |   |      |  \\  \n");
	printf("\t\t  | ||\\                                                 |                                      |   |      ||  | \n");
	printf("\t\t  ||||/   bravamente, mas nunca passara de um moleque.  |   Dando um ultimo suspiro, a alma do |   |      ||| | \n");
	printf("\t\t  |||||                                                 |                                      |   |      \\|||| \n");
	printf("\t\t  |||||     Prestes a dar seu golpe fina a princesa de  |  rei deixou seu corpo ensanguentado. |   |      /|||| \n");
	printf("\t\t___||||                                                 |                                      |   |      \\|||| \n");
	printf("\t\t>___||/   longe, clama pelo heroi:                      |  Depois de soltar a princesa, o heroi| ^ |      /|||| \n");
	printf("\t\t  ||||\\                                                 |                                      |/ \\|      \\|||| \n");
	printf("\t\t  ||||/    -CORAGEM!! TE VI EM MEUS SONHOS E SEI QUE    |  pergunta de nao ha ferimentos e ela responde:  /|||| \n");
	printf("\t\t  ||||\\                                                 |                                                 ||\\|| \n");
	printf("\t\t  |||||   ES CAPAZ DE VENCER! CORAGEM!!                 |    -Em meu coracao, por todo o meu paito. Sei   ||/|| \n");
	printf("\t\t  |||||                                                 |                                                 ||\\|| \n");
	printf("\t\t  |||||   As palavras da princesa distrairam o rei e    |  do amor de meu pai por mim, porem ele amou a   ||||| \n");
	printf("\t\t  ||/||                                                 |                                                 ||||| \n");
	printf("\t\t  ||\\||  como um serpente, o heroi empulhou a espada em |  coroa ainda mais. Vamos ja sofri demais aqui.  ||____\n");
	printf("\t\t  ||/||                                                 |                                                 ||   /\n");
	printf("\t\t  ||\\||  seu peito, derrotando o ambicioso Girotto.     | 	 A princesa foi levada ao castelo e coroada    ||   \\ \n");
	printf("\t\t  |||||                                                 |                                                 /|----\n");
	printf("\t\t  |||||   -O poder me cegou, reconheco. perdoe-me doce  |  junto ao heroi, vivendo assim felizes para     \\|||| \n");
	printf("\t\t  ||||\\                                                 |                                                 /|||| \n");
	printf("\t\t  ||||/  Gigi, por comparar sua juventude a coroa.      |  sempre.                                        ||||| \n");
	printf("\t\t  ||| |_____/\\/_______/\\_______________________________/ \\____/\\_______________________________/\\_________| ||| \n");
	printf("\t\t  ||  /____________________/\\__________|   |__/\\______(   )________/\\___/\\_________/\\_____________________\\  || \n");
	printf("\t\t  (_/____________/\\__________________/\\| ^ |___________( )____________________/\\______________/\\___________ \\_) \n");
	printf("\t\t                                       |/ \\|                                                                    \n");
	system("pause");
	system("cls");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t OBRIGADO POR SALVAR A PRINCESA E DERROTAR O MONSTRO.\n");
	printf("\t\t\t\t\t\t\tNOS VEMOS EM UMA PROXIMA AVENTURA!!\n\n\n\n");	        
	printf("\t\t\t\t* **    **     *******     **     **       **       **   **   ****     **  *\n");
	printf("\t\t\t\t* //**  **     **/////**   /**    /**      /**      /**  /**  /**/**   /** *\n");
	printf("\t\t\t\t*  //****     **     //**  /**    /**      /**   *  /**  /**  /**//**  /** *\n");
	printf("\t\t\t\t*   //**     /**      /**  /**    /**      /**  *** /**  /**  /** //** /** *\n");
	printf("\t\t\t\t*    /**     /**      /**  /**    /**      /** **/**/**  /**  /**  //**/** *\n");
	printf("\t\t\t\t*    /**     //**     **   /**    /**      /**** //****  /**  /**   //**** *\n");
	printf("\t\t\t\t*    /**      //*******    //*******       /**/   ///**  /**  /**    //*** *\n");
	printf("\t\t\t\t*    //        ///////      ///////        //       //   //   //      ///  *\n");
	printf("\n\n\t\t\t\t\tDIGITE 1 E DE ENTER PARA COLTAR AO MENU\n");
	printf("\t\t\t\t\t==> ");			
	scanf("%d", &lixo);
}

void derrotaMonstro()
{
	printf("    ####     ####       ######     \n");
	printf("    ####     ####     ##########   \n");
	printf("    ####     ####    ####    ####   \n");
	printf("    ####     ####    ####    ####  \n");
	printf("    ####     ####    ####    ####   \n");
	printf("    ####     ####    ####    ####   \n");
	printf("    ####     ####    ####    ####      \n");
	printf("    #############    ############    \n");
	printf("    #############    ############  \n");
	printf("    #############    ############    \n");
	printf("    ####     ####    ####    ####      \n");
	printf("    ####     ####    ####    ####     \n");
	printf("    ####     ####    ####    ####    \n");
	printf("    ####     ####    ####    ####     \n");
	Sleep(300);
	system("cls || clear");
  	printf("    ####     ####       ######          ####     ####       ######         \n");
	printf("    ####     ####     ##########        ####     ####     ##########    \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####    \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####     \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####    \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####      \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####   \n");
	printf("    #############    ############       #############    ############ \n");
	printf("    #############    ############       #############    ############    \n");
	printf("    #############    ############       #############    ############    \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####     \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####    \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####      \n");
	Sleep(300);
	system("cls || clear");
	printf("    ####     ####       ######          ####     ####       ######          ####     ####       ######        \n");
	printf("    ####     ####     ##########        ####     ####     ##########        ####     ####     ##########       \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####     \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####   \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####       \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####    \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####     \n");
	printf("    #############    ############       #############    ############       #############    ############    \n");
	printf("    #############    ############       #############    ############       #############    ############     \n");
	printf("    #############    ############       #############    ############       #############    ############    \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####   \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####    \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####    \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####      \n");
	Sleep(300);
	system("cls || clear");
	printf("    ####     ####       ######          ####     ####       ######          ####     ####       ######          ####     ####       ######   \n");
	printf("    ####     ####     ##########        ####     ####     ##########        ####     ####     ##########        ####     ####     ########## \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####\n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####\n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####\n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####\n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####\n");
	printf("    #############    ############       #############    ############       #############    ############       #############    ############\n");
	printf("    #############    ############       #############    ############       #############    ############       #############    ############\n");
	printf("    #############    ############       #############    ############       #############    ############       #############    ############\n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####\n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####\n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####\n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####\n");
	Sleep(1500);
	system("cls || clear");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t\t\t\tACHOU MESMO QUE CONSEGUIRIA ME VENCER, VERME ESTUPIDO?????\n");
	printf("\t\t\tQUANTA INOCENCIA. QUANTA FALTA DE PREPARO. ADMITO QUE FOI UM PRAZER PRA MIM DERROTAR UMA CRIANCA COMO TU\n");
	printf("\t\t\t\t\tVE-LO PERDER PARA MEUS MONSTROS FOI PARA MIM UMA DIVERSAO SEM IGUAL.\n");
	printf("\t\t\t\tAPROVEITE SEU DESCANSO ETERNO DENTRO DE UM LUGAR QUE SABES QUE JAMAIS IRAO TE PROCURAR. ");
	printf("\n\n\n");
	printf("\t\t     ********        **       ****     ****   ********         *******     **      **   ********   *******  \n");
	printf("\t\t    **//////**      ****     /**/**   **/**  /**/////         **/////**   /**     /**  /**/////   /**////** \n");
	printf("\t\t   **      //      **//**    /**//** ** /**  /**             **     //**  /**     /**  /**        /**   /** \n");
	printf("\t\t  /**             **  //**   /** //***  /**  /*******       /**      /**  //**    **   /*******   /*******  \n");
	printf("\t\t  /**    *****   **********  /**  //*   /**  /**////        /**      /**   //**  **    /**////    /**///**  \n");
	printf("\t\t  //**  ////**  /**//////**  /**   /    /**  /**            //**     **     //****     /**        /**  //** \n");
	printf("\t\t   //********   /**     /**  /**        /**  /********       //*******       //**      /********  /**   //**\n");
	printf("\t\t    ////////    //      //   //         //   ////////         ///////         //       ////////   //     // \n");	
}

void derrotaEspinho()
{
	printf("    ####     ####       ######     \n");
	printf("    ####     ####     ##########   \n");
	printf("    ####     ####    ####    ####   \n");
	printf("    ####     ####    ####    ####  \n");
	printf("    ####     ####    ####    ####   \n");
	printf("    ####     ####    ####    ####   \n");
	printf("    ####     ####    ####    ####      \n");
	printf("    #############    ############    \n");
	printf("    #############    ############  \n");
	printf("    #############    ############    \n");
	printf("    ####     ####    ####    ####      \n");
	printf("    ####     ####    ####    ####     \n");
	printf("    ####     ####    ####    ####    \n");
	printf("    ####     ####    ####    ####     \n");
	Sleep(300);
	system("cls || clear");
  	printf("    ####     ####       ######          ####     ####       ######         \n");
	printf("    ####     ####     ##########        ####     ####     ##########    \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####    \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####     \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####    \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####      \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####   \n");
	printf("    #############    ############       #############    ############ \n");
	printf("    #############    ############       #############    ############    \n");
	printf("    #############    ############       #############    ############    \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####     \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####    \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####      \n");
	Sleep(300);
	system("cls || clear");
	printf("    ####     ####       ######          ####     ####       ######          ####     ####       ######        \n");
	printf("    ####     ####     ##########        ####     ####     ##########        ####     ####     ##########       \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####     \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####   \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####       \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####    \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####     \n");
	printf("    #############    ############       #############    ############       #############    ############    \n");
	printf("    #############    ############       #############    ############       #############    ############     \n");
	printf("    #############    ############       #############    ############       #############    ############    \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####   \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####    \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####    \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####      \n");
	Sleep(300);
	system("cls || clear");
	printf("    ####     ####       ######          ####     ####       ######          ####     ####       ######          ####     ####       ######   \n");
	printf("    ####     ####     ##########        ####     ####     ##########        ####     ####     ##########        ####     ####     ########## \n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####\n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####\n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####\n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####\n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####\n");
	printf("    #############    ############       #############    ############       #############    ############       #############    ############\n");
	printf("    #############    ############       #############    ############       #############    ############       #############    ############\n");
	printf("    #############    ############       #############    ############       #############    ############       #############    ############\n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####\n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####\n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####\n");
	printf("    ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####       ####     ####    ####    ####\n");
	Sleep(1500);
	system("cls || clear");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t\t\t\tACHOU MESMO QUE CONSEGUIRIA ME VENCER, VERME ESTUPIDO?????\n");
	printf("\t\t\tQUANTA INOCENCIA. QUANTA FALTA DE PREPARO. ADMITO QUE FOI UM PRAZER PRA MIM DERROTAR UMA CRIANCA COMO TU\n");
	printf("\t\t\t\t\tVE-LO PERDER PARA MEUS ESPINHOS FOI PARA MIM UMA DIVERSAO SEM IGUAL.\n");
	printf("\t\t\t\tAPROVEITE SEU DESCANSO ETERNO DENTRO DE UM LUGAR QUE SABES QUE JAMAIS IRAO TE PROCURAR. ");
	printf("\n\n\n");
	printf("\t\t     ********        **       ****     ****   ********         *******     **      **   ********   *******  \n");
	printf("\t\t    **//////**      ****     /**/**   **/**  /**/////         **/////**   /**     /**  /**/////   /**////** \n");
	printf("\t\t   **      //      **//**    /**//** ** /**  /**             **     //**  /**     /**  /**        /**   /** \n");
	printf("\t\t  /**             **  //**   /** //***  /**  /*******       /**      /**  //**    **   /*******   /*******  \n");
	printf("\t\t  /**    *****   **********  /**  //*   /**  /**////        /**      /**   //**  **    /**////    /**///**  \n");
	printf("\t\t  //**  ////**  /**//////**  /**   /    /**  /**            //**     **     //****     /**        /**  //** \n");
	printf("\t\t   //********   /**     /**  /**        /**  /********       //*******       //**      /********  /**   //**\n");
	printf("\t\t    ////////    //      //   //         //   ////////         ///////         //       ////////   //     // \n");	
}


void Jogo()
{
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
		mapa2(matriz2,x2,y2,chave2,porta2,botao2,eminemY2,eminemX2,eminem2Y2,eminem2X2,eminem3Y2,eminem3X2);

		movimentacao2();
	}
	
	descanso();
	while(fim3 == 0) //dinamica da fase 3
	{

		mapa3(matriz3, x3, y3, chave3, porta3, botao3, eminemY3, eminemX3, espinho3);

		movimentacao3();
	}	
	vitoria();		
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
	char tecla1;
    tecla1 = getch();
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
			if (i==eminem2Y2 && j==eminem2X2 )
			{
				matriz2[i][j]= 'E';
			}
			else
			{
			if (i==eminem3Y2 && j==eminem3X2 )
			{
				matriz2[i][j]= 'E';
			}
			else
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
										//espinhos labirintos 
										if(i==1 && (j== 13 || j==14 || j==18 || j==19 || j==22))
										{
											matriz2[i][j] = '#';
										}
										if(i==2 && (j== 10 || j==11 || j==12 || j==25))
										{
											matriz2[i][j] = '#';
										}
										if(i==3 && (j== 15 || j==16 || j==17 || j==21 || j==22 || j== 25))
										{
											matriz2[i][j] = '#';
										}
										if(i==4 && (j== 3 || j==4 || j==12 || j==13 || j==14 || j== 17 || j==18 || j==19 || j==22 || j==28))
										{
											matriz2[i][j] = '#';
										}//daqui pra cima
										if(i==5 && (j== 5 || j==14 || j==15 || j==16 || j==27))
										{
											matriz2[i][j] = '#';
										}
										if(i==6 && (j > 10 && j < 20))
										{
											matriz2[i][j] = '#';
										}
										if(j==26 && (i > 5 && i < 16))
										{
											matriz2[i][j] = '#';
										}
										if(i==1 && (j> 0 && j<4))
										{
											matriz2[i][j] = '#';
										}
										if(j==11 && (i > 7 && i < 11))
										{
											matriz2[i][j] = '#';
										}
										if(j==13 && (i > 6 && i < 12))
										{
											matriz2[i][j] = '#';
										}
										if(j==15 && (i > 7 && i < 14))
										{
											matriz2[i][j] = '#';
										}
										if(j==17 && (i > 6 && i < 12))
										{
											matriz2[i][j] = '#';
										}
										if(j==19 && (i > 7 && i < 13))
										{
											matriz2[i][j] = '#';
										}
										if(i==8 && (j== 9 || j==21))
										{
											matriz2[i][j] = '#';
										}
										if(i==9 && (j== 1 || j==7 || j==8 || j==22 || j==23))
										{
											matriz2[i][j] = '#';
										}
										if(i==10 && (j== 9 || j==21))
										{
											matriz2[i][j] = '#';
										}
										if(i==12 && (j== 4 || j==5 || j==11))
										{
											matriz2[i][j] = '#';
										}
										if(i==13 && ((j > 2 && j < 7) || j==12 || j==17 || j==18 || j==20 || j==22))
										{
											matriz2[i][j] = '#';
										}
										if(i==14 && ((j > 6 && j < 10) || (j >12 && j < 18) || j==21))
										{
											matriz2[i][j] = '#';
										}
										if(i==15 && ((j> 0 && j<4) || j==9 || j==10 || j==20 || j==21))
										{
											matriz2[i][j] = '#';
										}
										if(i==16 && (j== 9 || j==8 || (j > 12 && j < 18) || j==21))
										{
											matriz2[i][j] = '#';
										}
										if(i==17 && ((j>4  && j<8 ) || j==12 || j==18 || j==22 || j==24 || j==27 || j==28))
										{
											matriz2[i][j] = '#';
										}
										if(i==18 && (j== 2 || j==11 || j==19))
										{
											matriz2[i][j] = '#';
										}
										if(j==8 && (i> 17 && i<23))
										{
											matriz2[i][j] = '#';
										}
										if(i==18 && (j== 2 || j==11 || j==19 ))
										{
											matriz2[i][j] = '#';
										}
										if(i==19 && (j== 3 || j==13 || j==14 || j==20 || j==21))
										{
											matriz2[i][j] = '#';
										}
										if(i==20 && ((j> 10 && j<14) || j==20 ))
										{
											matriz2[i][j] = '#';
										}
										if(j==4 && (i>19  && i<23))
										{
											matriz2[i][j] = '#';
										}
										if(i==21 && (j== 10 || j==11 || j==14 || j==18 || j==19))
										{
											matriz2[i][j] = '#';
										}
										if(i==22 && (j== 9 || j==14 || j==20 || j==22))
										{
											matriz2[i][j] = '#';
										}
										if(i==23 && (j== 3 || j==11 || j==15 || j==16 || j==20 || j==21 || j==25 || j==26))
										{
											matriz2[i][j] = '#';
										}
										if(i==24 && (j== 3 || j==10 || j==23 || j==24))
										{
											matriz2[i][j] = '#';
										}
										if(j==17 && (i> 23 && i<28))
										{
											matriz2[i][j] = '#';
										}
										if(j==19 && (i> 23 && i<28))
										{
											matriz2[i][j] = '#';
										}
										if(i==25 && (j== 4 || j==5 || j==13 || j==18 || j== 24 || j==25))
										{
											matriz2[i][j] = '#';
										}
										if(i==26 && (j== 6 || j==7 || j==18))
										{
											matriz2[i][j] = '#';
										}
										if(i==24 && (j== 9 || j==8 || (j>12 && j<17) || j== 20 || j==21))
										{
											matriz2[i][j] = '#';
										}
										if(i==24 && (j== 22 || j==24 || j==25))
										{
											matriz2[i][j] = '#';
										}
										
								}
							}
						}
					}
				}}
			}}
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
	char tecla2;
    tecla2 = getch();
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
					eminem2Move2();
					eminem3Move2();
					if(y2==0 && x2==15) 
					{
						fim2=1;
					} 
					else {}
						if (x2==eminemX2 && y2==eminemY2 || x2==eminem2X2 && y2==eminem2Y2 || x2==eminem3X2 && y2==eminem3Y2) 
						{
							printf("CRIATURA DEMONIACA!! Me machuquei com o ataque desse verme! Preciso tomar mais cuidado\n");
							Sleep(4000);
							lifes--;
							x2=15;
							y2=15;
							chave2=' ';
							porta2='D';
							botao2='O';
							eminemX2=18;
							eminemY2=25;
							eminem2X2=5;
							eminem2Y2=7;
							eminem3X2=6;
							eminem3Y2=24;
								if (lifes==0) 
								{
									derrotaMonstro();
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
								printf("\t\t\t\tDROGA!!! esses malditos espinhos em meu caminho. Acabei me machucando sem querer\n");
								Sleep(3000);
								lifes--;
								x2=15;
								y2=15;
								chave2=' ';
								porta2='D';
								botao2='O';
								eminemX2=18;
								eminemY2=25;
								eminem2X2=5;
								eminem2Y2=7;
								eminem3X2=6;
								eminem3Y2=24;
									if (lifes==0) 
									{
										derrotaEspinho();
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
				eminem2Move2();
				eminem3Move2();
					if (x2==eminemX2 && y2==eminemY2 || x2==eminem2X2 && y2==eminem2Y2 || x2==eminem3X2 && y2==eminem3Y2) 
					{
						printf("CRIATURA DEMONIACA!! Me machuquei com o ataque desse verme! Preciso tomar mais cuidado\n");
						Sleep(4000);
						lifes--;
						x2=15;
						y2=15;
						chave2=' ';
						porta2='D';
						botao2='O';
						eminemX2=18;
						eminemY2=25;
						eminem2X2=5;
						eminem2Y2=7;
						eminem3X2=6;
						eminem3Y2=24;
							if (lifes==0) 
							{
								derrotaMonstro();
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
							printf("\t\t\t\tDROGA!!! esses malditos espinhos em meu caminho. Acabei me machucando sem querer\n");
							Sleep(3000);
							lifes--;
							x2=15;
							y2=15;
							chave2=' ';
							porta2='D';
							botao2='O';
							eminemX2=18;
							eminemY2=25;
							eminem2X2=5;
							eminem2Y2=7;
							eminem3X2=6;
							eminem3Y2=24;
								if (lifes==0) 
								{
									derrotaEspinho();
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
				eminem2Move2();
				eminem3Move2();
					if (x2==eminemX2 && y2==eminemY2|| x2==eminem2X2 && y2==eminem2Y2 || x2==eminem3X2 && y2==eminem3Y2) 
					{
						printf("CRIATURA DEMONIACA!! Me machuquei com o ataque desse verme! Preciso tomar mais cuidado\n");
						Sleep(4000);
						lifes--;
						x2=15;
						y2=15;
						chave2=' ';
						porta2='D';
						botao2='O';
						eminemX2=18;
						eminemY2=25;
						eminem2X2=5;
						eminem2Y2=7;
						eminem3X2=6;
						eminem3Y2=24;
							if (lifes==0) 
							{
								derrotaMonstro();
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
							printf("\t\t\t\tDROGA!!! esses malditos espinhos em meu caminho. Acabei me machucando sem querer\n");
							Sleep(3000);
							lifes--;
							x2=15;
							y2=15;
							chave2=' ';
							porta2='D';
							botao2='O';
							eminemX2=18;
							eminemY2=25;
							eminem2X2=5;
							eminem2Y2=7;
							eminem3X2=6;
							eminem3Y2=24;
								if (lifes==0) 
								{
									derrotaEspinho();
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
				eminem2Move2();
				eminem3Move2();
					if (x2==eminemX2 && y2==eminemY2 || x2==eminem2X2 && y2==eminem2Y2 || x2==eminem3X2 && y2==eminem3Y2) 
					{
						printf("CRIATURA DEMONIACA!! Me machuquei com o ataque desse verme! Preciso tomar mais cuidado\n");
						Sleep(4000);
						lifes--;
						x2=15;
						y2=15;
						chave2=' ';
						porta2='D';
						botao2='O';
						eminemX2=18;
						eminemY2=25;
						eminem2X2=5;
						eminem2Y2=7;
						eminem3X2=6;
						eminem3Y2=24;
							if (lifes==0) 
							{
								derrotaMonstro();
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
							printf("\t\t\t\tDROGA!!! esses malditos espinhos em meu caminho. Acabei me machucando sem querer\n");
							Sleep(3000);
							lifes--;
							x2=15;
							y2=15;
							chave2=' ';
							porta2='D';
							botao2='O';
							eminemX2=18;
							eminemY2=25;
							eminem2X2=5;
							eminem2Y2=7;
							eminem3X2=6;
							eminem3Y2=24;
								if (lifes==0) 
								{
									derrotaEspinho();
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
void eminem2Move2() 
{
	int eminem2_2;
	srand(time(NULL));
	eminem2_2 = 1 + (rand() % 4);
	
	switch (eminem2_2) 
	{
		case 1:
			if(eminem2Y2==1) 
			{} 
			else 
			{
				eminem2Y2--;
			}
			break;
		case 2:
			if(eminem2Y2==28) 
			{} 
			else 
			{
				eminem2Y2++;

			}
			break;
		case 3:
			if(eminem2X2==1) 
			{} 
			else 
			{
				eminem2X2--;
			}
			break;
		case 4:
			if(eminem2X2==28) 
			{} 
			else 
			{
				eminem2X2++;
			}
			break;
	}
}
void eminem3Move2() 
{
	int eminem2_3;
	srand(time(NULL));
	eminem2_3 = 1 + (rand() % 4);
	
	switch (eminem2_3) 
	{
		case 1:
			if(eminem3Y2==1) 
			{} 
			else 
			{
				eminem3Y2--;
			}
			break;
		case 2:
			if(eminem3Y2==28) 
			{} 
			else 
			{
				eminem3Y2++;

			}
			break;
		case 3:
			if(eminem3X2==1) 
			{} 
			else 
			{
				eminem3X2--;
			}
			break;
		case 4:
			if(eminem3X2==28) 
			{} 
			else 
			{
				eminem3X2++;
			}
			break;
	}
}


void mapa3(char matriz3[60][60], int x3, int y3, char chave3, char porta3, char botao3, int eminemY3, int eminemX3, char espinho3, int monstro2X, int monstro2Y)
{
	int i, j;

	for(i = 0; i < 60; i++)
	{
		for(j = 0; j < 60; j++)
		{
			if(i == monstro2Y && j == monstro2X)
			{
				matriz3[i][j] = 'K';
			}
			else
			{


				if (i == eminemY3 && j == eminemX3 )
				{
					matriz3[i][j] = '¬';
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
								if((i == 56 && j == 17) || (i == 30 && j == 53) || (i == 38 && j == 53) || (i==5 && j==30))
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
											if (i == 56 && j == 16)
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
														matriz3[i][j] = caixa_espinhos;
													}
													else
													{

														if(i == 25 && (j > 24 && j <= 35))
														{
															matriz3[i][j] = caixa_espinhos;
														}
														else
														{

															if(j == 25 && (i > 24 && i <= 35))
															{
																matriz3[i][j] = caixa_espinhos;
															}
															else
															{

																if(j == 35 && (i > 24 && i <= 35))
																{
																	matriz3[i][j] = caixa_espinhos;
																}
																else
																{
																	//espinhos chave
																	if(i == 57 && (j > 14 && j <= 30))
																	{
																		matriz3[i][j] = espinhos_chave;
																	}
																	else
																	{
																		if(i == 55 && (j > 14 && j <= 30))
																		{
																			matriz3[i][j] = espinhos_chave;
																		}
																		else
																		{
																			if(i == 56 && j == 15)
																			{
																				matriz3[i][j] = espinhos_chave;
																			}
																			else
																			{
																				if(i == 56 && j == 30)
																				{
																					matriz3[i][j] = espinhos_chave;
																				}
																				else
																				{
																					if(i == 56 && j == 30)
																					{
																						matriz3[i][j] = espinhos_chave;
																					}
																					else
																					{

																						if(j == 54 && (i > 28 && i <= 39))
																						{
																							matriz3[i][j] = espinhos_chave;
																						}
																						else
																						{
																							if(j == 52 && (i > 28 && i <= 39))
																							{
																								matriz3[i][j] = espinhos_chave;
																							}
																							else
																							{
																								if(j == 53 && i == 29)
																								{
																									matriz3[i][j] = espinhos_chave;
																								}
																								else
																								{
																									if(j == 53 && i == 39)
																									{
																										matriz3[i][j] = espinhos_chave;
																									}else{
																										if((j==25 || j==35) && (i>=1 && i <= 10)){
																											matriz3[i][j] = espinhos_chave;
																										}else{
																											if(i==10 && (j>=25 && j<=35)){
																												matriz3[i][j] = espinhos_chave;
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
							}}
						}
						}	

					}
				}
			}
		}
	}

	system("clear || cls");
	printf("\n\n");
	for(i = 0; i < 60; i++)
	{
		printf("\t");
		for(j = 0; j < 60; j++)
		{
			printf(" ");
			printf("%c", matriz3[i][j]);
		}
		printf("\n");
	}
}

void movimentacao3()
{
    char tecla3;
    tecla3 = getch();
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
				monstro_movimentacao();
				if(y3 == 0 && x3 == 30)
				{
					fim3 = 1;
				}
				else {}
				if ((x3 == eminemX3 && y3 == eminemY3) || (x3 == monstro2X && y3 == monstro2Y))
				{
					printf("CRIATURA DEMONIACA!! Me machuquei com o ataque desse verme! Preciso tomar mais cuidado\n");
					Sleep(4000);
					lifes--;
					x3 = 30;
					y3 = 30;
					chave3 = ' ';
					porta3 = 'D';
					botao3 = 'O';
					tp = ' ';
					espinhos_chave = ' ';
					caixa_espinhos = '#';
					eminemX3 = 38;
					eminemY3 = 55;
					monstro2X = 30;
					monstro2Y = 31;
					if (lifes == 0)
					{
						derrotaMonstro();
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
					printf("\t\t\t\tDROGA!!! esses malditos espinhos em meu caminho. Acabei me machucando sem querer\n");
					Sleep(3000);
					lifes--;
					x3 = 30;
					y3 = 30;
					chave3 = ' ';
					porta3 = 'D';
					botao3 = 'O';
					tp = ' ';
					espinhos_chave = ' ';
					caixa_espinhos = '#';
					eminemX3 = 38;
					eminemY3 = 55;
					if (lifes == 0)
					{
						derrotaEspinho();
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
			monstro_movimentacao();
			if ((x3 == eminemX3 && y3 == eminemY3) || (x3 == monstro2X && y3 == monstro2Y))
			{
				printf("CRIATURA DEMONIACA!! Me machuquei com o ataque desse verme! Preciso tomar mais cuidado\n");
				Sleep(4000);
				lifes--;
				x3 = 30;
				y3 = 30;
				chave3 = ' ';
				porta3 = 'D';
				botao3 = 'O';
				tp = ' ';
				espinhos_chave = ' ';
				caixa_espinhos = '#';
				eminemX3 = 38;
				eminemY3 = 55;
				monstro2X = 30;
				monstro2Y = 31;
				if (lifes == 0)
				{
					derrotaMonstro();
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
				printf("\t\t\t\tDROGA!!! esses malditos espinhos em meu caminho. Acabei me machucando sem querer\n");
				Sleep(3000);
				lifes--;
				x3 = 30;
				y3 = 30;
				chave3 = ' ';
				porta3 = 'D';
				botao3 = 'O';
				tp = ' ';
				espinhos_chave = ' ';
				caixa_espinhos = '#';
				eminemX3 = 38;
				eminemY3 = 55;
				monstro2X = 30;
				monstro2Y = 31;
				if (lifes == 0)
				{
					derrotaEspinho();
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
				monstro_movimentacao();
				if ((x3 == eminemX3 && y3 == eminemY3) || (x3 == monstro2X && y3 == monstro2Y))
				{
					printf("CRIATURA DEMONIACA!! Me machuquei com o ataque desse verme! Preciso tomar mais cuidado\n");
					Sleep(4000);
					lifes--;
					x3 = 30;
					y3 = 30;
					chave3 = ' ';
					porta3 = 'D';
					botao3 = 'O';
					tp = ' ';
					espinhos_chave = ' ';
					caixa_espinhos = '#';
					eminemX3 = 38;
					eminemY3 = 55;
					monstro2X = 30;
					monstro2Y = 31;
					if (lifes == 0)
					{
						derrotaMonstro();
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
					printf("\t\t\t\tDROGA!!! esses malditos espinhos em meu caminho. Acabei me machucando sem querer\n");
					Sleep(3000);
					lifes--;
					x3 = 30;
					y3 = 30;
					chave3 = ' ';
					porta3 = 'D';
					botao3 = 'O';
					tp = ' ';
					espinhos_chave = ' ';
					caixa_espinhos = '#';
					eminemX3 = 38;
					eminemY3 = 55;
					monstro2X = 30;
					monstro2Y = 31;
					if (lifes == 0)
					{
						derrotaEspinho();
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
				monstro_movimentacao();
				if ((x3 == eminemX3 && y3 == eminemY3) || (x3 == monstro2X && y3 == monstro2Y))
				{
					printf("CRIATURA DEMONIACA!! Me machuquei com o ataque desse verme! Preciso tomar mais cuidado\n");
					Sleep(4000);
					lifes--;
					x3 = 30;
					y3 = 30;
					chave3 = ' ';
					porta3 = 'D';
					botao3 = 'O';
					tp = ' ';
					espinhos_chave = ' ';
					caixa_espinhos = '#';
					eminemX3 = 38;
					eminemY3 = 55;
					monstro2X = 30;
					monstro2Y = 31;
					if (lifes == 0)
					{
						derrotaMonstro();
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
					printf("\t\t\t\tDROGA!!! esses malditos espinhos em meu caminho. Acabei me machucando sem querer\n");
					Sleep(3000);
					lifes--;
					x3 = 30;
					y3 = 30;
					chave3 = ' ';
					porta3 = 'D';
					botao3 = 'O';
					tp = ' ';
					espinhos_chave = ' ';
					caixa_espinhos = '#';
					eminemX3 = 38;
					eminemY3 = 55;
					monstro2X = 30;
					monstro2Y = 31;
					if (lifes == 0)
					{
						derrotaEspinho();
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
				caixa_espinhos = ' ';
				espinhos_chave = '#';
				tp = '>';
				monstro2X = 30;
				monstro2Y = 1;
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

						if (x3 == 16 && y3 == 56 && chave3 == '@')
						{
							porta3 = '=';
							chave3 = ' ';
						}
						else {
							if(x3 == 17 && y3 == 56 && tp =='>'){
								x3=53;
								y3=30;
							}else{
								if(x3==53 && y3==30 && tp =='>'){
									x3=17;
									y3=56;
								}else{
									if(y3==38 && x3== 53 && tp =='>'){
										x3=30;
										y3=5;
									}else{
										if(y3==5 && x3==30 && tp =='>'){
											x3=53;
											y3=38;
										}
									}
								}
							}
						}
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

void monstro_movimentacao()
{
	if(monstro2X < x3)
	{
		monstro2X++;
	}
	else if(monstro2X > x3)
	{
		monstro2X--;
	}
	else {}
	if(monstro2Y < y3)
	{
		monstro2Y++;
	}
	else if(monstro2Y > y3)
	{
		monstro2Y--;
	}
	else {}



}
endconio();