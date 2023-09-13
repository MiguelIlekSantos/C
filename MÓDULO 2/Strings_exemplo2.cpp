#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");

	char tecla;
	
	printf("Carregue numa tecla:");
	tecla=getch();
	printf("\nCarregou na tecla: %c\n",tecla);
	printf("\nCarregue numa tecla:");
	tecla=getche();
	printf("\nCarregou na tecla: %c\n", tecla);


	return 0;
}
