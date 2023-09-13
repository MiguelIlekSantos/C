#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
		
	int numero = 2;
	
	int numeroPar = (numero % 2) == 0;
	
	if(numeroPar){
		printf("Par");
	}else if(!numeroPar){
		printf("Ímpar");
	}
	
	
	
	
	
	
	
	
	
	
}




