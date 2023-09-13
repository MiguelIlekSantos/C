#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <cstdlib>

int main()
{
	setlocale(LC_ALL, "Portuguese");	
	
	int ladoquantidade;
	float ladotamanho;
	float res, apotema, alturatri;
	
	printf("Insira o número de lados do polígono:\t");
	scanf("%d", &ladoquantidade);
		
	if (ladoquantidade < 3){
		printf("NÃO É UM POLÍGONO");
	}
	else if (ladoquantidade > 5){
		printf("POLÍGONO NÃO IDENTIFICADO");	
	}
	else{
	printf("\nInsira a dimensão do lado do polígono(cm):\t");
	scanf("%f", &ladotamanho);
	if (ladoquantidade == 3){
		printf("\nQual a altura do triângulo ?\t");
		scanf("%f", &alturatri);
		printf("\nTriângulo\nÁrea = %.2f", (ladotamanho * alturatri) / 2);
	}	
	else if (ladoquantidade == 4){
		printf("\nQuadrado\nÁrea = %.2f", ladotamanho * ladotamanho);	
	}
	else if (ladoquantidade == 5){
		
		res = pow(ladotamanho,2) - pow((ladotamanho/2),2);
		apotema = sqrt(res);
		
		printf("\nPentágono\nÁrea = %.2f", ((ladotamanho * apotema) / 2) * 5);		
	}
		
	}
}
