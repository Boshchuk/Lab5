#pragma once

class MyVector
{
public:
	float * _pointer;

	int _size;

	int _state;
public:
	MyVector();
	MyVector(int size, float initialtValue);

public:
	void DrawOnConsole() const;
	float SummOfElement();

	friend bool operator ==(MyVector &arrInt, MyVector &arrInt2);
	friend bool operator > (MyVector &arrInt, MyVector &arrInt2);
	friend bool operator >= (MyVector &arrInt, MyVector &arrInt2);
	friend bool operator < (MyVector &arrInt, MyVector &arrInt2);
	friend bool operator <= (MyVector &arrInt, MyVector &arrInt2);
public:
	~MyVector();
};
