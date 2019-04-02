#pragma once
#include <iostream>
#include <string>
#include "ChromoPair.h"
#include <sstream> //ostringstream

class ChromoCell
{
public:
	ChromoCell() {};
	ChromoCell(ChromoPair* pair1, ChromoPair* pair2, ChromoPair* pair3, ChromoPair* pair4);
	~ChromoCell();

	ChromoPair* pair1;
	ChromoPair* pair2;
	ChromoPair* pair3;
	ChromoPair* pair4;

private:

	friend std::istream& operator >> (std::istream& in, ChromoCell& cell);
	friend ChromoCell* operator + (ChromoCell& a, ChromoCell& b);
	friend std::ostream& operator << (std::ostream& out, const ChromoCell& cell);
};
