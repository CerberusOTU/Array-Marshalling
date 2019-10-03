#pragma once
#include "PluginSettings.h"
#include "SimpleClass.h"
#ifdef __cplusplus
extern "C"
{
#endif
	// Put your functions here
	PLUGIN_API int SimpleFunction();
	PLUGIN_API void SimpleSave(float x, float y, float z);
	PLUGIN_API vec3 SimpleLoad();
	PLUGIN_API void MarshallArraySave(vec3 vecArray[], int vecSize);
#ifdef __cplusplus
}
#endif