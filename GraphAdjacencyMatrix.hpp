#pragma once
#include <iostream>

namespace adjacencyMatrix
{
	class Graph //unweighted, undirected, cyclic graph
	{
	private:
		constexpr static uint16_t amountOfVertexes{ 20 };
		uint16_t graph[amountOfVertexes][amountOfVertexes]{}; //initializes the array with zeros
		bool isUserInputCorrect(uint16_t, uint16_t) const;
		void displayError() const;
	public:
		void display() const;
		void connectElements(uint16_t, uint16_t);
		void disconnectElements(uint16_t, uint16_t);
	};
}//namespace adjacencyMatrix
