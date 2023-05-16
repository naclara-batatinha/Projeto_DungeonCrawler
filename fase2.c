#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <conio.h>
char matriz [30][30];
int fim2=0;
char tecla;
int x=15;
int y=15;
char chave='@';
char porta='D';
char botao='O';
char espinho='#';
int eminemX=18;
int eminemY=25;
int lifes=3;
int lixo;
int main() {


	system("cls || clear");
	Jogo();



}





void Jogo() {
	while(fim2==0) {

		mapa(matriz,x,y,chave,porta,botao,eminemY,eminemX);

		movimentacao();

	}

}

void mapa(char matriz[30][30],int x, int y, char chave, char porta, char botao, int eminemY, int eminemX, char espinho) {

	int i,j;

	for(i = 0; i < 30; i++) {
		for(j = 0; j < 30; j++) {
			if (i==eminemY && j==eminemX ) {
				matriz[i][j]='E';
			} else {

				if(i==y && j==x) {
					matriz[i][j]='&';
				} else {
					if(i==0 && j==15) {
						matriz[i][j]=porta;
					} else {
						if(i==27 && j==18) {
							matriz[i][j]=botao;
						} else {
							if (i==15 && j==15) {
								matriz[i][j]=chave;
							} else {




								if(i==0 || i==29) {
									matriz[i][j]='*';
									printf("\n");

								} else {
									if(j==0 || j==29) {
										matriz[i][j]='*';
									} else {

										matriz[i][j]=' ';
									}
									
								//espinhos
								if(i == 26 && j == 17 || i == 26 && j == 18 || i == 26 && j == 19)
								{
									matriz[i][j] = '#';
									printf("\n");
								}
								else{
								}
									if(i == 27 && j == 16 ||i == 27 && j == 17 || i == 27 && j == 19)
									{
										matriz [i][j] = '#';
										printf("\n");
									}
									else{
									}
										if(i == 28 && j == 19)
										{
											matriz[i][j] = '#';
											printf("\n");
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
	for(i = 0; i < 30; i++) {
		for(j = 0; j < 30; j++) {
			printf("%c", matriz[i][j]);
		}
		printf("\n");
	}
}

void movimentacao() {
	scanf("%c", &tecla);
	switch(tecla) {
		case 'w':
			if((y==1 && matriz[0][15]=='D')&& (x!=15 || x==15)) {

			} else {
				if(y==1 && x!=15) {

				} else {

					y--;
					eminemMove();
					if(y==0 && x==15) {
						fim2=1;
					} else {}
					if (x==eminemX && y==eminemY) {
						lifes--;
						x=15;
						y=15;
						chave=' ';
						porta='D';
						botao='O';
						eminemX=18;
						eminemY=25;
						if (lifes==0) {

							printf("Game Over!\n");
							printf("\nDigite 1 e pressione enter para continuar...");
							scanf("%d", &lixo);
							fim2=1;
							break;
						} else {

						}
					} else {
					}
				}
			}

			break;
		case 's':
			if(y==28) {

			} else {

				y++;
				eminemMove();
				if (x==eminemX && y==eminemY) {
					lifes--;
					x=15;
					y=15;
					chave=' ';
					porta='D';
					botao='O';
					eminemX=18;
					eminemY=25;
					if (lifes==0) {
						printf("Game Over!\n");
						printf("\nDigite 1 e pressione enter para continuar...");
						scanf("%d", &lixo);
						fim2=1;
						break;
					} else {

					}
				} else {
				}
			}
			break;
		case 'a':
			if(x==1) {

			} else {
				x--;
				eminemMove();
				if (x==eminemX && y==eminemY) {
					lifes--;
					x=15;
					y=15;
					chave=' ';
					porta='D';
					botao='O';
					eminemX=18;
					eminemY=25;
					if (lifes==0) {
						printf("Game Over!\n");
						printf("\nDigite 1 e pressione enter para continuar...");
						scanf("%d", &lixo);
						fim2=1;
						break;
					} else {

					}
				} else {
				}
				break;
			case 'd':
				if(x==28) {

				} else {
					x++;
					eminemMove();
					if (x==eminemX && y==eminemY) {
						lifes--;
						x=15;
						y=15;
						chave=' ';
						porta='D';
						botao='O';
						eminemX=18;
						eminemY=25;
						if (lifes==0) {
							printf("Game Over!\n");
							printf("\nDigite 1 e pressione enter para continuar...");
							scanf("%d", &lixo);
							fim2=1;
							break;
						} else {

						}
					} else {
					}
				}
				break;
			case 'i':
				if(x==18 && y==27) {
					chave='@';
					botao=' ';
				} else {}
				if (x==15 && y==15 && chave=='@') {
					porta='=';
					chave='@';
				}
			default:
				break;

			}
	}
}
void eminemMove() {
	int eminem;
	srand(time(NULL));
	eminem = 1 + (rand() % 4);
	switch (eminem) {
		case 1:
			if(eminemY==1) {

			} else {
				eminemY--;
			}


			break;
		case 2:
			if(eminemY==28) {

			} else {

				eminemY++;

			}
			break;
		case 3:
			if(eminemX==1) {

			} else {
				eminemX--;
			}
			break;
		case 4:
			if(eminemX==28) {

			} else {
				eminemX++;
			}
			break;
	}
}