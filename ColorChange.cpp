#define WIN32_LEAN_AND_MEAN
#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	HWND hWnd = FindWindowA("BurnoutParadiseWindowClass", nullptr); //get window

	DWORD pID = 0; //process id (not sure if i need it yet)

	GetWindowThreadProcessId(hWnd, &pID); //get window name and process id
	
	HANDLE pHandle = OpenProcess(PROCESS_ALL_ACCESS, false, pID); //open the process 

	DWORD address = 0x44EB19D4; //color address

	int x = 3; //color to write
	WriteProcessMemory(pHandle, (LPVOID)address, &x, sizeof(x), nullptr); //write x to address

	std::cout << "Color: " << x << endl; //print the color into the console output
	std::cout << "Process handle: " << pHandle << endl; //print the color into the console output

	return 0; //return 0 :)
}

