#include <stdio.h>

int main()
{

	int cod;

	printf("Insira o c�digo do s�mbolo:\t");
	scanf("%d", &cod);

	for(;cod <= 255; ++cod){
		printf("%c --> %d\n", cod, cod);
	}

}
