#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <cstdlib>
#define PI 3.1416

typedef struct{
	int x;	
	float y;
	char z[2];
}struct1;

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	struct1 var1;
	
	printf("Insira o valor Z char\t");
	fgets(var1.z, 2, stdin);
	printf("Insira o valor X int\t");
	scanf("%d", &var1.x);
	printf("Insira o valor Y float\t");
	scanf("%f", &var1.y);
	 
	int *pont1 = &var1.x;
	
	float *pont2 = &var1.y;
	
	char *pont3 = &var1.z[2];
		
	printf("\n\n%s\n%d\n%.2f", var1.z, var1.x, var1.y);
	printf("\n\n");
	printf("%d\n%d\n%d", &var1.x, &var1.y, &var1.z);
	 
	
}
