#pragma once
#include <string>
#include <unordered_map>
#include <Windows.h>

#ifndef GLOBALS
#define GLOBALS

namespace Globals
{
    static const std::string version("0.1");
    extern HWND gWnd;
    extern HMODULE gModule;
    extern float FPS;
}
#endif