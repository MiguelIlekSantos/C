#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");

	char estadocivil;

	printf("Qual o estado Civil:\n");
	scanf("%s",&estadocivil);
	
	switch (estadocivil)
	{
		case 'C':
			printf("Casado");
			break;
		case 'D':
			printf("Divorciado");
			break;	
		case 'V':
			printf("Vi�vo");
			break;
		case 'S':
			printf("Solteiro");		
			break;	
		default:
			printf("Estado Civil Incorrecto");
			break;
	}

}
