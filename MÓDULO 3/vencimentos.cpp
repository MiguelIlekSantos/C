#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	
	int mes[3];
	
	
	printf("INSIRA OS VENCIMENTOS DO PRIMEIRO TRIMESTRE\n");
	
	for(int a = 0; a < 3; ++a){
		scanf("%d", &mes[a]);
	}
	
	if(mes[0] < mes[2] && mes[0] < mes[1]){
		printf("Janeiro");
		
	}else if(mes[1] < mes[2] && mes[1] < mes[0]){
		printf("Fevereiro");
		
	}else{
		printf("Março");
	}
	
	
}




