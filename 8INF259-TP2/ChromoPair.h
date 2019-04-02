#pragma once
#include <cctype> //toupper
#include <cstdlib> // For rand()

class ChromoPair
{
public:
	ChromoPair() {};
	ChromoPair(const char a, const char b);
	~ChromoPair() {};

	char a;
	char b;

private:
	friend ChromoPair* operator + (const ChromoPair& a, const ChromoPair& b);
};
