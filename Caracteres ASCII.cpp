#include <stdio.h>

int main()
{

	int cod;

	printf("Insira o código do símbolo:\t");
	scanf("%d", &cod);

	for(;cod <= 255; ++cod){
		printf("%c --> %d\n", cod, cod);
	}

}
