#pragma once
template<class T>
class GenTreeNode
{
public:
	GenTreeNode() {};
	GenTreeNode(T* data) 
	{
		this->data = *data;

		this->parent = nullptr;
		this->left = nullptr;
		this->right = nullptr;
	};
	~GenTreeNode() 
	{
		//TODO: delete pointers recursively
	};

	GenTreeNode<T>* parent;
	GenTreeNode<T>* left;
	GenTreeNode<T>* right;

	T data;

private:

	friend std::istream& operator >> (std::istream& in, GenTreeNode<T>& cell)
	{
		in >> cell.data;
		return in;
	};

	friend GenTreeNode<T>* operator + (GenTreeNode<T>& a, GenTreeNode<T>& b)
	{
		GenTreeNode<T>* c = new GenTreeNode<T>(a.data + b.data);

		a.parent = c;
		b.parent = c;

		c->left = &a;
		c->right = &b;
		
		return c;
	};

	friend std::ostream& operator << (std::ostream& out, const GenTreeNode<T>& cell)
	{
		out << cell.data;
		return out;
	};
};