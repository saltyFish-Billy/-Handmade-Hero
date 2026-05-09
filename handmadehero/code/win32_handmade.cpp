#include <windows.h>

int CALLBACK WinMain(
  HINSTANCE hInstance,
  HINSTANCE hPrevInstance,
  LPSTR lpCmdLine,
  int nShowCmd
)
{
	MessageBoxA(0, "这是手搓大佬", "手搓大佬",
		MB_OK | MB_ICONINFORMATION);
	return(0);
}