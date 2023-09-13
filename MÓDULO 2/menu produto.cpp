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
	
	printf("Insira o código\n");
	scanf("%d", &codigo);
	
	switch (codigo)
	{
		case 1:
			printf("Alimento não-perecível");
			break;
		case 2:
			printf("Alimento percível");
			break;
		case 3:
			printf("Alimento percível");
			break;
		case 4:
			printf("Alimento percível");
			break;
		case 5:
			printf("Vestuário");
			break;	
		case 6:
			printf("Vestuário");
			break;
		case 7:
			printf("Higiene pessoal");
			break;
		case 8:
			printf("Limpesa e Utensílios Domésticos");
			break;
		case 9:
			printf("Limpesa e Utensílios Domésticos");
			break;
		case 10:
			printf("Limpesa e Utensílios Domésticos");
			break;
		case 11:
			printf("Limpesa e Utensílios Domésticos");
			break;
		case 12:
			printf("Limpesa e Utensílios Domésticos");
			break;
		case 13:
			printf("Limpesa e Utensílios Domésticos");
			break;
		case 14:
			printf("Limpesa e Utensílios Domésticos");
			break;
		case 15:
			printf("Limpesa e Utensílios Domésticos");
			break;		
								
		default:
			printf("Código inválido");
						
	}
	
	
	
	
	
	
	
	
	
}
