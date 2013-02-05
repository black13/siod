#include <Windows.h>
#include <stdio.h>
#include "siod.h"

BOOL APIENTRY	DllMain( HANDLE inModule, DWORD inReason, LPVOID inReserved )
{
	(void) inModule;
	(void) inReserved;
	
	switch( inReason )
	{
		case DLL_PROCESS_ATTACH:
		case DLL_THREAD_ATTACH:
		case DLL_THREAD_DETACH:
		case DLL_PROCESS_DETACH:
			break;
	}
    return( TRUE );
}

LISP input(LISP x)
{
    return NULL;
}