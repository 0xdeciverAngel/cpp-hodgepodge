/* Replace "dll.h" with the name of your header */

#include <windows.h>
#include <stdio.h>
//DLLIMPORT int add(int x,int y){
//    return x+y;
//}
#define EOF (-1)

#ifdef __cplusplus    // If used by C++ code,
extern "C" {          // we need to export the C interface
#endif
 #include "dll.h"
int __declspec(dllexport)  __stdcall add(int x ,int y) // __cdecl | __stdcall | __fastcall
{
    return x+y;
}
int __declspec(dllexport)  __stdcall p() // __cdecl | __stdcall | __fastcall
{
    return 99;
}
#ifdef __cplusplus
}
#endif
