#pragma once
#include "NodeTree.hpp"

using namespace BST;  //why doesnt this work?

class BinarySearchTree
{
private:
	BST::Node* root{ nullptr };

	void insertNewNode(BST::Node** node, int value) //is it correct to create pointer to pointer? temporary solution to fix SIGSEGV, refactor later
	{
		if (*node == nullptr) //will only happen in case of root?
		{
			*node = createNode(value);
		}
		else if ((*node)->value > value) //so we want to go to left subtree
		{
			if ((*node)->leftChild == nullptr)
			{
				(*node)->leftChild = createNode(value);
			}
			else
			{
				BST::Node** ptrToLeftChild = &((*node)->leftChild);
				insertNewNode(ptrToLeftChild, value); //recursive algorithm
			}
		}
		else //value is equal or higher than node->value, so we go to the right subtree
		{
			if ((*node)->rightChild == nullptr)
			{
				(*node)->rightChild = createNode(value);
			}
			else
			{
				BST::Node** ptrToRightChild = &((*node)->rightChild);
				insertNewNode(ptrToRightChild, value);  //recursive algorithm
			}
		}
	}
	BST::Node* createNode(int value) const
	{
		BST::Node* leftChild{ nullptr };
		BST::Node* rightChild{ nullptr };
		BST::Node* newNode = new BST::Node(value, leftChild, rightChild); //is it ok? Client shouldn't be responsible for freeing memory
		return newNode;
	}
public:
	void insert(int value)
	{
		BST::Node** ptrToRoot = &root;
		insertNewNode(ptrToRoot, value);
	}
	~BinarySearchTree() = default; //has to free the memory to prevent memory leak!
};