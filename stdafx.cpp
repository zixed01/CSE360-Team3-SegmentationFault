// stdafx.cpp : source file that includes just the standard includes
// TemplateProject.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"
void MarshalString ( String ^ s, string& os ) 
{
	using namespace Runtime::InteropServices;
	const char* chars = 
	(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

