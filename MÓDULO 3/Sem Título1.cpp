#include <stdio.h>

int main(){
	
	int vetor[20][20];
	vetor[5][20] = 3;
	
	
	for(int c = 0; c < 10; ++c){
		if(vetor[c][20] == 3){
			printf("ok %d\n", c);
		}
	}
	printf("\n%d", vetor[4][20]);
	printf("\n%d", vetor[5][20]);
}
