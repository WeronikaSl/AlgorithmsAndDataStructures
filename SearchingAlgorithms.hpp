#pragma once
#include <vector>

template <typename T>
uint16_t linearSearch(const std::vector<T>& vec, T value) //returns index to position of value, if theres no such value, returns index to the element following the last element of the container
{
	uint16_t result{ 0 };
	for (T elem : vec)
	{
		if (elem == value)
		{
			return result;
		}
		result++;
	}
	return result;
}

int searchBinaryIterative(int arr[], int sizeOfArray, int value) //returns index to given value
{
    int low{ 0 };
    int high{ sizeOfArray  -1 };
    int middle{ 0 };

    while (low <= high)
    {
        middle = (low + high) / 2;

        if (arr[middle] == value)
        {
            return middle;
        }
        else if (arr[middle] < value)
        {
            low = middle + 1;
        }
        else
        {
            high = middle - 1;
        }
    }
    return -1; //value not found
}

int searchBinaryRecursion(int arr[], int low, int high, int value) //returns index to given value
{
	if (low <= high)
	{
		int middle = (low + high) / 2;

		if (arr[middle] == value)
		{
			return middle;
		}
		else if (arr[middle] < value)
		{
			int newLow{ middle + 1 };
			searchBinaryRecursion(arr, newLow, high, value);
		}
		else
		{
			int newHigh{ middle - 1 };
			searchBinaryRecursion(arr, low, newHigh, value);
		}
		return -1; //value not found
	}
}