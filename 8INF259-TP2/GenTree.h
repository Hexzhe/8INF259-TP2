#pragma once
#include <iostream>
#include <vector>
#include <iterator>
#include <iostream>
#include <ctime> //time()
#include <cstdlib> //srand()
#include <sstream> //ostringstream
#include "GenTreeNode.h"

template<class T>
class GenTree
{
public:
	GenTree(std::vector<T>& population);

	std::string individuResultant();

	unsigned int nombreDeGeneration();
	std::string ancetresDeNiveau(unsigned int niveau);

private:
	T* root;
};

template<class T>
std::ostream& operator << (std::ostream& out, const GenTree<T>& cell)
{
	//TODO: Output tree content; Navigate the tree and output the values in the stream {out} then return it (probably the hardest part of the project, I haven't thought about how to navigate the tree properly)
	return out;
}

template<class T>
GenTree<T>::GenTree(std::vector<T>& population)
{
	srand((unsigned)time(0));

	typename std::vector<T>::iterator it = population.begin();
	root = &(*it++); //Only for the first item

	for ( ; it != population.end(); it++)
	{
		T* newCell = *root + *it;
		root = newCell;
	}
}

template<class T>
unsigned int GenTree<T>::nombreDeGeneration()
{
	//TODO: Start from the root and navigate to the oldest generation cell by using cell.left (right is going to be the newly added cell to each generation, left is going to lead you to the first cell added)
	return 0;
}

template<class T>
std::string GenTree<T>::ancetresDeNiveau(unsigned int niveau)
{
	//TODO: Navigate from the root to level {niveau - 1} (using cell.left again) and return cell.left and cell.right in a string
	return "";
}

template<class T>
std::string GenTree<T>::individuResultant()
{
	std::ostringstream ss;
	ss << *root;
	return ss.str();
}
