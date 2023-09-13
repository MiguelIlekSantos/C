#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	char sinal;
	
	scanf("%d%c%d", &num1, &sinal, &num2);
	
	if(sinal == '-'){
		printf("%d", num1-num2);
	}else if(sinal == '+'){
		printf("%d", num1+num2);
	}else if(sinal == '*'){
		printf("%d", num1*num2);
	}else if(sinal == '/'){
		printf("%d", num1/num2);
	}


	
}

