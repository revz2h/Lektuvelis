// Lektuvelis.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>


int main()
{
	int a, b, c, a2, b2;

	a = 23;
	b = 55;
	c = 1000;

	a2 = ((a * 60 + b + c) / 60) % 24;
	b2 = (a * 60 + b + c) % 60;

	std::cout << a2 << ':' << b2;

	std::cin >> a;

    return 0;
}
