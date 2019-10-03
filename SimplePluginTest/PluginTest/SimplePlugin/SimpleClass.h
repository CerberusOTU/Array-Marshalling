#pragma once

#include "PluginSettings.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

struct vec3
{
	float x, y, z;
};

class PLUGIN_API SimpleClass
{
public:
	float px, py, pz;
	int SimpleFunction();
	void SimpleSave(float x, float y, float z);
	vec3 SimpleLoad();
	void MarshallArraySave(vec3 vecArray[], int vecSize);
};

