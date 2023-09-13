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

	printf("Insira o ângulo 1:");
	scanf("%d", &num1);
	if ((num1 < 0))	
		printf("Ângulo inválido\n");
	else {
		
		printf("Insira o ângulo 2:");
		scanf("%d", &num2);
		if (num2 < 0)  
			printf("Ângulo inválido");
		else{

		printf("Insira o ângulo 3:");
		scanf("%d", &num3);
		if (num3 < 0)  
		printf("Ângulo inválido");
		else if (num1 + num2 + num3 != 180)
			printf("Â soma dos 3 ângulos é %d que é diferente de 180º!", num1 + num2 + num3);
		else{
			
			printf("\nEscolha a opção:\n");
			printf("1- Maior dos ângulos\n");
			printf("2- Menor dos angulos\n");
			printf("3- Mostrar o tipo de triângulo");
			scanf("%d", &opcao);
		
		switch(opcao)
		{
			case 1:
					if ((num3 > num2) && (num3 > num1))
					printf("\nO maior ãngulo é o ângulo 3:\t%d", num3);
				
					else if ((num2 > num3) && (num2 > num1))
					printf("\nO maior ãngulo é o ângulo 2:\t%d", num2);
					
					else if ((num1 > num3) && (num1 > num2))
					printf("\nO maior ãngulo é o ângulo 1:\t%d", num1);
				break;	
			
			case 2:
					if ((num3 < num2) && (num3 < num1))
					printf("\nO menor ãngulo é o ângulo 3:\t%d", num3);
					
					else if ((num2 < num3) && (num2 < num1))
					printf("\nO menor ãngulo é o ângulo 2:\t%d", num2);
					
					else if ((num1 < num3) && (num1 < num2))
					printf("\nO menor ãngulo é o ângulo 1:\t%d", num1);
				break;
			
			case 3:
				if((num1 == num2) && (num2 == num3))
				printf("\n|\\\n| \\\n|__\\\tEQUILÁTERO");
				else if ((num1 == num2) && (num2 != num3))
				printf("\n|\\\n| \\\n|__\\\tISÓSCELES");
				else if ((num1 == num3) && (num2 != num1))
				printf("\n|\\\n| \\\n|__\\\tISÓSCELES");
				else if ((num1 != num3) && (num2 != num1))
				printf("\n|\\\n| \\\n|__\\\tESCALEN0");
				break;
			
		}							
	}	
}
}
}
