#pragma once


#ifdef MATHLIB_EXPORTS
#define MATHLIB_API __declspec(dllexport)
#endif 
#define MATHLIB_API __declspec(dllexport)


extern "C"
{
	MATHLIB_API int Add(int a, int b); // µ¡¼À
	MATHLIB_API int Sub(int a, int b); //»©±â
}