#include "GraphAdjacencyList.hpp"
#include <queue>

bool adjacencyList::Graph::isUserInputCorrect(uint16_t vertex1, uint16_t vertex2) const
{
	return (((vertex1 >= 0) && (vertex1 < amountOfVertexes)) && ((vertex2 >= 0) && (vertex2 < amountOfVertexes)));
}

void adjacencyList::Graph::displayError() const
{
	std::cout << "Error. There are " << amountOfVertexes << " elements in this graph. Choose from numbers 0-" << amountOfVertexes-1 << std::endl;
}

bool adjacencyList::Graph::areConneted(uint16_t vertex1, uint16_t vertex2)
{
	bool result{ false };
	for (uint16_t vertex : graph[vertex1])
	{
		if (vertex == vertex2)
		{
			result = true;
		}
	}
	return result;
}

void adjacencyList::Graph::dfsUtil(uint16_t vertex, bool visited[])
{
	visited[vertex] = true;
	std::cout << vertex << " "; //print the vertex and mark it as visited
	for (uint16_t adjacentVertex : graph[vertex])//look for adjacent vertexes of printed vertex
	{
		if (visited[adjacentVertex] == false)
		{
			dfsUtil(adjacentVertex, visited);
		}
	}
}

void adjacencyList::Graph::display() const
{
	for (int i{ 0 }; i < amountOfVertexes; i++)
	{
		std::cout << "Vertex " << i << " is connexted with vertexes: ";
		for (int vertex : graph[i])
		{
			std::cout << vertex << " ";
		}
		std::cout << std::endl;
	}
}

void adjacencyList::Graph::connectElements(uint16_t vertex1, uint16_t vertex2)
{
	if (isUserInputCorrect(vertex1, vertex2) && !areConneted(vertex1, vertex2))
	{
		graph[vertex1].push_back(vertex2);
		graph[vertex2].push_back(vertex1);
	}
	else
	{
		displayError();
	}
}

void adjacencyList::Graph::disconnectElements(uint16_t vertex1, uint16_t vertex2)
{
	if (isUserInputCorrect(vertex1, vertex2) && areConneted(vertex1, vertex2))
	{
		graph[vertex1].remove(vertex2);
		graph[vertex2].remove(vertex1);
	}
	else
	{
		displayError();
	}
}

void adjacencyList::Graph::bfs(uint16_t vertex) //take starting point where the search starts, can be any vertex
{
	bool visited[amountOfVertexes]{}; //track vetrexes that are already visited, {} inizializes all with false by default
	std::queue<uint16_t> queue{};

	visited[vertex] = true;
	queue.push(vertex);

	while (!queue.empty())
	{
		// Dequeue a vertex from queue and print it
		vertex = queue.front();
		std::cout << vertex << " ";
		queue.pop();

		// Get all adjacent vertexes of the dequeued
		// vertex.
		// If an adjacent has not been visited,
		// then mark it visited and enqueue it
		for (uint16_t adjacentVertex : graph[vertex])
		{
			if (!visited[adjacentVertex]) {
				visited[adjacentVertex] = true;
				queue.push(adjacentVertex);
			}
		}
	}
}

void adjacencyList::Graph::dfsRecursive(uint16_t vertex) //take starting point where the search starts, can be any vertex
{
	bool visited[amountOfVertexes]{}; //will track vetrexes that are already visited, {} inizializes all with false by default
	dfsUtil(vertex, visited);
}
