#pragma once

template <typename T> struct Node
{
	T valueOfThisNode{ 0 };
	Node<T>* locationOfNextNode{ nullptr };
	Node() {};
	Node(T valueOfThisNode, Node<T>* locationOfNextNode) : valueOfThisNode(valueOfThisNode), locationOfNextNode(locationOfNextNode)
	{}
};
