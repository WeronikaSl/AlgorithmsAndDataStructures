#include "LinkedList.hpp"
#include <iostream>

void LinkedList::pushBack(int newNodesValue)
{
	if (head == nullptr)
	{
		head = new Node(newNodesValue, nullptr);
	}
	else
	{
		Node* ptr = head;
		while (ptr->locationOfNextNode != nullptr)
		{
			ptr = (ptr->locationOfNextNode);
		}
		Node* newNode = new Node(newNodesValue, nullptr);
		ptr->locationOfNextNode = newNode;
	}

}

void LinkedList::pushFront(int newNodesValue)
{
	if (head != nullptr)
	{
		Node* ptr1{ head };
		Node* ptr2 = new Node(newNodesValue, ptr1);
		head = ptr2;
	}
}

void LinkedList::displayElements()
{
	if (head != nullptr)
	{
		Node* ptr = head;
		while (ptr != nullptr)
		{
			std::cout << ptr->valueOfThisNode << std::endl;
			ptr = ptr->locationOfNextNode;
		}
	}
}

void LinkedList::insert(int position, int newNodesValue)
{
	if (head != nullptr)
	{

		Node* previousPosition = head;

		if (position == 0)
		{
			pushFront(newNodesValue);
		}
		else
		{
			for (int i{ 1 }; i < (position - 1); i++)
			{
				previousPosition = previousPosition->locationOfNextNode;
			}
			Node* newNode = new Node(newNodesValue, previousPosition->locationOfNextNode);
			previousPosition->locationOfNextNode = newNode;
		}
	}

}

void LinkedList::removeValue(int valueToRemove)
{
	if (head != nullptr)
	{
		Node* nodeToRemove = head;
		int positionOfNodeToRemove{ 0 };

		while (nodeToRemove->valueOfThisNode != valueToRemove)
		{
			nodeToRemove = nodeToRemove->locationOfNextNode;
			positionOfNodeToRemove++;
		}

		Node* previousNode = head;

		if (nodeToRemove->valueOfThisNode == head->valueOfThisNode)
		{
			popFront();
		}
		else
		{
			for (int i{ 1 }; i < (positionOfNodeToRemove - 1); i++)
			{
				previousNode = previousNode->locationOfNextNode;
			}
			previousNode->locationOfNextNode = nodeToRemove->locationOfNextNode;
			delete nodeToRemove;
			nodeToRemove = nullptr;
		}
	}
}

void LinkedList::popFront()
{
	if (head != nullptr)
	{
		Node* ptr1{ head->locationOfNextNode };
		delete head;
		head = ptr1;
	}
}

void LinkedList::removeFromPosition(int position)
{
	if (head != nullptr)
	{
		Node* previousPosition = head;

		if (position == 0)
		{
			popFront();
		}
		else
		{
			for (int i{ 1 }; i < (position - 1); i++)
			{
				previousPosition = previousPosition->locationOfNextNode;
			}
			Node* nodeToRemove = previousPosition->locationOfNextNode;
			previousPosition->locationOfNextNode = nodeToRemove->locationOfNextNode;
			delete nodeToRemove;
			nodeToRemove = nullptr;
		}
	}
}

LinkedList::~LinkedList()
{
	if (head != nullptr)
	{
		Node* currentNode = head;
		Node* nodeToDelete{ nullptr };
		while (currentNode->locationOfNextNode != nullptr)
		{
			nodeToDelete = currentNode;
			currentNode = currentNode->locationOfNextNode;
			delete nodeToDelete;
		}
		delete currentNode;
		currentNode = nullptr;
		nodeToDelete = nullptr;
		head = nullptr;
	}
}
