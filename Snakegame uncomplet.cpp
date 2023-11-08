#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#include <locale.h>

int pointerX, pointerY;
int fruitX, fruitY;
int execucao;
int width = 60, height = 30;
int comand, pontuacao;

void setup(){
	
	pointerX = width/2;
	pointerY = height/2;
	
	execucao = 0;
	
	definitionX:
		fruitX = rand()%60;
		
		if(fruitX == 0){
			goto definitionX;
		}
	
	definitionY:
		fruitY = rand()%30;
		
		if(fruitY == 0){
			goto definitionY;
		}
		
	pontuacao = 0;	
	
}

void draw(){
	
	system("cls");
	
	for(int a = 0;a < height; ++a){
		for(int b = 0; b < width; ++b){
			if((b == 0) || (b == width - 1) || (a == 0) || (a == height - 1)){
				printf("#");
			}else if(a == fruitY && b == fruitX){
				printf(".");
			}else if(a == pointerY && b == pointerX){
				printf("0");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	
	printf("\nPontuação : %d", pontuacao);
	
	
}

void input(){
	
	
	if(kbhit()){
		switch(getch()){
			case 'a':
				comand = 1;
				break;	
			case 'w':
				comand = 2;
				break;
			case 's':
				comand = 3;
				break;		
			case 'd':
				comand = 4;
				break;
			case 'x':
				execucao = 1;
				break;		
		}
	}
}

void logic(){
	
	switch(comand){
		
		case 1:
			--pointerX;
			break;
		case 2:
			--pointerY;
			break;
		case 3:
			++pointerY;
			break;
		case 4:
			++pointerX;
			break;	
	}	
	if((pointerX <= 0) || (pointerX >= width) || (pointerY <= 0) || (pointerY >= height)){
		execucao = 1;	
	}else if(pointerX == fruitX && pointerY == fruitY){
		pontuacao += 10;
		
		definitionXtwo:
			fruitX = rand()%60;
			
			if(fruitX == 0){
				goto definitionXtwo;
			}
		definitionYtwo:
			fruitY = rand()%30;
			
			if(fruitY == 0){
				goto definitionYtwo;
			}
	}
	
	
	
}




int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	setup();
	
	while(!execucao){
		draw();
		input();
		logic();
	}
	
	

	
}





























