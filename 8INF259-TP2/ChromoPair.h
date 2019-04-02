#pragma once
#include <cctype>
#include <ctime>    // For time()
#include <cstdlib>  // For srand() and rand()

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
