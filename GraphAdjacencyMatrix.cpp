#include "GraphAdjacencyMatrix.hpp"

bool adjacencyMatrix::Graph::isUserInputCorrect(uint16_t row, uint16_t column) const
{
	return(((row <= amountOfVertexes) && (row > 0)) && ((column <= amountOfVertexes) && (column > 0)));
}

void adjacencyMatrix::Graph::displayError() const
{
	std::cout << "Error. There are " << amountOfVertexes << " elements in this graph. Choose from numbers 1-" << amountOfVertexes << std::endl;
}

void adjacencyMatrix::Graph::display() const
{
	for (uint16_t i{ 0 }; i < amountOfVertexes; i++)
	{
		for (uint16_t k{ 0 }; k < amountOfVertexes; k++)
		{
			std::cout << graph[i][k];
		}
		std::cout << std::endl;
	}
}

void adjacencyMatrix::Graph::connectElements(uint16_t row, uint16_t column)
{
	if (isUserInputCorrect(row, column))
	{
		graph[row - 1][column - 1] = 1; //in a weighted graph we'd have to put weigth of edge/arc here instead of 1
		graph[column - 1][row - 1] = 1; //in a weighted graph we'd have to put weigth of edge/arc here instead of 1
	}
	else
	{
		displayError();
	}
}

void adjacencyMatrix::Graph::disconnectElements(uint16_t row, uint16_t column)
{
	if (isUserInputCorrect(row, column))
	{
		graph[row - 1][column - 1] = 0;
		graph[column - 1][row - 1] = 0;
	}
	else
	{
		displayError();
	}
}
