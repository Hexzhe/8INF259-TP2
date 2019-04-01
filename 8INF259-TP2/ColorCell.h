#pragma once
#include <iostream>

class ColorCell
{
public:
	ColorCell() {};
	ColorCell(int r, int g, int b);
	~ColorCell();

private:
	friend std::istream& operator >> (std::istream& in, ColorCell& cell);
	friend ColorCell operator + (const ColorCell& b);

	ColorCell* parent;
	ColorCell* left;
	ColorCell* right;

	int r;
	int g;
	int b;
};
