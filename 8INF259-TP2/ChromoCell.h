#pragma once
#include <iostream>

class ChromoCell
{
public:
	ChromoCell();
	~ChromoCell();

private:
	friend std::istream& operator >> (std::istream& in, ChromoCell& cell);
	//TODO
};
