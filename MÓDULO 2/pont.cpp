#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *ptr;
	int **pptr;
	
	int valor = 10;
	
	ptr = &valor;
	pptr = &ptr;
	
	printf("Enderešo de ptr = %x", &ptr);
	printf("\nEnderešo de pptr = %x", &pptr);
	
	**pptr = 55;
	
	printf("\nEnderešo de ptr = %d", *ptr);
	printf("\nEnderešo de pptr = %d", **pptr);
	
	
	
	
	
	
}















