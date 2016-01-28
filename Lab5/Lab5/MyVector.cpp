#include "MyVector.h"

MyVector::MyVector()
{
	pointer = new float[1];

	pointer[0] = 0;

	size = 1;
}

MyVector::MyVector(int size, float intValue)
{

}

MyVector::~MyVector()
{
	size = 0;
	state = 0;
	pointer = nullptr;
}
