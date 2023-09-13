#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <stdbool.h>
#include <windows.h>

	#define LARGURA_TELA 40
	#define ALTURA_TELA 20
	
	int RAQUETE_INICIAL_X = 18, RAQUETE_INICIAL_Y = 22; 
	int BOLA_INICIAL_X = 20, BOLA_INICIAL_Y = 18;
	int VELOCIDADE_RAQUETE = 1, VELOCIDADE_BOLA = 1;
	
	char tela[ALTURA_TELA][LARGURA_TELA];
	int raqueteX, raqueteY;
	int bolaX, bolaY;
	int velocidadeBolaX;
	int velocidadeBolaY;
	bool jogoAtivo;


void inicializarTela(){
	
	for(int i = 0; i < ALTURA_TELA; ++i){
		for(int j = 0; j < LARGURA_TELA; ++j){
			if((j == 0) || (j == LARGURA_TELA - 1) || (i == 0) || (i == ALTURA_TELA - 1)){
				tela[i][j] = '#';
			}else if(i == 18 && (j == raqueteX && j < 22)){
				tela[i][j] = '-';
			}else if(i == bolaY && j == bolaX){
				tela[i][j] = '0';
			}else{
				tela[i][j] = ' ';
			}		
		}
	}		
}


void atualizarTela(){
	
	system("cls");
	
	for(int a = 0; a < ALTURA_TELA; ++a){
		for(int b = 0; b < LARGURA_TELA; ++b){
			printf("%c", tela[a][b]);
		}
		printf("\n");
	}		
}


void moverRaquete(char direcao){
	
	if(direcao == 'a' && raqueteX > 0){
		raqueteX -= VELOCIDADE_RAQUETE;
	}else if(direcao == 'd' && raqueteX < LARGURA_TELA - 4){
		raqueteX += VELOCIDADE_RAQUETE;
	}	
}


void moverBola(){
	bolaX += velocidadeBolaX;
	bolaY += velocidadeBolaY;
	
	if(bolaX == 0 || bolaX == LARGURA_TELA - 1){
		velocidadeBolaX = -velocidadeBolaX;
	}
	
	if(bolaY == 0){
		velocidadeBolaY = -velocidadeBolaY;
	}
	
	if(bolaY == raqueteY - 1 && bolaX >= raqueteX && bolaX < raqueteX +4){
		velocidadeBolaY = -velocidadeBolaY;
	}
	
	if(bolaY == ALTURA_TELA - 1){
		jogoAtivo = false;
	}
	
	
}

void processarEntrada(){
	
	if(_kbhit()){
		char tecla = _getch();
		
		if(tecla == 'a' || tecla == 'd'){
			moverRaquete(tecla);
		}else if(tecla == 'q'){
			jogoAtivo = false;
		}
		
	}
	
}

int main(){
	
	raqueteX = RAQUETE_INICIAL_X;		
	raqueteY = RAQUETE_INICIAL_Y;
	bolaX = BOLA_INICIAL_X;		
	bolaY = BOLA_INICIAL_Y;		
	velocidadeBolaX = VELOCIDADE_BOLA;
	velocidadeBolaY = VELOCIDADE_BOLA;		
	jogoAtivo = true;
	
	while(jogoAtivo){
		inicializarTela();
		atualizarTela();
		processarEntrada();
		moverBola();
		Sleep(100);	
	}
			
	printf("Fim do jogo!\n");
	
	return 0;

}


