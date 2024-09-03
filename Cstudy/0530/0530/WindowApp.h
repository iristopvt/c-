#pragma once

#include <Windows.h>

class WindowApp
{
public:
	WindowApp(HINSTANCE hInstance);
	~WindowApp();

	bool Initalize(int x, int y);
	int Run();
	int g_App();
private:
	HINSTANCE hInstance;
	HWND hwnd;
	LPCWSTR classname = L"windowClass : 이해를 못하겠따";

	static LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lparam);
	LRESULT HandleMessage(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lparam);

	bool RegisterWindowClass();
	bool CreateAppWindow(int nCmdshow, int x, int y);

};

