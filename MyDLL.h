#pragma once
#include <iostream> 

#define DLL_EXPORT
#if defined DLL_EXPORT
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif

extern "C" DLL_API double Add(double a, double b); 
extern "C" DLL_API double Subtract(double a, double b); 	 
extern "C" DLL_API double Multiply(double a, double b); 	 
extern "C" DLL_API double Divide(double a, double b); 
 