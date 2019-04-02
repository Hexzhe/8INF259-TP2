#pragma once
template<class T>
class GenTreeNode
{
public:
	GenTreeNode() {};
	~GenTreeNode() 
	{
		//TODO: delete pointers recursively
	};

	GenTreeNode* parent;
	GenTreeNode* left;
	GenTreeNode* right;

	T Data;
};