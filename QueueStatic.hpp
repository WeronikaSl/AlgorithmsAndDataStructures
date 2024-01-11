#pragma once
#include <iostream>

//Avaliable methods:
//uint16_t size() const;
//T front() const;
//T end() const;
//void push(T);
//void pop();

template <typename T> class QueueStatic
{
private:
	constexpr static uint16_t maxSize{ 100 };
	uint16_t currentSize{ 0 };
	T tail{ 0 };
	T head{ 0 };
	T queue[maxSize]{};
public:
	uint16_t size() const
	{
		return currentSize;
	}
	T front() const
	{
		return head;
	}
	T end() const
	{
		return tail;
	}
	void push(T value)
	{
		if (currentSize == (maxSize - 1))
		{
			std::cout << "Queue overflow" << std::endl;
		}
		else
		{
			queue[currentSize] = value;
			currentSize++;
		}
		head = queue[0];
		tail = queue[currentSize - 1];
	}
	void pop()
	{
		if (currentSize == 0)
		{
			std::cout << "Queue underflow" << std::endl;
		}
		else
		{

			for (uint16_t i{ 0 }; i < (currentSize - 1); i++) //-1 to prevent accessing queue[100] which doesn't exist
			{
				queue[i] = queue[i + 1];
			}
			queue[currentSize - 1] = T{}; //is using rvalue like this correct? will be empty in every case after pop(), even if queue was full and pop() is used
			currentSize--;
			head = queue[0];
			tail = queue[currentSize - 1];
		}

	}
};