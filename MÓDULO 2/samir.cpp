#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <cstdlib>
#define PI 3.1416

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int vet1[4] = {1,2,3,4};
	int vet2[4] = {5,6,7,8};
	int op1;
	int op2;
	
	printf("Vet1 : {");
	for(int a = 0; a < 4; ++a){
		printf(" %d ", vet1[a]);
	}
	printf("}");	
	
	printf("\n\n");
	
	printf("Vet2 : {");
	for(int b = 0; b < 4; ++b){
		printf(" %d ", vet2[b]);
	}
	printf("}");
	
	printf("\n\nInsira a posição do vet1 :");
	scanf("%d", &op1);
	printf("\n\n");
	printf("Insira a posição do vet2 :");
	scanf("%d", &op2);

	for(int c = 0;c <= 3; ++c){
		for(int d = 0;d <= 3; ++d){
			if((op1 == c) && (op2 == d)){
				printf("\n%d + %d = %d\n",vet1[c],vet2[d],vet1[c] + vet2[d]);	
			}	
		}
	}
	
		
	
}
