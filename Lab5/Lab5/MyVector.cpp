#include "stdafx.h"
#include "MyVector.h"
#include <iostream>

MyVector::MyVector()
{
	_pointer = new float[1];

	_pointer[0] = 0;

	_size = 1;
}

MyVector::MyVector(int size, float initialtValue)
{
	_size = size;
	_pointer = new float[_size];

	for (int i = 0; i < _size; i++)
	{
		_pointer[i] = initialtValue;
	}
	
}

void MyVector::DrawOnConsole() const
{
	for (int i = 0; i < _size; i++)
	{
		std::cout << _pointer[i] << "\t";
	}
	std::cout << std::endl;
}

float MyVector::SummOfElement()
{
	float  res = 0.0;

	for (int i = 0; i < _size; i++)
	{
		res += _pointer[i];
	}

	return res;
}

MyVector::~MyVector()
{
	_size = 0;
	_state = 0;
	delete[] _pointer;
}

bool operator==(MyVector& arrFloat, MyVector& arrFloat2)
{
	if (arrFloat._size != arrFloat2._size) //сравниваем размеры массивов объектов
	{
		std::cout << "В массивах разное количество элементов\n";
		return 0;
	}
	else //проверяем равны ли данныев в ячейках массивов
	{
		for (int i = 0; i < arrFloat._size; i++)
		{
			if (arrFloat._pointer[i] != arrFloat2._pointer[i])
			{
				std::cout << "Значения массивов не равны\n";
				return 0;
			}
		}
	}
	return 1;
}

bool operator>=(MyVector& arrInt, MyVector& arrInt2)
{
	if (arrInt == arrInt2)
	{
		return true;
	}
	return (arrInt > arrInt2);
}

bool operator>(MyVector& arrInt, MyVector& arrInt2)
{
	return arrInt.SummOfElement() > arrInt2.SummOfElement();
}

bool operator<(MyVector& arrInt, MyVector& arrInt2)
{
	return arrInt.SummOfElement() < arrInt2.SummOfElement();
}

bool operator<=(MyVector& arrInt, MyVector& arrInt2)
{
	if (arrInt == arrInt2)
	{
		return true;
	}
	return (arrInt < arrInt2);
}
