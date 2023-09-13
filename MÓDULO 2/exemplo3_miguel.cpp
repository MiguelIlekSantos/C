#include <stdio.h>
#include <locale.h>

int main()

{
	setlocale(LC_ALL, "Portuguese");
	printf("Vamos ouvir um beep\a\n");
	printf("Esta é a disciplina de\n LPR\n");
	printf("Professor \tLuis\tCorreia\n");
	printf("Imprimo a \\ e as\"\n");
	printf("Olá\x97 10.\x176 l\n");	
	printf("Olá malta do 10º!");


	
}
