#include "pch.h"
#include "ColorCell.h"

ColorCell::ColorCell(int r, int g, int b)
{
	this->r = r;
	this->g = g;
	this->b = b;
}

ColorCell::~ColorCell()
{
	//TODO: Delete cell.left and cell.right recursively
}

std::istream& operator >> (std::istream& in, ColorCell& cell)
{
	//TODO: Generate a new cell (c) from the two cells (a and b) (c.r = (a.r + b.r)/2, etc.), add a and b as child left and right of c, add c as parent of a and b.
	return in;
}
