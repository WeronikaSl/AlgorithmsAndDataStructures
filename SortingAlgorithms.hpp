#pragma once
#include <iostream>
#include <vector>


//Algorithms:
//bubbleSort
//quickSort
//selectionSort
//insertionSort
//mergeSort


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

int partition(int arr[], int first, int last) //helper function for quickSort, will return index of pivot
{
    int pivot = arr[last];
    int newPivotIndex = first;
    for (int i{ first }; i < last; i++)
    {
        if (arr[i] <= pivot)
        {
            std::swap(arr[newPivotIndex], arr[i]);
            newPivotIndex++;
        }
    }
    std::swap(arr[newPivotIndex], arr[last]); //put pivot in its proper position
    return newPivotIndex;
}

void quickSort(int arr[], int first, int last)
{
    if (first < last)
    {
        int pivot = partition(arr, first, last);
        quickSort(arr, first, pivot - 1); //left side
        quickSort(arr, pivot + 1, last); //right side
    }
}

void selectionSort(int arr[], int sizeOfArray)
{
    int indexOfLowestValue{ 0 };
    for (int i{ 0 }; i < sizeOfArray - 1; i++) //-1 because element on last position will already be sorted
    {
        indexOfLowestValue = i;
        for (int k{ i + 1 }; k < sizeOfArray; k++) //i+1 because the left side of array is already sorted
        {
            if (arr[k] < arr[indexOfLowestValue])
            {
                indexOfLowestValue = k;
            }
        }
        if (indexOfLowestValue != i)
        {
            std::swap(arr[i], arr[indexOfLowestValue]);
        }
    }
}

void insertionSort(int arr[], int sizeOfArray)
{
    int currentValue{ 0 };
    int k{ 0 }; //will be used in second loop
    for (int i{ 1 }; i < sizeOfArray; i++)  //starts with 1, because we cant compare item from position 0 to any items on the left of it
    {
        currentValue = arr[i];
        k = i - 1; //starts with previous item
        while (k >= 0 && arr[k] > currentValue)
        {
            arr[k + 1] = arr[k];
            k--;
        }
        arr[k + 1] = currentValue;
    }
}

void merge(int arr[], int low, int middle, int high) //helper function to mergeSort()
{
    int i = low; //starting index for left subarray
    int j = middle + 1; //starting index for right subarray
    int k = low; //starting index for temporary array

    //const int sizeOfTempArr{ high - low + 1 };
    int tempArray[5]{}; //hardcoded, how can I change it..? by passing size?

    while ((i <= middle) && (j <= high))
    {
        if (arr[i] <= arr[j])
        {
            tempArray[k] = arr[i];
            i++;
            k++;
        }
        else
        {
            tempArray[k] = arr[j];
            j++;
            k++;
        }
    }
    while (i <= middle)
    {
        tempArray[k] = arr[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        tempArray[k] = arr[j];
        j++;
        k++;
    }

    for (int s{ low }; s <= high; s++)
    {
        arr[s] = tempArray[s];
    }
}

void mergeSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int middle {(low + high)/2};
        mergeSort(arr, low, middle);
        mergeSort(arr, middle+1, high);
        merge(arr, low, middle, high);
    }
}