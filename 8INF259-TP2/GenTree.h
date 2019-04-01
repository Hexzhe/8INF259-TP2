#pragma once
#include <iostream>
#include <vector>
#include <iterator>
#include <iostream>

template<class Cell>
class GenTree
{
public:
	GenTree(const std::vector<Cell>& population);

	std::string individuResultant();

	unsigned int nombreDeGeneration();
	std::string ancetresDeNiveau(unsigned int niveau);

private:
	Cell* root;
};

template<class Cell>
std::ostream& operator << (std::ostream& out, const GenTree<Cell>& cell)
{
	//TODO: Output tree content
	return out;
}

template<class Cell>
GenTree<Cell>::GenTree(const std::vector<Cell>& population)
{
	////TODO: Add first one as root
	//root = population[0]; //Learn vectors retard

	////TODO: Next are added to the current root to make a new cell
	//typename std::vector<ChromoCell>::iterator it;
	//for (it = population.begin()+1; it != population.end(); ++it)
	//	*it >> root; //we,fjghqewkljfghvb
}

template<class Cell>
unsigned int GenTree<Cell>::nombreDeGeneration()
{
	//TODO: Start from the root and navigate to the oldest generation cell by using cell.left (right is going to be the newly added cell to each generation, left is going to lead you to the first cell added)
	return 0;
}

template<class Cell>
std::string GenTree<Cell>::ancetresDeNiveau(unsigned int niveau)
{
	//TODO: Navigate from the root to level {niveau - 1} (using cell.left again) and return cell.left and cell.right in a string
	return "";
}

template<class Cell>
std::string GenTree<Cell>::individuResultant()
{
	//TODO: Return root as string
	return "";
}
