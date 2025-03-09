#include <iostream>
#include <Windows.h>
#include "../../resource/tool.h"
using namespace std;

#pragma comment(linker,"\"/manifestdependency:type='win32' \
name='Microsoft.Windows.Common-Controls' version='6.0.0.0' \
processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#pragma comment(linker, "/subsystem:windows")


// wWinMain function: The application will start from here.
int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hInstance);
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);
	UNREFERENCED_PARAMETER(nCmdShow);

	// TODO: Place code here.
	UNREFERENCED_PARAMETER(0);

	if (!IsWindowsVistaOrGreater()) {
		fprintf(stderr, "[FATAL] Your OS version is TOO LOW!\nIf you want to run this "
			"program, please update your OS.\nAt least Windows 7 is required.\n"
			"Exiting...\n");
		return ERROR_NOT_SUPPORTED; // Exit
	}

	CmdLineW cl(GetCommandLineW()); // Command-Line Arguments Parser

	wstring type; cl.getopt(L"type", type);
	// TODO: Add your code here.

	return ERROR_INVALID_PARAMETER;
	return 0;
}

