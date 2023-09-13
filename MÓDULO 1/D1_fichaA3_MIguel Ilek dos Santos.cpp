#include <stdio.h>
#include <locale.h>

int main() 

{

	setlocale(LC_ALL, "Portuguese");
	
	int x;
	
	printf("Qual o número de segundos que deseja converter?\n");
	scanf("%d",& x); 
	printf("-------------------------\n");
	printf("-Horas = %d\t\t-\n", (int) x / 3600);	
	printf("-Minutos = %d\t\t-\n", (int) x%3600/60);	
	printf("-Segundos =%d\t\t-\n", (int) x%60 );
	printf("-------------------------\n");
	
	return 0;

	
}
