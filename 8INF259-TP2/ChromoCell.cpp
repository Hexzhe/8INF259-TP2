#include "pch.h"
#include "ChromoCell.h"

ChromoCell::ChromoCell(ChromoPair* pair1, ChromoPair* pair2, ChromoPair* pair3, ChromoPair* pair4)
{
	this->pair1 = pair1;
	this->pair2 = pair2;
	this->pair3 = pair3;
	this->pair4 = pair4;
}

ChromoCell::~ChromoCell()
{
	delete pair1;
	delete pair2;
	delete pair3;
	delete pair4;

	//TODO: Delete cell.left and cell.right recursively
}

std::istream& operator >> (std::istream& in, ChromoCell& cell)
{
	//TODO: Generate a new cell (c) from the two cells (a and b) (one random chromosome from a.pair1 and one random chromosome from b.pair1, for each pair), add a and b as child left and right of c, add c as parent of a and b.
	return in;
}
