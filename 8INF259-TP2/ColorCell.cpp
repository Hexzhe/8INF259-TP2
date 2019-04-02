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
	in >> cell.r >> cell.g >> cell.b;

	return in;
}

ColorCell* operator + (const ColorCell& a, const ColorCell& b)
{
	ColorCell* c = new ColorCell;

	c->r = (a.r + b.r) / 2;
	c->g = (a.g + b.g) / 2;
	c->b = (a.b + b.b) / 2;

	return c;
}
