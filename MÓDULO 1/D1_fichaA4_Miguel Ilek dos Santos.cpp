#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	int y;
	
	printf("Escreva dois número inteiros\n");
	scanf("%d %d", &x, &y);
	
	if (x < y){
		printf("%d    %d        %d é menor que %d", x, y, x, y);
	} else if (x > y){
		printf("%d    %d        %d é maior que %d", x, y, x, y);
	} else if (x = y){
		printf("%d    %d        %d e %d são iguais", x, y, x, y);
	}
	
	
	
	return 0;
	
	
	
}




