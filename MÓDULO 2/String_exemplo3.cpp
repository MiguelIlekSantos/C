#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	char nome1[50];
	char apelido1[50];
	
	printf("Introduza o nome:");
	scanf("%s", &nome1);
	printf("Introduza o apelido:");
	scanf("%s", &apelido1);
	
	printf("Nome Completo: %s %s\n", nome1, apelido1);
	printf("%s tem %d caracteres\n", nome1, strlen(nome1));
	printf("%s tem %d caracteres\n", apelido1, strlen(apelido1));	
	
	
}
