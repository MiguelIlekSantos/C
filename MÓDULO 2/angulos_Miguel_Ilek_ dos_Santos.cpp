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

	printf("Insira o �ngulo 1:");
	scanf("%d", &num1);
	if ((num1 < 0))	
		printf("�ngulo inv�lido\n");
	else {
		
		printf("Insira o �ngulo 2:");
		scanf("%d", &num2);
		if (num2 < 0)  
			printf("�ngulo inv�lido");
		else{

		printf("Insira o �ngulo 3:");
		scanf("%d", &num3);
		if (num3 < 0)  
		printf("�ngulo inv�lido");
		else if (num1 + num2 + num3 != 180)
			printf("� soma dos 3 �ngulos � %d que � diferente de 180�!", num1 + num2 + num3);
		else{
			
			printf("\nEscolha a op��o:\n");
			printf("1- Maior dos �ngulos\n");
			printf("2- Menor dos angulos\n");
			printf("3- Mostrar o tipo de tri�ngulo");
			scanf("%d", &opcao);
		
		switch(opcao)
		{
			case 1:
					if ((num3 > num2) && (num3 > num1))
					printf("\nO maior �ngulo � o �ngulo 3:\t%d", num3);
				
					else if ((num2 > num3) && (num2 > num1))
					printf("\nO maior �ngulo � o �ngulo 2:\t%d", num2);
					
					else if ((num1 > num3) && (num1 > num2))
					printf("\nO maior �ngulo � o �ngulo 1:\t%d", num1);
				break;	
			
			case 2:
					if ((num3 < num2) && (num3 < num1))
					printf("\nO menor �ngulo � o �ngulo 3:\t%d", num3);
					
					else if ((num2 < num3) && (num2 < num1))
					printf("\nO menor �ngulo � o �ngulo 2:\t%d", num2);
					
					else if ((num1 < num3) && (num1 < num2))
					printf("\nO menor �ngulo � o �ngulo 1:\t%d", num1);
				break;
			
			case 3:
				if((num1 == num2) && (num2 == num3))
				printf("\n|\\\n| \\\n|__\\\tEQUIL�TERO");
				else if ((num1 == num2) && (num2 != num3))
				printf("\n|\\\n| \\\n|__\\\tIS�SCELES");
				else if ((num1 == num3) && (num2 != num1))
				printf("\n|\\\n| \\\n|__\\\tIS�SCELES");
				else if ((num1 != num3) && (num2 != num1))
				printf("\n|\\\n| \\\n|__\\\tESCALEN0");
				break;
			
		}							
	}	
}
}
}
