#pragma once
#include "Node.hpp"

class LinkedList
{
public:
	void pushBack(int);
	void pushFront(int);
	void displayElements();
	void insert(int, int);
	void removeValue(int);
	void popFront();
	void removeFromPosition(int);
	~LinkedList();

private:
	Node* head{ nullptr };

};