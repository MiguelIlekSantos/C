#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <cstdlib>

int main()
{
	setlocale(LC_ALL, "Portuguese");	
	
	
	// versão while
	
	
	/*
	int idade;
	int maior_idade = 0;
	int menor_idade = 200;
	int idade_menor_salario; 
	char sexo_menor_salario;
	char sexo;
	float salario;	
	float menor_salario = 9999;
	float soma_salario;
	int quantmulheres = 0;
	
	int a = 0;
	while(a > -1){
		fflush(stdin);
		printf("Insira sua idade : ");
		scanf("%d", &idade);
		if(idade < 1){
			break;
		}
		if(idade > maior_idade){
			maior_idade = idade;
		}
		if(idade < menor_idade){
			menor_idade = idade;
		}
	
		printf("Insira seu sexo (M) ou (F) : ");
		scanf(" %c", &sexo);
		switch(sexo){
			case 'f':
			case 'F':
				quantmulheres += 1;
				break;	
		}
		printf("Valor do salário :");
		scanf("%f", &salario);
		soma_salario += salario;
		if(menor_salario > salario){
			menor_salario = salario;
			idade_menor_salario = idade;
			sexo_menor_salario = sexo;		
		}
		
		++a;
	}
	
	printf("\n\nA média dos salários é : %.2f", soma_salario/a);
	printf("\nMaior idade : %d\nMenor idade : %d", maior_idade, menor_idade);	
	printf("\nA quantidade de mulheres é : %d", quantmulheres);
	printf("\nIdade e sexo da pessoa com menor salário : %d\t%c", idade_menor_salario, sexo_menor_salario);
	
	
	*/
	
	
	
	// versão do while 
	
	
	
		
	int idade;
	int maior_idade = 0;
	int menor_idade = 200;
	int idade_menor_salario; 
	char sexo_menor_salario;
	char sexo;
	float salario;	
	float menor_salario = 9999;
	float soma_salario;
	int quantmulheres = 0;
	
	int a = 0;
	do{
		fflush(stdin);
		printf("Insira sua idade : ");
		scanf("%d", &idade);
		if(idade < 1){
			break;
		}
		if(idade > maior_idade){
			maior_idade = idade;
		}
		if(idade < menor_idade){
			menor_idade = idade;
		}
	
		printf("Insira seu sexo (M) ou (F) : ");
		scanf(" %c", &sexo);
		switch(sexo){
			case 'f':
			case 'F':
				quantmulheres += 1;
				break;	
		}
		printf("Valor do salário :");
		scanf("%f", &salario);
		soma_salario += salario;
		if(menor_salario > salario){
			menor_salario = salario;
			idade_menor_salario = idade;
			sexo_menor_salario = sexo;		
		}
		
		++a;
	}while(a > -1);
	
	printf("\n\nA média dos salários é : %.2f", soma_salario/a);
	printf("\nMaior idade : %d\nMenor idade : %d", maior_idade, menor_idade);	
	printf("\nA quantidade de mulheres é : %d", quantmulheres);
	printf("\nIdade e sexo da pessoa com menor salário : %d\t%c", idade_menor_salario, sexo_menor_salario);
	
	
	
	
	
	
	
}
		

	
	

