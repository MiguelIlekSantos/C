#include <stdio.h>
#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdshow)
{
	printf("hInstace: %d\n", hInstance);    // essa vari�vel possui o endere�o da est�ncia da interface gr�fica 
	printf("hPrevInstace: %d\n", hPrevInstance);
	printf("lpCmdLine : %s\n", lpCmdLine);    //	escreve algo ap�s o programa
	printf("nCmdshow : %d\n", nCmdshow);     //   define o tamanho da janela da interface gr�fica

	MessageBox(NULL, "Ol�, mundo!", "Mensagem", MB_OK | MB_ICONINFORMATION); 
	
//	int op = MessageBoxA(NULL, "Texto Dentro", "Titulo", MB_CANCELTRYCONTINUE);
//	printf("op : %d\n", op);
	
	

}






 
