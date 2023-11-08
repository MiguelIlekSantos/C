#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <cstdlib>

int main()
{

	setlocale(LC_ALL, "Portuguese");

	float notas[4][4];

	for (int a = 0; a < 4; ++a){
		printf("\nInsira as notas do aluno %d (entre 0 e 20):\n", a+1);
		for (int b = 0; b < 4; ++b){
			do
			{
				printf("\nNota %d :\t", b+1);
			    scanf("%f", &notas[a][b]);
			}
			while((notas[a][b] < 0) || (notas[a][b] > 20));
		}
	}

	for (int c = 0; c < 4; ++c){
		printf("\n\n\n\t|  Média Aluno %d = %0.2f |\n", c+1, (notas[c][0] + notas[c][1] + notas[c][2] + notas[c][3]) / 4);
	}

}



