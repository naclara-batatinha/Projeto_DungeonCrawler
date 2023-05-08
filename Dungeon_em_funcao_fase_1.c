#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

  char matriz [15][15];
  int fim=0;
  char tecla;
  int x=7;
  int y=7;
  char chave='@';
  char porta='D';

int main () {
  

	//fase 1  
    while(fim==0){
	
		mapa(matriz,x,y,chave,porta);
	   	
		movimentacao();
		
    	
	}
    

  return 0; 
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
