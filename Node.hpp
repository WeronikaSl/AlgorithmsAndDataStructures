#pragma once

struct Node
{
	int valueOfThisNode{ 0 };
	Node* locationOfNextNode{ nullptr };
	Node();
	Node(int, Node*);
};