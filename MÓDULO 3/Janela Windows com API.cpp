#include <stdio.h>
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdshow)
{
	printf("hInstace: %d\n", hInstance);    // essa variável possui o endereço da estância da interface gráfica 
	printf("hPrevInstace: %d\n", hPrevInstance);
	printf("lpCmdLine : %s\n", lpCmdLine);    //	escreve algo após o programa
	printf("nCmdshow : %d\n", nCmdshow);     //   define o tamanho da janela da interface gráfica

	MessageBox(NULL, "Olá, mundo!", "Mensagem", MB_OK | MB_ICONINFORMATION); 
	
//	int op = MessageBoxA(NULL, "Texto Dentro", "Titulo", MB_CANCELTRYCONTINUE);
//	printf("op : %d\n", op);
	
	

}






 
