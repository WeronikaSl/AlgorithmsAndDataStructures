#pragma once
#include "Node.hpp"

//Avaliable methods:
//void enqueue(T);
//void dequeue();
//void display() const;

template <typename T> class QueueDynamic
{
private:
	Node<T>* front{ nullptr };
	Node<T>* rear{ nullptr };
public:
	void enqueue(T value)
	{
		if (front == nullptr)
		{
			front = new Node<T>(value, nullptr);
			rear = front;
		}
		else
		{
			Node<T>* newNode = new Node<T>(value, nullptr);
			rear->locationOfNextNode = newNode;
			rear = newNode;
		}
	}
	void dequeue()
	{
		if (front == nullptr)
		{
			std::cout << "Queue underflow" << std::endl;
		}
		else
		{
			Node<T>* nodeToDelete = front;

			front = front->locationOfNextNode;
			delete nodeToDelete;
			nodeToDelete = nullptr;
		}
	}
	void display() const
	{
		if (front != nullptr)
		{
			Node<T>* currentNode = front;
			while (currentNode != nullptr)
			{
				std::cout << currentNode->valueOfThisNode << std::endl;
				currentNode = currentNode->locationOfNextNode;
			}
		}
	}
	~QueueDynamic()
	{
		if (front != nullptr)
		{
			Node<T>* currentNode = front;
			Node<T>* nodeToDelete{ nullptr };
			while (currentNode->locationOfNextNode != nullptr)
			{
				nodeToDelete = currentNode;
				currentNode = currentNode->locationOfNextNode;
				delete nodeToDelete;
			}
			delete currentNode;
			nodeToDelete = nullptr;
			currentNode = nullptr;
		}
	}
};