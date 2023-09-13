#include <stdio.h>
#include <locale.h>

void funcao(){
	printf("********************\n");
}

int main(){
	
	setlocale(LC_ALL ,"Portuguese");
	
	funcao();
	printf("Números entre 1 e 5\n");
	funcao();
	for(int a = 1; a <= 5; ++a){
		printf("%d\n", a);
	}
	funcao();
	
}



 
