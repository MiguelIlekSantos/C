#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");

	char taxa;
	float nascimentos, obitos, habitantes;
	

	printf("Voc� deseja calcular a taxa de mortalidade (M) ou natalidade (N) ?\n");
	scanf("%s", &taxa);

	switch(taxa)
	{
		case 'n':
		case 'Natalidade':
			printf("Insira a quantidade de nascimentos na cidade no per�odo de um ano:\n");
			scanf("%f",&nascimentos);
			printf("Insira a quantidade de habitantes residentes na cidade atualmente:\n");
			scanf("%f",&habitantes);
			printf("A taxa de natalidade � igual a %f", (nascimentos*1000)/habitantes);
			printf("\n Rel�gio >>> %s \n", __TIME__);
			break;
		case 'm':
		case 'M':
			printf("Insira a quantidade de �bitos na cidade no per�odo de um ano:\n");
			scanf("%f",&obitos);
			printf("Insira a quantidade de habitantes residentes na cidade atualmente:\n");
			scanf("%f",&habitantes);
			printf("A taxa de mortalidade � igual a %f", (obitos*1000)/habitantes);
			printf("\n Rel�gio >>> %s \n", __TIME__);
			break;
		default:
			printf("Opera��o inv�lida");
			break;
	}
	


	
}


