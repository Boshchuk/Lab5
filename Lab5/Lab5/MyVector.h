#pragma once

class MyVector
{
public:
	float * pointer;

	int size;

	int state;

	MyVector();
	MyVector(int size, float intValue);

	~MyVector();
};
