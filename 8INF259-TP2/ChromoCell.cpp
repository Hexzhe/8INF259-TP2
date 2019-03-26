#include "pch.h"
#include "ChromoCell.h"

ChromoCell::ChromoCell(ChromoPair pair1, ChromoPair pair2, ChromoPair pair3, ChromoPair pair4)
{
	this->pair1 = pair1;
	this->pair2 = pair2;
	this->pair3 = pair3;
	this->pair4 = pair4;
}

ChromoCell::~ChromoCell()
{
	//TODO
}

std::istream& operator >> (std::istream& in, ChromoCell& cell)
{
	//TODO
	return in;
}
