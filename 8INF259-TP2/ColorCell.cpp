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
	//TODO: Delete cell.left and cell.right recursively (see how we did it in the TP1, maybe this will be handled by the tree itself I don't know)
}

std::istream& operator >> (std::istream& in, ColorCell& cell)
{
	//TODO: Read from the stream {in} and fill the cell's properties (see main.cpp L.25). This is kind of replacing the constructor.
	return in;
}

ColorCell operator + (const ColorCell& b)
{
	//TODO: Generate a new cell (c) from the two cells (a and b) (c.r = (a.r + b.r)/2, etc.), add a and b as child left and right of c, add c as parent of a and b.
	return b;
}
