#include "Wrapper.h"
SimpleClass simpleClass;
int SimpleFunction()
{
	return simpleClass.SimpleFunction();
}
void SimpleSave(float x, float y, float z)
{
	return simpleClass.SimpleSave(x, y, z);
}
vec3 SimpleLoad()
{
	return simpleClass.SimpleLoad();
}

void MarshallArraySave(vec3 vecArray[], int vecSize) {
	return simpleClass.MarshallArraySave(vecArray, vecSize);
}
