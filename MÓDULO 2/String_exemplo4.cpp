#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	char nomecompleto[15];
	
	printf("Introduza o Nome Completo:");
	gets(nomecompleto, 14, stdin);
	
	printf("Nome Completo: %s\n", nomecompleto);
	
	
	
}
