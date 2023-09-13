#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int correct = 0, choose = 0;


void draw(int draw){
	if(draw == 1){
		for(int b = 0; b < 50; ++b){
		printf("*");
		}
		printf("\n");
		for(int d = 0; d < 2; ++d){
			for(int c = 0; c < 50; ++c){	
				if(c == 0 || c == 49){
					printf("*");
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
	}else{
		for(int d = 0; d < 2; ++d){
			for(int c = 0; c < 50; ++c){
				if(c == 0 || c == 49){
					printf("*");
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
		for(int b = 0; b < 50; ++b){
			printf("*");
		}
		printf("\n\nResposta : ");
	}
}

void quest(int a){
	
	draw(1);
	int answer;
	
	switch(a){
		case 1:
			printf("*   Qual a linguagem que complementa o HTML ?    *\n");
			printf("*   1. CSS                                       *\n");
			printf("*   2. C++                                       *\n");
			printf("*   3. Python                                    *\n");
			draw(2);
			scanf("%d", &answer);
			if(answer == 1){
				correct = correct + 1;
			}
			break;
		case 2:
			printf("*   Qual a linguagem que dá movimento ao HTML ?  *\n");
			printf("*   1. Ruby                                      *\n");
			printf("*   2. Java                                      *\n");
			printf("*   3. Javascript                                *\n");
			draw(2);
			scanf("%d", &answer);
			if(answer == 3){
				correct = correct + 1;
			}
			break;
		case 3:
			printf("* Que linguagem é o ""esqueleto"" das páginas web ?  *\n");
			printf("*   1. C#                                        *\n");
			printf("*   2. HTML                                      *\n");
			printf("*   3. PHP                                       *\n");
			draw(2);
			scanf("%d", &answer);
			if(answer == 2){
				correct = correct + 1;
			}
			break;
		case 4:
			printf("*   Que tag imprime um título no HTML ?          *\n");
			printf("*   1. H1                                        *\n");
			printf("*   2. P                                         *\n");
			printf("*   3. TITLE                                     *\n");
			draw(2);
			scanf("%d", &answer);
			if(answer == 1){
				correct = correct + 1;
			}
			break;
		case 5:
			printf("*   Como se faz um output no PHP ?               *\n");
			printf("*   1. cout                                      *\n");
			printf("*   2. echo                                      *\n");
			printf("*   3. printf                                    *\n");
			draw(2);
			scanf("%d", &answer);
			if(answer == 2){
				correct = correct + 1;
			}
			break;
		case 6:
			printf("*   Como se faz um input no C ?                  *\n");
			printf("*   1. goto                                      *\n");
			printf("*   2. scanf                                     *\n");
			printf("*   3. case                                      *\n");
			draw(2);
			scanf("%d", &answer);
			if(answer == 2){
				correct = correct + 1;
			}
			break;
		case 7:
			printf("*   Quando surgiu a linguagem C ?                *\n");
			printf("*   1. 1969 - 1973                               *\n");
			printf("*   2. 1967 - 1972                               *\n");
			printf("*   3. 1990 - 1992                               *\n");
			draw(2);
			scanf("%d", &answer);
			if(answer == 1){
				correct = correct + 1;
			}
			break;
		case 8:
			printf("*   Em que década surgiu o HTML ?                *\n");
			printf("*   1. 2000                                      *\n");
			printf("*   2. 1980                                      *\n");
			printf("*   3. 1990                                      *\n");
			draw(2);
			scanf("%d", &answer);
			if(answer == 3){
				correct = correct + 1;
			}
			break;
		case 9:
			printf("*   Qual é um banco de dados ?                   *\n");
			printf("*   1. MySQL                                     *\n");
			printf("*   2. PHP                                       *\n");
			printf("*   3. XAMPP                                     *\n");
			draw(2);
			scanf("%d", &answer);
			if(answer == 1){
				correct = correct + 1;
			}
			break;
		case 10:
			printf("*   Como rodar um elemento HTML ?                *\n");
			printf("*   1. Deg                                       *\n");
			printf("*   2. Transform                                 *\n");
			printf("*   3. Revert                                    *\n");
			draw(2);
			scanf("%d", &answer);
			if(answer == 2){
				correct = correct + 1;
			}
			break;
		case 11:
			printf("*   Qual é melhor VS CODE ou Subline Text?       *\n");
			printf("*   1. VS CODE                                   *\n");
			printf("*   2. Subline Text                              *\n");
			draw(2);
			scanf("%d", &answer);
			if(answer == 1){
				choose = 1;
			}else{
				choose = 2;
			}
			break;
		case 12:
			printf("*   Como definir a largura no CSS ?              *\n");
			printf("*   1. Height                                    *\n");
			printf("*   2. Border                                    *\n");
			printf("*   3. Width                                     *\n");
			draw(2);
			scanf("%d", &answer);
			if(answer == 3){
				correct = correct + 1;
			}
			break;
		case 13:
			printf("*   Qual a principal tag no HTML ?               *\n");
			printf("*   1. H1                                        *\n");
			printf("*   2. DIV                                       *\n");
			printf("*   3. BODY                                      *\n");
			draw(2);
			scanf("%d", &answer);
			if(answer == 3){
				correct = correct + 1;
			}
			break;
		case 14:
			printf("*   Como linkar um arquivo CSS externo ?         *\n");
			printf("*   1. <link rel=""stylesheet"" href=""style.css"">      *\n");
			printf("*   2. <link a=""sheet"" href=""style.css"">             *\n");
			printf("*   3. <link rel=""stylesheet"" a=""style.css"">         *\n");
			draw(2);
			scanf("%d", &answer);
			if(answer == 1){
				correct = correct + 1;
			}
			break;
		case 15:
			printf("*   Que linguagem é descendente de C ?           *\n");
			printf("*   1. B                                         *\n");
			printf("*   2. C++                                       *\n");
			printf("*   3. Java                                      *\n");
			draw(2);
			scanf("%d", &answer);
			if(answer == 2){
				correct = correct + 1;
			}
			break;
		case 16:
			printf("*   Qual destes realiza output no Javascript ?   *\n");
			printf("*   1. alert                                     *\n");
			printf("*   2. write                                     *\n");
			printf("*   3. printf                                    *\n");
			draw(2);
			scanf("%d", &answer);
			if(answer == 1){
				correct = correct + 1;
			}
			break;
		case 17:
			printf("*   Como fazer output no C++ ?                   *\n");
			printf("*   1. print                                     *\n");
			printf("*   2. cout                                      *\n");
			printf("*   3. out                                       *\n");
			draw(2);
			scanf("%d", &answer);
			if(answer == 2){
				correct = correct + 1;
			}
			break;
		case 18:
			printf("*   Como fazer input no C++ ?                   *\n");
			printf("*   1. int                                       *\n");
			printf("*   2. scan                                      *\n");
			printf("*   3. cin                                       *\n");
			draw(2); 
			scanf("%d", &answer);
			if(answer == 3){
				correct = correct + 1;
			}
			break;
		case 19:
			printf("*   Qual a extensão de um documento Javacript ?  *\n");
			printf("*   1. .js                                       *\n");
			printf("*   2. .jasr                                     *\n");
			printf("*   3. .sj                                       *\n");
			draw(2);
			scanf("%d", &answer);
			if(answer == 1){
				correct = correct + 1;
			}
			break;
		case 20:
			printf("*   Qual a extensão de um documento php ?        *\n");
			printf("*   1. .p                                        *\n");
			printf("*   2. .hhp                                      *\n");
			printf("*   3. .php                                      *\n");
			draw(2);
			scanf("%d", &answer);
			if(answer == 3){
				correct = correct + 1;
			}
			break;
			
	}
	
	
	
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	
	for(int a = 1; a <= 20; ++a){
		quest(a);
		system("cls");
	}
	
	printf("\n\n Você acertou %d questões !\n", correct);
	if(choose == 1){
		printf("Também gosto do VS CODE !");
	}else{
		printf("Subline Text é muito bom !");
	}
	
	
	
}
	

