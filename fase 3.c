#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
#include <conio.h>

char matriz3 [60][60];

int fim2 = 0;

char tecla2;


int x2 = 30;
int y2 = 30;


char chave2 = ' ';


char porta2 = 'D';

char botao2 = 'O';

char espinho2 = '#';
char caixa_espinhos = '#';
char espinhos_chave = ' ';

int eminemX2 = 38;
int eminemY2 = 55;

int monstro2X = 30;
int monstro2Y = 10;

char tp = ' ';

int lifes = 3;
int lixo;


int main()
{
	while(fim2 == 0)
	{

		mapa2(matriz3, x2, y2, chave2, porta2, botao2, eminemY2, eminemX2, espinho2);

		movimentacao2();
	}


	return 0;
}



void mapa2(char matriz3[60][60], int x2, int y2, char chave2, char porta2, char botao2, int eminemY2, int eminemX2, char espinho2)
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


				if (i == eminemY2 && j == eminemX2 )
				{
					matriz3[i][j] = '¬';
				}
				else
				{
					if(i == y2 && j == x2)
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
									matriz3[i][j] = porta2;
								}
								else
								{
									if(i == 28 && j == 30)
									{
										matriz3[i][j] = botao2;
									}
									else
									{
										if (i == 56 && j == 4)
										{
											matriz3[i][j] = chave2;
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
																if(i == 57 && (j > 2 && j <= 30))
																{
																	matriz3[i][j] = espinhos_chave;
																}
																else
																{
																	if(i == 55 && (j > 2 && j <= 30))
																	{
																		matriz3[i][j] = espinhos_chave;
																	}
																	else
																	{
																		if(i == 56 && j == 3)
																		{
																			matriz3[i][j] = espinhos_chave;
																		}
																		else
																		{
																			if(i == 56 && j == 30)
																			{
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
	}
	system("clear || cls");
	for(i = 0; i < 60; i++)
	{
		for(j = 0; j < 60; j++)
		{
			printf("%c", matriz3[i][j]);
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
		if((y2 == 1 && matriz3[0][30] == 'D') && (x2 != 30 || x2 == 30))
		{}
		else
		{
			if(y2 == 1 && x2 != 30)
			{}
			else
			{
				y2--;
				eminemMove2();
				monstro_movimentacao();
				if(y2 == 0 && x2 == 30)
				{
					fim2 = 1;
				}
				else {}
				if ((x2 == eminemX2 && y2 == eminemY2) || (x2 == monstro2X && y2 == monstro2Y))
				{
					lifes--;
					x2 = 30;
					y2 = 30;
					chave2 = ' ';
					porta2 = 'D';
					botao2 = 'O';
					tp = ' ';
					espinhos_chave = ' ';
					caixa_espinhos = '#';
					eminemX2 = 38;
					eminemY2 = 55;
					if (lifes == 0)
					{
						printf("Game Over!\n");
						printf("\nDigite 1 e pressione enter para continuar...");
						scanf("%d", &lixo);
						fim2 = 1;
						break;
					}
					else {}
				}
				else {}
				//verificar o dano do espinho
				if (matriz3[y2][x2] == espinho2)
				{
					printf("Você sofreu dano!\n");
					lifes--;
					x2 = 30;
					y2 = 30;
					chave2 = ' ';
					porta2 = 'D';
					botao2 = 'O';
					tp = ' ';
					espinhos_chave = ' ';
					caixa_espinhos = '#';
					eminemX2 = 38;
					eminemY2 = 55;
					if (lifes == 0)
					{
						printf("Game Over!\n");
						printf("\nDigite 1 e pressione enter para continuar...");
						scanf("%d", &lixo);
						fim2 = 1;
						break;
					}
					else {}
				}

			}
		}
		break;
	case 's':
		if(y2 == 58)
		{}
		else
		{
			y2++;
			eminemMove2();
			monstro_movimentacao();
			if ((x2 == eminemX2 && y2 == eminemY2) || (x2 == monstro2X && y2 == monstro2Y))
			{
				lifes--;
				x2 = 30;
				y2 = 30;
				chave2 = ' ';
				porta2 = 'D';
				botao2 = 'O';
				tp = ' ';
				espinhos_chave = ' ';
				caixa_espinhos = '#';
				eminemX2 = 38;
				eminemY2 = 55;
				if (lifes == 0)
				{
					printf("Game Over!\n");
					printf("\nDigite 1 e pressione enter para continuar...");
					scanf("%d", &lixo);
					fim2 = 1;
					break;
				}
				else {}
			}
			else {}
			//verificar o dano do espinho
			if (matriz3[y2][x2] == espinho2)
			{
				printf("Você sofreu dano!\n");
				lifes--;
				x2 = 30;
				y2 = 30;
				chave2 = ' ';
				porta2 = 'D';
				botao2 = 'O';
				tp = ' ';
				espinhos_chave = ' ';
				caixa_espinhos = '#';
				eminemX2 = 38;
				eminemY2 = 55;
				if (lifes == 0)
				{
					printf("Game Over!\n");
					printf("\nDigite 1 e pressione enter para continuar...");
					scanf("%d", &lixo);
					fim2 = 1;
					break;
				}
				else {}
			}


			break;
		case 'a':
			if(x2 == 1)
			{}
			else
			{
				x2--;
				eminemMove2();
				monstro_movimentacao();
				if ((x2 == eminemX2 && y2 == eminemY2) || (x2 == monstro2X && y2 == monstro2Y))
				{
					lifes--;
					x2 = 30;
					y2 = 30;
					chave2 = ' ';
					porta2 = 'D';
					botao2 = 'O';
					tp = ' ';
					espinhos_chave = ' ';
					caixa_espinhos = '#';
					eminemX2 = 38;
					eminemY2 = 55;
					if (lifes == 0)
					{
						printf("Game Over!\n");
						printf("\nDigite 1 e pressione enter para continuar...");
						scanf("%d", &lixo);
						fim2 = 1;
						break;
					}
					else {}
				}
				else {}
				//verificar o dano do espinho
				if (matriz3[y2][x2] == espinho2)
				{
					printf("Você sofreu dano!\n");
					lifes--;
					x2 = 30;
					y2 = 30;
					chave2 = ' ';
					porta2 = 'D';
					botao2 = 'O';
					tp = ' ';
					espinhos_chave = ' ';
					caixa_espinhos = '#';
					eminemX2 = 38;
					eminemY2 = 55;
					if (lifes == 0)
					{
						printf("Game Over!\n");
						printf("\nDigite 1 e pressione enter para continuar...");
						scanf("%d", &lixo);
						fim2 = 1;
						break;
					}
					else {}
				}
			}
			break;
		case 'd':
			if(x2 == 58)
			{}
			else
			{
				x2++;
				eminemMove2();
				monstro_movimentacao();
				if ((x2 == eminemX2 && y2 == eminemY2) || (x2 == monstro2X && y2 == monstro2Y))
				{
					lifes--;
					x2 = 30;
					y2 = 30;
					chave2 = ' ';
					porta2 = 'D';
					botao2 = 'O';
					tp = ' ';
					espinhos_chave = ' ';
					caixa_espinhos = '#';
					eminemX2 = 38;
					eminemY2 = 55;
					if (lifes == 0)
					{
						printf("Game Over!\n");
						printf("\nDigite 1 e pressione enter para continuar...");
						scanf("%d", &lixo);
						fim2 = 1;
						break;
					}
					else {}
				}
				else {}
				//verificar o dano do espinho
				if (matriz3[y2][x2] == espinho2)
				{
					printf("Você sofreu dano!\n");
					lifes--;
					x2 = 30;
					y2 = 30;
					chave2 = ' ';
					porta2 = 'D';
					botao2 = 'O';
					tp = ' ';
					espinhos_chave = ' ';
					caixa_espinhos = '#';
					eminemX2 = 38;
					eminemY2 = 55;
					if (lifes == 0)
					{
						printf("Game Over!\n");
						printf("\nDigite 1 e pressione enter para continuar...");
						scanf("%d", &lixo);
						fim2 = 1;
						break;
					}
					else {}
				}


			}
			break;
		case 'i':
			if(x2 == 30 && y2 == 28)
			{
				chave2 = '@';
				botao2 = ' ';
				caixa_espinhos = ' ';
				espinhos_chave = '#';
				tp = '>';
			}
			else
			{

				if(x2 == 30 && y2 == 24 && tp == '>')
				{
					x2 = 29;
					y2 = 56;
				}
				else
				{

					if(x2 == 29 && y2 == 56 && tp == '>')
					{
						x2 = 30;
						y2 = 24;
					}
					else
					{

						if (x2 == 4 && y2 == 56 && chave2 == '@')
						{
							porta2 = '=';
							chave2 = ' ';
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
void eminemMove2()
{
	int eminem2;
	srand(time(NULL));
	eminem2 = 1 + (rand() % 4);

	switch (eminem2)
	{
	case 1:
		if(eminemY2 == 1)
		{}
		else
		{
			eminemY2--;
		}
		break;
	case 2:
		if(eminemY2 == 58)
		{}
		else
		{
			eminemY2++;

		}
		break;
	case 3:
		if(eminemX2 == 1)
		{}
		else
		{
			eminemX2--;
		}
		break;
	case 4:
		if(eminemX2 == 58)
		{}
		else
		{
			eminemX2++;
		}
		break;
	}
}

void monstro_movimentacao()
{
	if(monstro2X < x2)
	{
		monstro2X++;
	}
	else
	{
		monstro2X--;
	}
	if(monstro2Y < y2)
	{
		monstro2Y++;
	}
	else
	{
		monstro2Y--;
	}



}

