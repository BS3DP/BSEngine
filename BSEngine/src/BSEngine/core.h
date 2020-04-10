#pragma once

#ifdef BSEngine_PLATFORM_WINDOWS
	#ifdef BSEngine_BUILD_DLL
		#define BSEngine_API __declspec(dllexport)
	#else
		#define BSEngine_API __declspec(dllimport)
	#endif // BSEngine_BUILD_DLL
#else
	#error BSEngine only supports Windows!
#endif // BSEngine_PLATFORM_WINDOWS
