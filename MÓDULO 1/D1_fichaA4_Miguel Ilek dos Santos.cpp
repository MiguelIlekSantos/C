#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	int x;
	int y;
	
	printf("Escreva dois n�mero inteiros\n");
	scanf("%d %d", &x, &y);
	
	if (x < y){
		printf("%d    %d        %d � menor que %d", x, y, x, y);
	} else if (x > y){
		printf("%d    %d        %d � maior que %d", x, y, x, y);
	} else if (x = y){
		printf("%d    %d        %d e %d s�o iguais", x, y, x, y);
	}
	
	
	
	return 0;
	
	
	
}




