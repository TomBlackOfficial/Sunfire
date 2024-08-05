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

#ifdef SF_ENABLE_ASSERTS
	#define SF_ASSERT(x, ...) { if(!(x)) { SF_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define SF_CORE_ASSERT(x, ...) { if(!(x)) { SF_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define SF_ASSERT(x, ...)
	#define SF_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)