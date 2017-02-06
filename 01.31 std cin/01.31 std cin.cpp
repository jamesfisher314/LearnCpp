// 01.31 std cin.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	std::cout << "Enter a number: ";
	int x;
	std::cin >> x;
	std::cout << "You entered " << x << std::endl;

	//x << std::cin; // gives error "no operator matches these operands

    return 0;
}

