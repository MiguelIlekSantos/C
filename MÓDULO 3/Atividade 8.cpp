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
	
	switch(mes){
		case 2:
			printf("28");
			break;
		case 4:
			printf("30");
			break;
		case 6:
			printf("30");
			break;	
		case 9:
			printf("30");
			break;		
		case 11:
			printf("30");
			break;
		default:
			printf("31");
	}
	


	
}

