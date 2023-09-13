#include <stdio.h>
#include <locale.h>


int swap(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main(){
	setlocale(LC_ALL, "Portuguese");

	int x;
	int y;
	
	scanf("%d %d", &x, &y);
	
	printf("Valores originais: x = %d , y = %d", x,y);
	swap(&x, &y);
	printf("\nValores após a chamada da funçao: x = %d , y = %d", x, y);	
}


