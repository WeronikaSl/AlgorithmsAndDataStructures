#pragma once

namespace BST 
{
	struct Node
	{
		int value{ 0 };
		Node* leftChild{ nullptr };
		Node* rightChild{ nullptr };
		Node() = default;
		Node(int value, Node* leftChild, Node* rightChild) 
			: value(value), leftChild(leftChild), rightChild(rightChild)
		{}
	};
} //namespace BST
