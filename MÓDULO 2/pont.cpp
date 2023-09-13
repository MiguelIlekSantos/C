#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *ptr;
	int **pptr;
	
	int valor = 10;
	
	ptr = &valor;
	pptr = &ptr;
	
	printf("Endereço de ptr = %x", &ptr);
	printf("\nEndereço de pptr = %x", &pptr);
	
	**pptr = 55;
	
	printf("\nEndereço de ptr = %d", *ptr);
	printf("\nEndereço de pptr = %d", **pptr);
	
	
	
	
	
	
}















