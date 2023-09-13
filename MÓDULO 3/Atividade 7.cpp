#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	int mes;
	
	printf("Escreva o mês:\n");
	scanf("%d",&mes);
	
	if(mes == 2){
		printf("28");
	}else if(mes == 4 || mes == 6 || mes == 9 || mes == 11){
		printf("30");
	}else{
		printf("31");
	}
	


	
}

