#pragma once
#include <iostream>


void bubbleSort(int arr[], int size)
{
    for (int i{ 0 }; i < size; i++)
    {
        for (int k{ 0 }; k < size - 1 - i; k++) //-1 because the last element can't be compared to the one right to it because theres none. -1 because with every iteration the highest elements will go to the end
        {
            if (arr[k] > arr[k + 1])
            {
                std::swap(arr[k], arr[k + 1]);
            }
        }
    }
}