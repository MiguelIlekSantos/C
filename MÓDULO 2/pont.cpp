#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *ptr;
	int **pptr;
	
	int valor = 10;
	
	ptr = &valor;
	pptr = &ptr;
	
	printf("Endere�o de ptr = %x", &ptr);
	printf("\nEndere�o de pptr = %x", &pptr);
	
	**pptr = 55;
	
	printf("\nEndere�o de ptr = %d", *ptr);
	printf("\nEndere�o de pptr = %d", **pptr);
	
	
	
	
	
	
}















