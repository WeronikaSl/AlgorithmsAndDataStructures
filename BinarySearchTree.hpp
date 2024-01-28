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
//BST::Node<T>* remove(T);

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
	BST::Node<T>* findMinValue(BST::Node<T>* node)
	{
		while (node->leftChild != nullptr)
		{
			node = node->leftChild;
		}
		return node;
	}
	BST::Node<T>* removeValue(BST::Node<T>** node, T value)
	{
		if ((*node) == nullptr)
		{
			return (*node);
		}
		else if (value < (*node)->value) //the value to delete is in left subtree
		{
			(*node)->leftChild = removeValue(&((*node)->leftChild), value);
		}
		else if (value > (*node)->value) //the value to delete is in right subtree
		{
			(*node)->rightChild = removeValue(&((*node)->rightChild), value);
		}
		else //the value to delete is found!
		{
			//Case 1 - node to delete has no children
			if ((*node)->leftChild == nullptr && (*node)->rightChild == nullptr)
			{
				delete (*node);
				(*node) = nullptr;
			}
			//Case 2 - node to delete has 1 child
			else if ((*node)->leftChild == nullptr) //right child has to replace node to delete
			{
				BST::Node<T>* tempNode{ (*node) };
				(*node) = (*node)->rightChild;
				delete tempNode;
				tempNode = nullptr;
			}
			else if ((*node)->rightChild == nullptr) //left child has to replace node to delete
			{
				BST::Node<T>* tempNode{ (*node) };
				(*node) = (*node)->leftChild;
				delete tempNode;
				tempNode = nullptr;
			}
			//Case 3 - node to delete has 2 children
			else
			{
				BST::Node<T>* tempNode{ findMinValue((*node)->rightChild) }; //find minimum value in right subtree to replace the root
				(*node)->value = tempNode->value;
				(*node)->rightChild = removeValue(&(*node)->rightChild, tempNode->value);
			}
		}
		return (*node);
	}
	void freeMemory(BST::Node<T>** node) //postOrderTraversal
	{
		if ((*node) != nullptr)
		{
			freeMemory(&((*node)->leftChild));
			freeMemory(&((*node)->rightChild));
			delete (*node);
			(*node) = nullptr;
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
	BST::Node<T>* remove(T value)
	{
		return removeValue(&root, value);
	}
	~BinarySearchTree()
	{
		freeMemory(&root);
	}
};