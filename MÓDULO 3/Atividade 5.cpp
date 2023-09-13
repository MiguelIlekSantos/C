#include <stdio.h>
#include <locale.h> 


int main()
{		
	setlocale(LC_ALL ,"Portuguese");
	
	int mulher, homem, imposto_m, imposto_h;
	
	printf("Insira respectivamente o salário da mulher e do homem :\n");
	scanf("%d %d", &mulher, &homem);
		
	imposto_m = (mulher/100) * 10;
	imposto_h = (homem/100) * 15;
	
	printf("%d %d", imposto_m, imposto_h);
	
	
}


