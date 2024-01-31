#pragma once
#include <iostream>
#include <list>

namespace adjacencyList
{
	class Graph //unweighted, undirected, cyclic graph
	{
	private:
		static constexpr uint16_t amountOfVertexes{ 5 };
		std::list<uint16_t> graph[amountOfVertexes]{};
		bool isUserInputCorrect(uint16_t, uint16_t) const;
		void displayError() const;
		bool areConneted(uint16_t, uint16_t); //this graph is undirected so if first is connected with second, this means second is connected to first
	public:
		void display() const;
		void connectElements(uint16_t, uint16_t);
		void disconnectElements(uint16_t, uint16_t);
		void bfs(uint16_t);
	};
}//namespace adjacencyList
