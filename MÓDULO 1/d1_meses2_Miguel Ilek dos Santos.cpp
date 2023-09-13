#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	char mes[15];
	
	printf("Escreva o mês:\n");
	scanf("%c",&mes);
	
	switch(mes)
	{
		case 'janeiro': 
		case 'Janeiro':
		case 'março':
		case 'Março':
		case 'maio': 
		case 'Maio': 
		case 'julho':
		case 'Julho':
		case 'agosto':
		case 'Agosto':	
		case 'outubro':
		case 'Outubro':	
		case 'dezembro':
		case 'Dezembro':					
			printf("31");
		break;
		
		case 'fevereiro':
		case 'Fevereiro':
			printf("28");
		break;
		
		case 'abril':
		case 'Abril':
		case 'junho':
		case 'Junho':
		case 'setembro':
		case 'Setembro':	
		case 'novembro':
		case 'Novembro':
			printf("30");
		break;

	}
	
}

