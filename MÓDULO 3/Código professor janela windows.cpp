#include <windows.h>

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpcmdLine, int nCmdShow)
{
	
	// 1. Registrar a classe da janela
	const char CLASS_NAME[] = "Sample Window Class";

	WNDCLASS wc = {0};

	wc.lpfnWndProc = WindowProc;
	wc.hInstance = hInstance;
	wc.lpszClassName = CLASS_NAME;

	RegisterClass(&wc);

	// 2. Criar a janela
	HWND hwnd = CreateWindowEx(

	0, // Estilo de janela estendida
	CLASS_NAME, // Nome da classe da janela
	"Minha Janela", // Texto da janela
	WS_OVERLAPPEDWINDOW,  // Estilo da janela
	CW_USEDEFAULT, // Posi��o X da janela
	CW_USEDEFAULT, // Posi��o Y da janela
	800, // Largura da janela
	600, // Altura da janela
	NULL, // Handle para janela pai
	NULL, // Handle para menu
	hInstance, // Handle para � inst�ncia do aplicativo
	NULL // Dados adicionais
	);

	if (hwnd == NULL)
	{
		return 0;
	}

	// 3. Mostrar a janela
	ShowWindow(hwnd, nCmdShow);

	// 4. Loop de mensagens
	MSG msg = {0};
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}
	}


LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{

		case WM_DESTROY:
			PostQuitMessage(0);		
			return 0;
		case WM_PAINT:
		{
			PAINTSTRUCT ps;
			BeginPaint (hwnd, &ps);
			EndPaint (hwnd, &ps);
		}
		return 0;
	}

	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}















