#pragma once
#include <cctype>

class ChromoPair
{
public:
	ChromoPair() {};
	ChromoPair(const char a, const char b);
	~ChromoPair() {};

	char a;
	char b;
};
