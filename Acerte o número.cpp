#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int ramdomNum;
int tryNum = 0;


void setup(){
	srand(time(NULL));
	ramdomNum = rand()%100;
	printf("%d", ramdomNum);
}

void input(){
	printf("#  Número proposto : ");
	scanf("%d", &tryNum);
	printf("#\t\t\t\t\t    #");
}

void ifs(){

	int a = 0;
	while(tryNum != ramdomNum){
		input();
//		printf("%d", ramdomNum);
		printf("\n#  ");
		if((tryNum != ramdomNum) && (ramdomNum < 50) && (a == 0)){
			printf("Número incorreto\t\t\t    #\n#  Dica : o número é menor que 50\t    #\n");
		}else if((tryNum != ramdomNum) && (ramdomNum > 50) && (a == 0)){
			printf("Número incorreto\t\t\t    #\n#  Dica : o número é maior que 50\t    #\n");
		}else if((tryNum != ramdomNum) && (ramdomNum%2==0) && (a == 1)){
			printf("Número incorreto\t\t\t    #\n#  Dica : o número é par\t\t    #\n");
		}else if((tryNum != ramdomNum) && (ramdomNum%2!=0) && (a == 1)){
			printf("Número incorreto\t\t\t    #\n#  Dica : o número é ímpar\t\t    #\n");
		}else if(tryNum != ramdomNum){
			printf("Número incorreto\t\t\t    #\n");
		}
		printf("#\t\t\t\t\t    #\n");
		++a;
	}
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

		ifs();

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

	setup();
	draw();


	printf("\n\nNúmero correto !\n\n\n");
	return 3;

}

