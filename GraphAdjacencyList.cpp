#include "GraphAdjacencyList.hpp"

bool adjacencyList::Graph::isUserInputCorrect(uint16_t vertex1, uint16_t vertex2) const
{
	return (((vertex1 >= 0) && (vertex1 < amountOfVertexes)) && ((vertex2 >= 0) && (vertex2 < amountOfVertexes)));
}

void adjacencyList::Graph::displayError() const
{
	std::cout << "Error. There are " << amountOfVertexes << " elements in this graph. Choose from numbers 0-" << amountOfVertexes-1 << std::endl;
}

void adjacencyList::Graph::display() const
{
	for (uint16_t i{ 0 }; i < amountOfVertexes; i++)
	{
		std::cout << "Element " << i << " is connected with elements: ";
		graph[i].displayElements();
		std::cout << std::endl;
	}
}

void adjacencyList::Graph::connectElements(uint16_t vertex1, uint16_t vertex2)
{
	if (isUserInputCorrect(vertex1, vertex2))
	{
		graph[vertex1].pushBack(vertex2);
		graph[vertex2].pushBack(vertex1);
	}
	else
	{
		displayError();
	}
}

void adjacencyList::Graph::disconnectElements(uint16_t vertex1, uint16_t vertex2)
{
	if (isUserInputCorrect(vertex1, vertex2))
	{
		graph[vertex1].removeValue(vertex2);
		graph[vertex2].removeValue(vertex1);
	}
	else
	{
		displayError();
	}
}