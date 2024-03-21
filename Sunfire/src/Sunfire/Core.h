#pragma once

#ifdef SF_PLATFORM_WINDOWS
	#ifdef SF_BUILD_DLL
		#define SUNFIRE_API __declspec(dllexport)
	#else
		#define SUNFIRE_API __declspec(dllimport)
	#endif
#else
	#error Sunfire only supports Windows!
#endif

#define BIT(x) (1 << x)