#include <stdio.h>
#include <locale.h>

void setup(){
	printf("# Funçâo setup() chamada!\t\t    #\n");
}

void input(){
	printf("# Funçâo input() chamada!\t\t    #\n");
}
void drawtwo(){
	printf("# Funçâo draw() chamada!\t\t    #\n");
}

void draw(){
	
		for(int a = 0; a < 45; ++a){
			printf("#");
		}
		printf("\n");

		
		for(int b = 0; b <= 44; ++b){
			if(b == 0 || b == 44){
				printf("#");
			}else{
				printf(" ");
			}
		}	
		printf("\n");
		
		setup();
		input();
		drawtwo();
		
		for(int c = 0; c <= 44; ++c){
			if(c == 0 || c == 44){
				printf("#");
			}else{
				printf(" ");
			}
		}	
		printf("\n");
	
		for(int a = 0; a < 45; ++a){
			printf("#");
		}
		printf("\n\n");
}

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a = 0;
	while(a < 1){
		draw();	
		++a;
	}
			
}

