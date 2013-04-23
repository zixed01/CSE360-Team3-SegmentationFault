// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
#pragma once

// TODO: reference additional headers your program requires here
#include <string>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
//#include "Stats.h"
//#include "Graph.h"

using namespace std;
using namespace System;

void MarshalString ( String ^ s, string& os ) 
{
	using namespace Runtime::InteropServices;
	const char* chars = 
	(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}