#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <cstdlib>

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int codigo;
	
	printf("Insira o c�digo\n");
	scanf("%d", &codigo);
	
	switch (codigo)
	{
		case 1:
			printf("Alimento n�o-perec�vel");
			break;
		case 2:
			printf("Alimento perc�vel");
			break;
		case 3:
			printf("Alimento perc�vel");
			break;
		case 4:
			printf("Alimento perc�vel");
			break;
		case 5:
			printf("Vestu�rio");
			break;	
		case 6:
			printf("Vestu�rio");
			break;
		case 7:
			printf("Higiene pessoal");
			break;
		case 8:
			printf("Limpesa e Utens�lios Dom�sticos");
			break;
		case 9:
			printf("Limpesa e Utens�lios Dom�sticos");
			break;
		case 10:
			printf("Limpesa e Utens�lios Dom�sticos");
			break;
		case 11:
			printf("Limpesa e Utens�lios Dom�sticos");
			break;
		case 12:
			printf("Limpesa e Utens�lios Dom�sticos");
			break;
		case 13:
			printf("Limpesa e Utens�lios Dom�sticos");
			break;
		case 14:
			printf("Limpesa e Utens�lios Dom�sticos");
			break;
		case 15:
			printf("Limpesa e Utens�lios Dom�sticos");
			break;		
								
		default:
			printf("C�digo inv�lido");
						
	}
	
	
	
	
	
	
	
	
	
}
