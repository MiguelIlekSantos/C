#include <stdio.h>
#include <locale.h>


int decrementByValue(int num){
	num -= 1;
	return num;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int number;
	scanf("%d", &number);
	printf("Valor original : %d\nValor após a função : %d", number, decrementByValue(number));
}


