#include "SimpleClass.h"
int SimpleClass::SimpleFunction()
{
	return 1;
}
void SimpleClass::SimpleSave(float x, float y, float z) 
{
	ofstream positionFile;
	positionFile.open("position.txt");
	positionFile << x << endl << y << endl << z << endl;
	positionFile.close();
}
vec3 SimpleClass::SimpleLoad() 
{
	vec3 position;
	ifstream positionFile;
	positionFile.open("position.txt");
	positionFile >> position.x >> position.y >> position.z;
	positionFile.close();

	return position;
}

void SimpleClass::MarshallArraySave(vec3 vecArray[], int vecSize)
{

	ofstream arrayFile;
	arrayFile.open("arrayFile.txt");
	
	arrayFile << vecSize << endl;
	for (int i = 0; i < vecSize; i++)
	{
		arrayFile << vecArray[i].x << endl;
		arrayFile << vecArray[i].y << endl;
		arrayFile << vecArray[i].z << endl;
	}
		
	arrayFile.close();
}