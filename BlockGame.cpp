#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
#include <locale.h>

int coor[30][60];
char graph[30][60];

int positionXball = 60/2, positionYball = 30/2, finish = 1, barLeft = 14, barRight = 40, move = 1, aux = 0;

void draw(){
	
	for(int a = 0;a < 30; ++a){
		for(int b = 0; b < 60; ++b){
					
				if((b == 0) || (b == 60 - 1) || (a == 0) || (a == 30 - 1)){
					graph[a][b] = '#';
				}else if(a == positionYball && b == positionXball){
					graph[a][b] = '0';
				}else if(coor[a][b] == 1){
					graph[a][b] = ' ';
				}else if((a == 1) || (a == 2) || (a == 3) && (b != 0) && (b != 60 - 1)){
					graph[a][b] = '_';
				}else if((b >= barLeft) && (b <= barRight) && (a == 30 - 2)){
					graph[a][b] = '-';
				}else{
					graph[a][b] = ' ';
				}
			
		} 
	}	 

	for(int c = 0; c < 30; ++c){
		for(int d = 0; d < 60; ++d){
			printf("%c", graph[c][d]);
		}
		printf("\n");
	}

}

void input(){
	
	if(kbhit()){
		switch(getch()){
		case 'a':
			if(barLeft != 0){
				--barLeft;
				--barRight;	
			}
			break;
		case 'd':
			if(barRight != 58){		
				++barLeft;
				++barRight;
			}
			break;
		case 'q':
			finish = 0;
			break;
		default:
			break;
		}
	}
}

void ballMove(){	
	
	if((move == 1) && (graph[positionYball-1][positionXball-1] == ' ') && (positionXball > 0)){	
		positionXball = positionXball-1;
		positionYball = positionYball-1;	
	}else if((move == 1) && (positionXball > 0) && (graph[positionYball-1][positionXball-1] == '_') || (graph[positionYball-1][positionXball] == '_') || (graph[positionYball][positionXball-1] == '_')){
		coor[positionYball-1][positionXball-1] = 1;
		coor[positionYball-1][positionXball] = 1;
		coor[positionYball][positionXball-1] = 1;
		move = 2;
	}else if((move == 1) && (graph[positionYball-1][positionXball-1] == '#') && (positionYball == 1)){
		move = 2;
	}else if((move == 1) && (graph[positionYball-1][positionXball-1] == '#') && (positionXball > 0)){
		move = 4;
	}else if((move == 2) && (graph[positionYball+1][positionXball-1] == ' ') && (positionXball > 0)){
		positionXball = positionXball-1;
		positionYball = positionYball+1;
	}else if((move == 2) && (graph[positionYball+1][positionXball-1] == '-') && (positionXball > 0)){
		move = 1;
	}else if((move == 2) && (graph[positionYball+1][positionXball-1] == '#') && (positionXball < 28)){
		move = 3;
	}else if((move == 2) && (positionXball > 0) && (graph[positionYball+1][positionXball-1] == '_') || (graph[positionYball+1][positionXball] == '_') || (graph[positionYball][positionXball-1] == '_')){
		coor[positionYball+1][positionXball-1] = 1;
		coor[positionYball+1][positionXball] = 1;
		coor[positionYball][positionXball-1] = 1;
		move = 3;
	}else if((move == 2) && (graph[positionYball+1][positionXball-1] == '#') && (positionYball == 28)){
		finish = 0;
	}else if((move == 3) && (graph[positionYball+1][positionXball+1] == ' ') && (positionXball > 0)){
		positionXball = positionXball+1;
		positionYball = positionYball+1;
	}else if((move == 3) && (graph[positionYball+1][positionXball+1] == '#') && (positionYball < 28)){
		move = 2;
	}else if((move == 3) && (graph[positionYball+1][positionXball+1] == '#') && (positionYball == 28)){
		finish = 0;
	}else if((move == 3) && (graph[positionYball+1][positionXball+1] == '-') && (positionYball < 28)){
		move = 4;
	}else if((move == 3) && (positionYball < 28) && (graph[positionYball+1][positionXball+1] == '_') || (graph[positionYball+1][positionXball] == '_') || (graph[positionYball][positionXball+1] == '_')){
		coor[positionYball+1][positionXball+1] = 1;
		coor[positionYball+1][positionXball] = 1;
		coor[positionYball][positionXball+1] = 1;
		move = 4;
	}else if((move == 4) && (graph[positionYball-1][positionXball+1] == ' ') && (positionXball > 0)){	
		positionXball = positionXball+1;
		positionYball = positionYball-1;	
	}else if((move == 4) && (positionXball > 0) && (graph[positionYball-1][positionXball+1] == '_') || (graph[positionYball][positionXball+1] == '_') || (graph[positionYball-1][positionXball] == '_')){
		coor[positionYball-1][positionXball+1] = 1;
		coor[positionYball][positionXball+1] = 1;
		coor[positionYball-1][positionXball] = 1;
		move = 3;
	}else if((move == 4) && (graph[positionYball-1][positionXball+1] == '#') && (positionYball == 1)){
		move = 3;
	}else if((move == 4) && (graph[positionYball-1][positionXball+1] == '#') && (positionXball > 0)){
		move = 1;
	}

}

int main(){

	while(finish != 0){
		system("cls");
		draw();
		input();
		ballMove();
	}
	
	
}
