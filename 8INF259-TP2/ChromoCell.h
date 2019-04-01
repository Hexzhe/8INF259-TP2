#pragma once
#include <iostream>
#include <string>
#include "ChromoPair.h"

class ChromoCell
{
public:
	ChromoCell() {};
	ChromoCell(ChromoPair* pair1, ChromoPair* pair2, ChromoPair* pair3, ChromoPair* pair4);
	~ChromoCell();

private:

	friend std::istream& operator >> (std::istream& in, ChromoCell& cell);
	friend ChromoCell operator + (const ChromoCell& b);

	ChromoCell* parent;
	ChromoCell* left;
	ChromoCell* right;

	ChromoPair* pair1;
	ChromoPair* pair2;
	ChromoPair* pair3;
	ChromoPair* pair4;
};
