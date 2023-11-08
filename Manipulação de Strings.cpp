#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nomecompleto[15];

    printf("Introduza o Nome Completo:");
    fgets(nomecompleto, sizeof(nomecompleto), stdin);

    int length = strlen(nomecompleto);
    if (length > 0 && nomecompleto[length - 1] == '\n') {
        nomecompleto[length - 1] = '\0';
    }

    printf("Nome Completo: %s\n", nomecompleto);
    printf("Tamanho do nome: %zu\n", strlen(nomecompleto));

    char tecla;

	printf("Carregue numa tecla:");
	tecla=getch();
	printf("\nCarregou na tecla: %c\n",tecla);
	printf("\nCarregue numa tecla:");
	tecla=getche();
	printf("\nCarregou na tecla: %c\n", tecla);

}
