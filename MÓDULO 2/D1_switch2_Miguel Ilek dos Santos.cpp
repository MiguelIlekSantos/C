#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");

	int x, y, res;
	char simbolo;
	
	printf("Escreva uma breve expressão:\n");
	scanf("%d %c %d",&x, &simbolo, &y);
	
	switch(simbolo)
	{	
		
		case '+': res=x+y;
		break;
		case '-': res=x-y;
		break;
		case 'x':
		case 'X':
		case '*': res=x*y;
		break;
		case ':':
		case '/':
		case '\\': res=x/y;
		break;           
		
		default:
			printf("Operação inválida");break;
	}
	if(res != 0)
	{printf("%d %c %d = %d", x, simbolo, y, res);
	}
	
	
	
}
