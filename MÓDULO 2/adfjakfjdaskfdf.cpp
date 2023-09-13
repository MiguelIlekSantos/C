#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL,"Portuguese");
	
	
    char string[100]; // Defina o tamanho adequado para sua string
    printf("Digite uma string: ");
    scanf("%s", &string);
    
    int i = 0;
    while (string[i] != '\0') {
        int numero = string[i];
        printf("O número ASCII para o caractere '%c' é %d.\n", string[i], numero);
        i++;
    }
    
    return 0;
}
