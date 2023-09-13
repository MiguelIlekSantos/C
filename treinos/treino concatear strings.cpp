#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <cstdlib>
#define PI 3.1416

int main()
{
	setlocale(LC_ALL,"Portuguese");	
	
	char var1[11] = {"Curso"};
	
	strcat(var1," de C");
																			//concatenar uma string significa juntar o conteúdo de duas strings
	printf("%s", var1);
	
	printf("\n\n");
	
	char var2[30] = {"Curso"};
	char var3[18] = {" de programação C"};
	
	strncat(var2,var3,15);
	
	printf("%s", var2);
	
	  		
	
	
}
