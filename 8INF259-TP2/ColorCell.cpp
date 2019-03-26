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
	//TODO
}

std::istream& operator >> (std::istream& in, ColorCell& cell)
{
	//TODO
	return in;
}
