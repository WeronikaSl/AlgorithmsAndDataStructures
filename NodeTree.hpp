#pragma once

namespace BST 
{
	template <typename T> struct Node
	{
		T value{ 0 };
		Node* leftChild{ nullptr };
		Node* rightChild{ nullptr };
		Node() = default;
		Node(T value, Node* leftChild, Node* rightChild) 
			: value(value), leftChild(leftChild), rightChild(rightChild)
		{}
	};
} //namespace BST
