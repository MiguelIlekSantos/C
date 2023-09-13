#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
#include <conio.h>
#include <cstdlib>
#define PI 3.1416

int main()
{
	
	setlocale(LC_ALL, "Portuguese");
	
	float num[3];
		
	for(int a = 0; a < 3; ++a){
		scanf("%f", &num[a]);
		
	}
	
	printf("%.2f", (num[0]+num[1]+num[2])/3);
	
	
	
}
