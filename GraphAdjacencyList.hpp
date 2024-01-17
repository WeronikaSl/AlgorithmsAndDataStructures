#pragma once
#include <iostream>
#include "LinkedList.hpp"

namespace adjacencyList
{
	class Graph //unweighted, undirected, cyclic graph
	{
	private:
		static constexpr uint16_t amountOfVertexes{ 5 };
		LinkedList<uint16_t> graph[amountOfVertexes]{};
		bool isUserInputCorrect(uint16_t, uint16_t) const;
		void displayError() const;
	public:
		void display() const;
		void connectElements(uint16_t, uint16_t);
		void disconnectElements(uint16_t, uint16_t);
	};
}//namespace adjacencyList
