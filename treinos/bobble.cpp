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
	
	int vet[20] = {24,56,1,6,8,2,34,75,1,12,72,536,64,9,2625,32,91,82,83,74};
	int bobble1;
	
	for(int um = 0; um < 20; ++um){
		for(int dois = um+1; dois < 20; ++dois){
			if(vet[dois] < vet[um]){
				bobble1 = vet[dois];
				vet[dois] = vet[um];
				vet[um] = bobble1;
			}
		}
	}
		
	
	
	for(int c = 0;c < 20; ++c){
		printf("%d ", vet[c]);
	}

	
}
