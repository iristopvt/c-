#include "WindowApp.h"
#include "../Dll1/math.h"


int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow)
{
	WindowApp app(hInstance);

	if (!app.Initalize(30,500))
	{
		return 1;
	}

	return app.Run();
}