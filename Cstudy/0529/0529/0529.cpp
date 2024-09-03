#include <Windows.h> 
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance, LPSTR lpCmdline, int nCmdshow)
{

	const wchar_t CLASS_NAME[] = L"Simple Windows ";

	//1. 윈도우 클래스 등록 
	WNDCLASS wc = {};

	wc.lpfnWndProc = WindowProc;
	wc.hInstance = hInstance;
	wc.lpszClassName = L"Simple Windows";
	
	RegisterClass(&wc);

	//2. 윈도우 생성  
	HWND hwnd = CreateWindowEx(0, 
		CLASS_NAME, //윈도우 클래스 네임
		L"심플 위도우 프로그램", // 윈도우 타이틀
		WS_OVERLAPPEDWINDOW,
		0,0, //윈도우 생성 위치
		640, 480, //윈도우 width, height
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
	//3. 메세지 루프 처리

	MSG msg = {};
	while (GetMessage(&msg,NULL,0,0))
	{
		TranslateMessage(&msg); //키보드입력메세지 변환
		DispatchMessage(&msg);  // 윈도우 프로시저로 전달 

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

