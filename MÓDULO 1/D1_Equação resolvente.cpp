#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	float a;
	float b;
	float c;
	float x1;
	float x2;
	float delta;
	
	printf("Qual o valor de A?\n");	
	scanf("%f", &a);
	printf("Qual o valor de B?\n");
	scanf("%f", &b);
	printf("Qual o valor de C?\n");
	scanf("%f", &c);
				
	delta = pow(b,2)-4*a*c;
		 
	if (delta <= 0)					
	    printf("Equação impossível\n");	
		else 
		printf("Equação aceita"); 			

	x1 = (-b + sqrt(delta)/(2*a));
	x2 = (-b - sqrt(delta)/(2*a));
		
		
	printf("O valor de x1 é %.2f\n", x1);
	printf("O valor de x2 é %.2f\n", x2);
	
	return 0;
	
}
