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
	

	std::cout << "Default constructed vector: " << std::endl;
	std::cout << "v1:= ";
	v1.DrawOnConsole();

	int size;
	float defVal;

	std::cout << "Input size of another vector(int): ";
	std::cin >> size;
	std::cout <<  std::endl;

	std::cout << "Input default values for another this vector(float ): ";
	std::cin >> defVal;
	std::cout << std::endl;


	MyVector v2 = MyVector(size, defVal);
	std::cout << "v2:= ";
	v2.DrawOnConsole();


	std::cout << "v1 == v2 :" << ToStringBool(v1 == v2) << std::endl;
	
	std::cout << "v1 > v2 :" << ToStringBool(v1 > v2) << std::endl;
	std::cout << "v1 < v2 :" << ToStringBool(v1 < v2) << std::endl;

    return 0;
}

