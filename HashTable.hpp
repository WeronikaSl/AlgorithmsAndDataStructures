#pragma once 
#include <list>
#include <string>
#include <iostream>


class HashTable
{
private:
	constexpr static uint16_t amountOfBuckets{ 10 };
	std::list<std::pair<uint16_t, std::string>> hashTable[amountOfBuckets]; //replace with your own implementation of LinkedList after fixing bugs
	uint16_t hash(uint16_t) const;
public:
	void insert(uint16_t, std::string);
	void print() const;
	std::string find(uint16_t) const;
	void remove(uint16_t);
};