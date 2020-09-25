#pragma once

#ifdef BSE_PLATFORM_WINDOWS
	#ifdef BSE_BUILD_DLL
		#define BSEngine_API __declspec(dllexport)
	#else
		#define BSEngine_API __declspec(dllimport)
	#endif // BSE_BUILD_DLL
#else
	#error BSEngine only supports Windows!
#endif // BSE_PLATFORM_WINDOWS
