#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <cstdlib>

int main()
{
		
	setlocale(LC_ALL, "Portuguese");

	int num1, num2, num3;
	int opcao;

	printf("Insira o número 1:\t");
	scanf("%d", &num1);
	if ((num1 < 0))	
		printf("Número inválido\n");
	else {
		
		printf("Insira o número 2:\t");
		scanf("%d", &num2);
		if (num2 < 0)  
			printf("Número inválido");
		else if (num2 == num1)
			printf("Pelo menos 2 números iguais!");
		else{

		printf("Insira o número 3:\t");
		scanf("%d", &num3);
			if (num3 < 0)  
		{
			printf("Número inválido");
		}
		else if ((num3 == num2) || (num3 == num1))
		{
			printf("Pelo menos 2 números iguais!");
		}
		else{
			
			printf("\nEscolha a opção:\n");
			printf("1- Maior dos números\n");
			printf("2- Menor dos números\n");
			printf("3- Números ordenados crescente\n");
			printf("4- Números ordenados decrescente\n");
			printf("Escolha a opção:\t");
			scanf("%d", &opcao);
			
			switch(opcao)
			{
				case 1:
					if ((num3 > num2) && (num3 > num1))
					printf("Maior número:\t%d", num3);
				
					else if ((num2 > num3) && (num2 > num1))
					printf("Maior número:\t%d", num2);
					
					else if ((num1 > num3) && (num1 > num2))
					printf("Maior número:\t%d", num1);
					
				    break;
				
				case 2:
					if ((num3 < num2) && (num3 < num1))
					printf("Menor número:\t%d", num3);
					
					else if ((num2 < num3) && (num2 < num1))
					printf("Menor número:\t%d", num2);
					
					else if ((num1 < num3) && (num1 < num2))
					printf("Menor número:\t%d", num1);
					
				    break;
				
				case 3:
					if ((num1 < num2) && (num2 < num3))
					printf("%d,%d,%d", num1,num2,num3);
					
					else if ((num3 < num2) && (num2 < num1))
					printf("%d,%d,%d", num3, num2, num1);
					
					else if ((num3 < num2) && (num2 > num1))
					printf("%d,%d,%d", num1, num3, num2);
				    
				    else if ((num2 < num3) && (num3 < num1))
					printf("%d,%d,%d", num2, num3, num1);
					
					else if ((num2 < num1) && (num1 < num3))
					printf("%d,%d,%d", num2, num1, num3);
					
					
					break;
					
				case 4:
					if ((num1 < num2) && (num2 < num3))
					printf("%d,%d,%d", num3,num2,num1);
					
					else if ((num3 < num2) && (num2 < num1))
					printf("%d,%d,%d", num1, num2, num3);
					
					else if ((num3 < num2) && (num2 > num1))
					printf("%d,%d,%d", num2, num1, num3);
				    
				    else if ((num2 < num3) && (num3 < num1))
					printf("%d,%d,%d", num1, num3, num2);
					
					else if ((num2 < num1) && (num1 > num3))
					printf("%d,%d,%d", num3, num1, num2);	
					
				    break;	
			}
		}	
		}		
	}	
}
