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
	
	printf("Insira o n�mero de lados do pol�gono:\t");
	scanf("%d", &ladoquantidade);
		
	if (ladoquantidade < 3){
		printf("N�O � UM POL�GONO");
	}
	else if (ladoquantidade > 5){
		printf("POL�GONO N�O IDENTIFICADO");	
	}
	else{
	printf("\nInsira a dimens�o do lado do pol�gono(cm):\t");
	scanf("%f", &ladotamanho);
	if (ladoquantidade == 3){
		printf("\nQual a altura do tri�ngulo ?\t");
		scanf("%f", &alturatri);
		printf("\nTri�ngulo\n�rea = %.2f", (ladotamanho * alturatri) / 2);
	}	
	else if (ladoquantidade == 4){
		printf("\nQuadrado\n�rea = %.2f", ladotamanho * ladotamanho);	
	}
	else if (ladoquantidade == 5){
		
		res = pow(ladotamanho,2) - pow((ladotamanho/2),2);
		apotema = sqrt(res);
		
		printf("\nPent�gono\n�rea = %.2f", ((ladotamanho * apotema) / 2) * 5);		
	}
		
	}
}
