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
	printf("O char serve para declarar uma v�riavel de no m�ximo um car�cter.\nstr � a pr�pria vari�vel\n([50] � a quantidade m�xima de caracteres que a vari�vel pode ter.\nOla mundo � a vari�vel\nstrlen � o comando para mostrar a quantidade de caracteres a que � correspondente a vari�vel, no caso (ola mundo!) possui 10 caracteres\n char e string s�o essencialmente a mesma coisa, o char � sempre utlizado, o char s� se torna string quando voce espec�fica uma quantidade de caracteres maior do que 1 ");


}
