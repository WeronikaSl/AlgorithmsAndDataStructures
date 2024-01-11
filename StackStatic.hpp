#pragma once
#include <iostream>

//Avaliable methods:
//void pop();
//void push(T value);
//T top() const;
//uint16_t size() const;

template <typename T> class StackStatic
{
private:
	constexpr static uint16_t maxSize{ 100 }; //should it be static?
	uint16_t currentSize{ 0 };
	T stack[maxSize]{};
	bool isEmpty{ 1 }; //has to be empty by default
public:
	void pop()
	{
		if (isEmpty)
		{
			std::cout << "Stack underflow" << std::endl;
		}
		else
		{
			stack[currentSize - 1] = T{}; //is using rvalue like this correct?
			currentSize--;
			if (currentSize == 0)
			{
				isEmpty = true;
			}
		}
	}
	void push(T value)
	{
		if (currentSize == (maxSize - 1))
		{
			std::cout << "Stack overflow" << std::endl;
		}
		else
		{
			stack[currentSize] = value;
			currentSize++;
			if (isEmpty)
			{
				isEmpty = false;
			}
		}

	}
	T top() const
	{
		if (isEmpty)
		{
			return T{}; //is using rvalue like this correct?
		}
		else
		{
			return stack[currentSize - 1];
		}
	}
	uint16_t size() const
	{
		return currentSize;
	}
};