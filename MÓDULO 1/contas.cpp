#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	 
	 int ordenado;
	 int premios;
	 
	printf("Ordenado e premio\n");
	scanf("%d, %d", &ordenado, &premios);
	
	if (ordenado < 0 || ordenado > 15000)
 		printf("Ordenado inv�lido");
 		
 	if (premios < 0 || premios > 5100)
 		printf("Pr�mio inv�lido");
 		
 	else if(ordenado >= 5000 && premios == 1000){
	 	printf("Sal�rio muito bom");
	 }
	 	
	else if(ordenado >= 5000 && premios < 1000){
		printf("Sal�rio bom");	
	}
		
	else if(ordenado < 5000 && premios >= 1000 ){
		printf("Sal�rio satisfaz");	
	}
	else {
		printf("Sal�rio n�o satisfaz");
	}
	
	
}


