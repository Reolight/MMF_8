#pragma once
#include "pch.h"

#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllimport)
#endif

// #ifndef MATHLIBRARY_H
// #define MATHLIBRARY_H

extern "C" MATHLIBRARY_API void setX(int value);
extern "C" MATHLIBRARY_API void setY(int value);
extern "C" MATHLIBRARY_API int getX();
extern "C" MATHLIBRARY_API int getY();

extern "C" MATHLIBRARY_API int add();
extern "C" MATHLIBRARY_API int sub();
extern "C" MATHLIBRARY_API int mult();
extern "C" MATHLIBRARY_API int divide();

// #endif // !MATHLIBRARY_H