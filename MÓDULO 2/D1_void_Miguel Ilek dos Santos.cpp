#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <cstdlib>

	void ola()
	{
		printf("Olá!\n");
	}
	
	void tudo_bem()
	{
		printf("Tudo bem, e contigo?\n");
	}
	
	void familia()
	{
		printf("A minha família vai bem!\n");
	}
	
	void sair()
	{
		printf("Já vai??? Não! Não! Espere! Nãã...\n");
	}
	
int main ()
{
	setlocale(LC_ALL, "Portuguese");
	
	int continuar;
	
	do{
		printf("\n\tChat Foreve Alone\n\n");
		printf("1. Olá\n");
		printf("2. Tudo bem\n");
		printf("3. Como vai a familia\n");
		printf("0. Sair\n");
		
		scanf("%d", &continuar);
		system("cls || clear");
		
		switch(continuar)
		{
			case 1:
				ola();
				break;
				
			case 2:
				tudo_bem();	
				break;	
			case 3:
				familia();
				break;	
			case 0:
				sair();
			break;	
			
			default:
				printf("Digite uma opção válida\n");
		}
			
	} while (continuar);
	

}

