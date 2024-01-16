#include <iostream>
#include "Node.hpp"

//Avaliable methods:
//void pop();
//void push(T);
//T peek() const;
//bool isEmpty() const;

using namespace LinearDataStructure;

template <typename T> class StackDynamic
{
private:
	Node<T>* top{ nullptr };
public:
	void pop()
	{
		if (top == nullptr)
		{
			std::cout << "Stack underflow" << std::endl;
		}
		else
		{
			Node<T>* newTop{ top->locationOfNextNode };
			delete top;
			top = newTop;
		}
	}
	void push(T value)
	{
		if (top == nullptr)
		{
			top = new Node<T>(value, nullptr);
		}
		else
		{
			Node<T>* newTop = new Node<T>(value, top);
			top = newTop;
		}
	}
	T peek() const
	{
		if (top == nullptr)
		{
			return T{}; //is using rvalue like this correct?
		}
		else
		{
			return top->valueOfThisNode;
		}
	}
	bool isEmpty() const
	{
		if (top == nullptr)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	~StackDynamic()
	{
		if (top != nullptr)
		{
			Node<T>* currentNode{ top };
			Node<T>* nodeToDelete{ nullptr };
			while (currentNode != nullptr)
			{
				nodeToDelete = currentNode;
				currentNode = currentNode->locationOfNextNode;
				delete nodeToDelete;
			}
			delete currentNode;
			top = nullptr;
			nodeToDelete = nullptr;
			currentNode = nullptr;
		}
	}
};