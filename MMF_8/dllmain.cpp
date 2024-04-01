// dllmain.cpp : Defines the entry point for the DLL application.

#include "pch.h"
#include <windows.h>
#include "MathLibrary.h"

HANDLE hMapFile;
int* pBuf;
int* x;
int* y;

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH: {
        hMapFile = CreateFileMapping(INVALID_HANDLE_VALUE, NULL, PAGE_READWRITE, 0, sizeof(int) * 2, L"Global\\MMF_8");
        if (hMapFile == NULL) {
            return FALSE;
        }

        pBuf = (int*)MapViewOfFile(hMapFile, FILE_MAP_ALL_ACCESS, 0, 0, sizeof(int) * 2);
        if (pBuf == NULL) {
            CloseHandle(hMapFile);
            return FALSE;
        }

        x = pBuf;
        y = pBuf + 1;
    }
        break;
    case DLL_THREAD_ATTACH: break;
    case DLL_THREAD_DETACH: break;
    case DLL_PROCESS_DETACH:
        UnmapViewOfFile(pBuf);
        CloseHandle(hMapFile);
        break;
    }
    return TRUE;
}

int add() { return *x + *y; }
int sub() { return *x - *y; }
int mult() { return *x * *y; }
int divide() { return (*y != 0) ? *x / *y : 0; }

void setX(const int value) {
    *x = value;
}
void setY(const int value) {
    *y = value;
}

int getX() {
    return *x;
}
int getY() {
    return *y;
}