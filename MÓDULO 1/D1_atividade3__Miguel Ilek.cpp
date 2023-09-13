#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	float x,y;
		
	printf("Escreva um número inteiro\n");
	scanf("%f",&x);
	printf("Escreva outro número inteiro\n");
	scanf("%f",&y);
	
	printf("x + y = %2f\n",x+y);
	printf("x * y = %2f\n",x*y);
	printf("x / y = %2f\n",x/y);
	printf("x - y = %2f\n",x-y);
	
	
	
}
