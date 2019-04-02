#pragma once
#include <iostream>

class ColorCell
{
public:
	ColorCell() {};
	ColorCell(int r, int g, int b);
	~ColorCell();

	int r;
	int g;
	int b;

private:
	friend std::istream& operator >> (std::istream& in, ColorCell& cell);
	friend ColorCell* operator + (ColorCell& a, ColorCell& b);

	ColorCell* parent;
	ColorCell* left;
	ColorCell* right;
};
