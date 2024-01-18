#include "HashTable.hpp"

uint16_t HashTable::hash(uint16_t key) const
{
    return key%amountOfBuckets;
}

void HashTable::insert(uint16_t key, std::string value)
{
    bool isNotInList{ true };

    for (std::pair<uint16_t, std::string>& pair : hashTable[hash(key)])
    {
        if (std::get<0>(pair) == key)
        {
            pair = std::make_pair(key, value);
            isNotInList = false;
            break;
        }
    }
    if(isNotInList)
    {
        hashTable[hash(key)].push_back(std::make_pair(key, value));
    }
}

void HashTable::print() const
{
    for (uint16_t i{ 0 }; i < 10; i++)
    {
        for (std::pair<uint16_t, std::string> pair : hashTable[i])
        {
            std::cout << std::get<0>(pair) << " " << std::get<1>(pair) << std::endl;
        }
    }
}

std::string HashTable::find(uint16_t key) const
{
    std::string result{};
    for (std::pair<uint16_t, std::string> pair : hashTable[hash(key)])
    {
        if (std::get<0>(pair) == key)
        {
            result = std::get<1>(pair);
            break;
        }
    }
    return result;
}

void HashTable::remove(uint16_t key)
{
    for (std::pair<uint16_t, std::string>& pair : hashTable[hash(key)])
    {
        if (std::get<0>(pair) == key)
        {
            hashTable[hash(key)].remove(pair);
            break;
        }
    }
}
