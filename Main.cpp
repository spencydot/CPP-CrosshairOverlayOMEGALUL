#include <iostream>
#include <Windows.h>
#include <TlHelp32.h>


DWORD WorkLoop() {
	while (1) {
		InvalidateRect(EspHWND, &WBounds, true);
		Sleep(16); //16 ms * 60 fps ~ 1000 ms
	}
}