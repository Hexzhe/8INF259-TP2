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
	//delete this->pair1; //FIXME: There is a weird exception there
	//delete this->pair2;
	//delete this->pair3;
	//delete this->pair4;

	//TODO: Delete cell.left and cell.right recursively (see how we did it in the TP1, maybe this will be handled by the tree itself I don't know)
}

std::istream& operator >> (std::istream& in, ChromoCell& cell)
{
	std::string tmp;

	in >> tmp;
	cell.pair1 = new ChromoPair(tmp.at(0), tmp.at(1));

	in >> tmp;
	cell.pair2 = new ChromoPair(tmp.at(0), tmp.at(1));

	in >> tmp;
	cell.pair3 = new ChromoPair(tmp.at(0), tmp.at(1));

	in >> tmp;
	cell.pair4 = new ChromoPair(tmp.at(0), tmp.at(1));

	return in;
}

ChromoCell operator + (const ChromoCell& b)
{
	//TODO: Generate a new cell (c) from the two cells (a and b) (one random chromosome from a.pair1 and one random chromosome from b.pair1, for each pair), add a and b as child left and right of c, add c as parent of a and b.
	return b;
}
