#pragma once
#include <iostream>
#include <vector>
#include <iterator>
#include <iostream>
#include <string>
#include <ctime> //time()
#include <cstdlib> //srand()
#include <sstream> //ostringstream
#include "GenTreeNode.h"

template<class T>
class GenTree
{
public:
	GenTree(std::vector<T>& population);
	~GenTree()
	{
		delete root;
	};

	std::string individuResultant();

	unsigned int nombreDeGeneration();
	std::string ancetresDeNiveau(unsigned int niveau);

	GenTreeNode<T>* root;
};

template<class T>
std::ostream& operator << (std::ostream& out, const GenTree<T>& tree)
{
	GenTreeNode<T>* curNode = tree.root;

	out << *curNode << std::endl;

	for (size_t cptLvl = 1; curNode->left != nullptr; cptLvl++, curNode = curNode->left)
	{
		out << std::string((cptLvl*2), ' ') << *curNode->left << std::endl;
		out << std::string((cptLvl*2), ' ') << *curNode->right << std::endl;	
	}

	return out;
}

template<class T>
GenTree<T>::GenTree(std::vector<T>& population)
{
	srand((unsigned)time(0));

	typename std::vector<T>::iterator it = population.begin();
	root = new GenTreeNode<T>(&(*it++)); //Only for the first item

	for (; it != population.end(); it++)
	{
		GenTreeNode<T>* newCell = (*root + *(new GenTreeNode<T>(&(*it))));
		root = newCell;
	}
}

template<class T>
unsigned int GenTree<T>::nombreDeGeneration()
{
	int cptGen;
	GenTreeNode<T>* curNode = root;

	for (cptGen = 1; curNode->left != nullptr; cptGen++)
		curNode = curNode->left;

	return cptGen;
}

template<class T>
std::string GenTree<T>::ancetresDeNiveau(unsigned int niveau)
{
	GenTreeNode<T>* curNode = root;

	for (size_t cptGen = 0; cptGen < niveau; cptGen++)
		curNode = curNode->left;

	std::ostringstream oss;

	if (niveau != 0)
		oss << *curNode->parent->left << "| " << *curNode->parent->right;
	else
		oss << *curNode;

	return oss.str();
}

template<class T>
std::string GenTree<T>::individuResultant()
{
	std::ostringstream ss;
	ss << *root;
	return ss.str();
}
