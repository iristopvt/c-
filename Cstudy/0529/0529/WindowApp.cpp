#include "WindowApp.h"
#include <string>

WindowApp* g_pApp = nullptr;

WindowApp::WindowApp(HINSTANCE hInstance)
{
	this ->hInstance = hInstance;
	hwnd = NULL;
}

WindowApp::~WindowApp()
{
}
bool WindowApp::RegisterWindowClass()
{
	WNDCLASS wc = {};

	wc.lpfnWndProc = WindowProc;
	wc.hInstance = hInstance;
	wc.lpszClassName = classname;

	HBRUSH hBrush = CreateSolidBrush(RGB(0, 0, 250)); //���� ä��� �κ�
	wc.hbrBackground = (HBRUSH)hBrush;

	if (RegisterClass(&wc) == 0)
	{
		return false;
	}

	return true;

}

bool WindowApp::CreateAppWindow(int nCmdshow)
{
	//������ ���� 
	hwnd = CreateWindowEx(0, classname, L"���� ������ ���α׷�", WS_OVERLAPPEDWINDOW,
		0, 0, 640, 480, nullptr, nullptr, hInstance, nullptr);

	if (hwnd == NULL)
	{
		return false;
	}

	ShowWindow(hwnd, nCmdshow);

	return true;

}

bool WindowApp::Initalize()
{
	if (RegisterWindowClass() == false)
	{
		return false;
	}
	CreateAppWindow(SW_SHOW);

	return true;
}

int WindowApp::Run()
{
	// �޼��� ���� ó��
	MSG msg = {};
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return (int)msg.wParam;
}

LRESULT WindowApp::WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lparam)
{
	if (g_pApp)
	{
		return g_pApp->HandleMessage( hwnd,  uMsg,  wParam,  lparam);
	}

	return DefWindowProc(hwnd, uMsg, wParam, lparam);
}

LRESULT WindowApp::HandleMessage(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lparam)
{
	switch (uMsg)
	{
	

	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;
	default:
		return DefWindowProc(hwnd, uMsg, wParam, lparam);
	}

	return DefWindowProc(hwnd, uMsg, wParam, lparam);

}

