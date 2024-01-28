#pragma once
#include "NodeTree.hpp"
#include <queue>

//Avaliable methods:
//void insert(T);
//void traverseInOrder() const;
//void traversePreOrder() const;
//void traversePostOrder() const;
//bool find(T) const;
//void traverseBFS() const;

using namespace BST;  //why doesnt this work?

template <typename T> class BinarySearchTree
{
private:
	BST::Node<T>* root{ nullptr };

	void insertNewNode(BST::Node<T>** node, T value) //is it correct to create pointer to pointer? temporary solution to fix SIGSEGV, refactor later
	{
		if (*node == nullptr) //tree is empty
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
				BST::Node<T>** ptrToLeftChild = &((*node)->leftChild);
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
				BST::Node<T>** ptrToRightChild = &((*node)->rightChild);
				insertNewNode(ptrToRightChild, value);  //recursive algorithm
			}
		}
	}
	BST::Node<T>* createNode(T value) const
	{
		BST::Node<T>* leftChild{ nullptr };
		BST::Node<T>* rightChild{ nullptr };
		BST::Node<T>* result = new BST::Node<T>(value, leftChild, rightChild); //is it ok? Client shouldn't be responsible for freeing memory
		return result;
	}
	void inOrderTraversal(BST::Node<T>* node) const 
	{
		if (node != nullptr)
		{
			inOrderTraversal(node->leftChild);
			std::cout << node->value << " ";
			inOrderTraversal(node->rightChild);
		}
	}
	void preOrderTraversal(BST::Node<T>* node) const
	{
		if (node != nullptr)
		{
			std::cout << node->value << " ";
			preOrderTraversal(node->leftChild);
			preOrderTraversal(node->rightChild);
		}
	}
	void postOrderTraversal(BST::Node<T>* node) const
	{
		if (node != nullptr)
		{
			postOrderTraversal(node->leftChild);
			postOrderTraversal(node->rightChild);
			std::cout << node->value << " ";
		}
	}
	bool findNode(BST::Node<T>* node, T value) const
	{
		if (node == nullptr)
		{
			return false;
		}
		else if (node->value == value)
		{
			return true;
		}
		else if (value < node->value)
		{
			return findNode(node->leftChild, value);
		}
		else
		{
			return findNode(node->rightChild, value);
		}
	}
public:
	void insert(T value)
	{
		BST::Node<T>** ptrToRoot = &root;
		insertNewNode(ptrToRoot, value);
	}
	void traverseInOrder() const
	{
		inOrderTraversal(root);
	}
	void traversePreOrder() const
	{
		preOrderTraversal(root);
	}
	void traversePostOrder() const
	{
		postOrderTraversal(root);
	}
	bool find(T value) const
	{
		return findNode(root, value);
	}
	void traverseBFS() const
	{
		if (root != nullptr)
		{
			std::queue<BST::Node<T>*> queue{};
			queue.push(root);
			BST::Node<T>* tempNode{ nullptr };

			while (!queue.empty())
			{
				tempNode = queue.front();
				std::cout << tempNode->value << " ";
				queue.pop();
				if (tempNode->leftChild != nullptr)
				{
					queue.push(tempNode->leftChild);
				}
				if (tempNode->rightChild != nullptr)
				{
					queue.push(tempNode->rightChild);
				}
			}
		}
	}
	~BinarySearchTree() = default; //has to free the memory to prevent memory leak! use post order traversal?
};