#ifndef ISXEQ
#include "MQ2Main.h"

DWORD_PTR gh;
LRESULT CALLBACK proc( int nCode, WPARAM wParam, LPARAM lParam ){return ::CallNextHookEx( (HHOOK)gh, nCode, wParam, lParam );}
typedef DWORD_PTR(__cdecl *FNCB)(DWORD_PTR,HINSTANCE, DWORD_PTR&);
#undef MQ2AUTH
#define    MQ2AUTH(z) EQLIB_API VOID z(DWORD_PTR x){FNCB f=(FNCB)x;f((DWORD_PTR)proc,ghInstance,gh);}
#include "MQ2Auth0.h"
#endif
