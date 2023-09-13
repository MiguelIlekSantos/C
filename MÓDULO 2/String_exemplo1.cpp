#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	
	
	char string[50] = "Ola mundo!";
		
	printf("Tamanho de %s = %d caracteres\n", string, strlen(string));	

	printf("Eu vou descrever como isso funciona:\n");
	printf("O char serve para declarar uma váriavel de no máximo um carácter.\nstr é a própria variável\n([50] é a quantidade máxima de caracteres que a variável pode ter.\nOla mundo é a variável\nstrlen é o comando para mostrar a quantidade de caracteres a que é correspondente a variável, no caso (ola mundo!) possui 10 caracteres\n char e string são essencialmente a mesma coisa, o char é sempre utlizado, o char só se torna string quando voce específica uma quantidade de caracteres maior do que 1 ");


}
