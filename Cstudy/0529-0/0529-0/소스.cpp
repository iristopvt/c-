#include <Windows.h>


LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lparam);

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow)
{

	const wchar_t CLASS_NAME[] = L"Simple Windows";
	//������ Ŭ���� ���
	WNDCLASS wc = {};

	wc.lpfnWndProc = WindowProc;
	wc.hInstance = hInstance;
	wc.lpszClassName = CLASS_NAME;

	RegisterClass(&wc);


	//������ ����
	//HWND hwnd = CreateWindowEx(
	//0,
	//CLASS_NAME,
	//L"���� ������ ���α׷�",
	//WS_OVERLAPPEDWINDOW,
	//// ������ ���� ��ġ
	//0, 0,
	//640, 480,
	//NULL,
	//    NULL,
	//hInstance,
	//NULL
	//);

	HWND hwnd = CreateWindowEx(0, CLASS_NAME, L"���� ������ ���α׷�", WS_OVERLAPPEDWINDOW,
		0, 0, 640, 480, nullptr, nullptr, hInstance, nullptr);


	if (hwnd == NULL)
	{
		return 0;
	}

	ShowWindow(hwnd, nCmdShow);

	// �޼��� ���� ó��
	MSG msg = {};
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return 0;
}


//�̰����� �۵���
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lparam)
{
	switch (uMsg)
	{
	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	default:
		return DefWindowProc(hwnd, uMsg, wParam, lparam);
	}
}