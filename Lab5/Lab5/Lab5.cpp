// Lab5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MyVector.h"
#include <iostream>


char* ToStringBool(bool b)
{
	if (b)
		return "true";
	return "false";

}

int main()
{
	setlocale(LC_ALL, "ru-ru");
	MyVector v1 = MyVector();
	MyVector v2 = MyVector(3, 1.2);

	std::cout << "v1:= ";
	v1.DrawOnConsole();

	std::cout << "v2:= ";
	v2.DrawOnConsole();


	std::cout << "v1 == v2 :" << ToStringBool(v1 == v2) << std::endl;
	
	std::cout << "v1 > v2 :" << ToStringBool(v1 > v2) << std::endl;
	std::cout << "v1 < v2 :" << ToStringBool(v1 < v2) << std::endl;

    return 0;
}

