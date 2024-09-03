#include <Windows.h> 
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance, LPSTR lpCmdline, int nCmdshow)
{

	const wchar_t CLASS_NAME[] = L"Simple Windows ";

	//1. ������ Ŭ���� ��� 
	WNDCLASS wc = {};

	wc.lpfnWndProc = WindowProc;
	wc.hInstance = hInstance;
	wc.lpszClassName = L"Simple Windows";
	
	RegisterClass(&wc);

	//2. ������ ����  
	HWND hwnd = CreateWindowEx(0, 
		CLASS_NAME, //������ Ŭ���� ����
		L"���� ������ ���α׷�", // ������ Ÿ��Ʋ
		WS_OVERLAPPEDWINDOW,
		0,0, //������ ���� ��ġ
		640, 480, //������ width, height
		NULL,
		NULL,
		hInstance,
		NULL
	);

	if (hwnd == NULL)
	{
		return 0;
	}

	ShowWindow(hwnd,nCmdshow);
	//3. �޼��� ���� ó��

	MSG msg = {};
	while (GetMessage(&msg,NULL,0,0))
	{
		TranslateMessage(&msg); //Ű�����Է¸޼��� ��ȯ
		DispatchMessage(&msg);  // ������ ���ν����� ���� 

	}

	return 0;
}


LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_DESTROY:
			PostQuitMessage(0);
			return 0;

	default:
		return DefWindowProc(hwnd, uMsg, wParam, lParam);
		break;
	}
	 

}

