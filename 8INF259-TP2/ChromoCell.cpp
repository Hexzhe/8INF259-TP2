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

ChromoCell* operator + (ChromoCell& a, ChromoCell& b)
{
	ChromoCell* c = new ChromoCell;
	
	c->pair1 = *a.pair1 + *b.pair1;
	c->pair2 = *a.pair2 + *b.pair2;
	c->pair3 = *a.pair3 + *b.pair3;
	c->pair4 = *a.pair4 + *b.pair4;

	return c;
}

std::ostream& operator << (std::ostream& out, const ChromoCell& cell)
{
	out << cell.pair1->a << cell.pair1->b << " ";
	out << cell.pair2->a << cell.pair2->b << " ";
	out << cell.pair3->a << cell.pair3->b << " ";
	out << cell.pair4->a << cell.pair4->b << " ";
	out << std::flush;

	return out;
}
