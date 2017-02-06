// 1.3 Uninitialized Memory.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int main()
{
	// define integer
	int x;

	// print uninitialized integer
	std::cout << x; // Debug mode "Run-Time Check Failure #3 - The variable 'x' is being used without being initialized.

	return 0;
}

