// StaticLib1.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include <memory>
#include <vector>

// TODO: This is an example of a library function
bool fnStaticLib1()
{
	static int a;
	return 0 == a++ % 2;
}

using T = std::vector<uint8_t>;

bool a()
{
	std::unique_ptr<T> d = std::make_unique<T>(100);
	(*d)[100] = 123;
	return 123 == d->back();
}