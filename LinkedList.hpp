#pragma once
#include "Node.hpp"
#include <iostream>

//Avaliable methods:
//void pushBack(T);
//void pushFront(T);
//void displayElements() const;
//void insert(uint64_t, T);
//void removeValue(T);
//void popFront();
//void removeFromPosition(uint64_t);
//Node<T>* find(T) const; //needs fixing

using namespace LinearDataStructure;

template <typename T> class LinkedList
{
private:
	Node<T>* head{ nullptr };
public:
	void pushBack(T newNodesValue)
	{
		if (head == nullptr)
		{
			head = new Node<T>(newNodesValue, nullptr);
		}
		else
		{
			Node<T>* lastNode{ head };
			while (lastNode->locationOfNextNode != nullptr)
			{
				lastNode = (lastNode->locationOfNextNode);
			}
			Node<T>* newNode = new Node<T>(newNodesValue, nullptr);
			lastNode->locationOfNextNode = newNode;
		}
	}
	void pushFront(T newNodesValue)
	{
		if (head == nullptr)
		{
			head = new Node<T>(newNodesValue, nullptr);
		}
		else
		{
			Node<T>* newHead = new Node<T>(newNodesValue, head);
			head = newHead;
		}
	}
	void displayElements() const
	{
		if (head != nullptr)
		{
			Node<T>* currentNode{ head };
			while (currentNode != nullptr)
			{
				std::cout << currentNode->valueOfThisNode << " ";
				currentNode = currentNode->locationOfNextNode;
			}
		}
	}
	void insert(uint64_t position, T newNodesValue)
	{
		Node<T>* previousNodesPosition{ head };
		if (position == 0)
		{
			pushFront(newNodesValue);
		}
		else
		{
			for (uint64_t i{ 1 }; i < (position - 1); i++) //couldnt this be a seperate method? check
			{
				previousNodesPosition = previousNodesPosition->locationOfNextNode;
			}
			Node<T>* newNode = new Node<T>(newNodesValue, previousNodesPosition->locationOfNextNode);
			previousNodesPosition->locationOfNextNode = newNode;
		}
	}
	void removeValue(T valueToRemove) //what if theres no such value in the list?
	{
		if (head != nullptr)
		{
			Node<T>* nodeToRemove{ head };
			uint64_t positionOfNodeToRemove{ 0 };

			while (nodeToRemove->valueOfThisNode != valueToRemove)
			{
				nodeToRemove = nodeToRemove->locationOfNextNode;
				positionOfNodeToRemove++;
			}

			Node<T>* nodeBeforeNodeToRemove{ head };

			if (nodeToRemove->valueOfThisNode == head->valueOfThisNode)
			{
				popFront();
			}
			else
			{
				for (uint64_t i{ 1 }; i < (positionOfNodeToRemove - 1); i++) //couldnt this be a seperate method? check
				{
					nodeBeforeNodeToRemove = nodeBeforeNodeToRemove->locationOfNextNode;
				}
				nodeBeforeNodeToRemove->locationOfNextNode = nodeToRemove->locationOfNextNode;
				delete nodeToRemove;
				nodeToRemove = nullptr;
			}
		}
	}
	void popFront()
	{
		if (head != nullptr)
		{
			Node<T>* newHead{ head->locationOfNextNode };
			delete head;
			head = newHead;
		}
	}
	void removeFromPosition(uint64_t position)
	{
		if (head != nullptr)
		{
			Node<T>* previousNodesPosition{ head };
			if (position == 0)
			{
				popFront();
			}
			else
			{
				for (uint64_t i{ 1 }; i < (position - 1); i++) //couldnt this be a seperate method? check
				{
					previousNodesPosition = previousNodesPosition->locationOfNextNode;
				}
				Node<T>* nodeToRemove{ previousNodesPosition->locationOfNextNode };
				previousNodesPosition->locationOfNextNode = nodeToRemove->locationOfNextNode;
				delete nodeToRemove;
				nodeToRemove = nullptr;
			}
		}
	}
	//Node<T>* find(T value) const //FIX THIS METHOD
	//{
	//	Node<T>* result{ head };
	//	if ((head != nullptr) && (head->valueOfThisNode != value))
	//	{
	//		do
	//		{
	//			result = result->locationOfNextNode;

	//		} while ((result->valueOfThisNode != value) && (result-> != nullptr));
	//	}
	//	return result;
	//}
	~LinkedList()
	{
		if (head != nullptr) 
		{
			Node<T>* currentNode{ head };
			Node<T>* nodeToDelete{ nullptr };
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
};