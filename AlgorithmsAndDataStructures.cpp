#include <iostream>
#include <string>
#include "LinkedList.hpp"
#include "StackStatic.hpp"
#include "StackDynamic.hpp"
#include "QueueStatic.hpp"
#include "QueueDynamic.hpp"
#include "BinarySearchTree.hpp"
#include "GraphAdjacencyMatrix.hpp"
#include "GraphAdjacencyList.hpp"
#include <unordered_map>
#include "HashFunction.hpp"
#include "HashTable.hpp"
#include "SearchingAlgorithms.hpp"
#include "SortingAlgorithms.hpp"

int main()
{
    ////LINKED LIST

    //LinkedList<uint16_t> linkedListWithInts;

    //linkedListWithInts.popFront(); //head is a nullptr, checks if no error
    //linkedListWithInts.displayElements();

    //linkedListWithInts.pushBack(22);
    //linkedListWithInts.pushBack(6);
    //linkedListWithInts.displayElements();

    //std::cout << std::endl << std::endl;

    //linkedListWithInts.pushFront(999);
    //linkedListWithInts.displayElements();

    //std::cout << std::endl << std::endl;

    //LinkedList<std::string> linkedListWithStrings;

    //linkedListWithStrings.insert(0, "HI"); //empty list, head is nullptr 
    //linkedListWithStrings.displayElements();

    //linkedListWithStrings.removeFromPosition(0);
    //linkedListWithStrings.displayElements();

    //linkedListWithStrings.removeFromPosition(10); //list is empty, checks if no error
    //linkedListWithStrings.displayElements();

    //std::cout << std::endl << std::endl;

    //linkedListWithStrings.pushFront(":D");
    //linkedListWithStrings.displayElements();

    ////STACK STATIC
    //staticDS::Stack<uint16_t> stackStaticWithInt;
    //std::cout << stackStaticWithInt.top() << std::endl;
    //stackStaticWithInt.pop();
    //std::cout << stackStaticWithInt.size() << std::endl;
    //stackStaticWithInt.push(6);
    //std::cout << stackStaticWithInt.top() << std::endl;    
    //std::cout << stackStaticWithInt.size() << std::endl;
    //stackStaticWithInt.push(10);
    //std::cout << stackStaticWithInt.top() << std::endl;
    //std::cout << stackStaticWithInt.size() << std::endl;

    //staticDS::Stack<std::string> stackStaticWithString;
    //stackStaticWithString.push("Hi");
    //std::cout << stackStaticWithString.top() << std::endl;
    //stackStaticWithString.pop();
    //stackStaticWithString.pop();
    //std::cout << stackStaticWithString.top() << std::endl;

    ////STACK DYNAMIC
    //dynamicDS::Stack<uint16_t> stackDynamicWithInt;
    //std::cout << stackDynamicWithInt.peek() << std::endl;
    //std::cout << stackDynamicWithInt.isEmpty() << std::endl;
    //stackDynamicWithInt.pop();
    //stackDynamicWithInt.push(10);
    //std::cout << stackDynamicWithInt.peek() << std::endl;
    //stackDynamicWithInt.push(12);
    //std::cout << stackDynamicWithInt.peek() << std::endl;
    //stackDynamicWithInt.pop();
    //std::cout << stackDynamicWithInt.peek() << std::endl;
    //std::cout << stackDynamicWithInt.isEmpty() << std::endl;

    //dynamicDS::Stack<std::string> stackDynamicWithString;
    //std::cout << stackDynamicWithString.peek() << std::endl;
    //std::cout << stackDynamicWithString.isEmpty() << std::endl;
    //stackDynamicWithString.pop();
    //stackDynamicWithString.push("ok");
    //std::cout << stackDynamicWithString.peek() << std::endl;
    //stackDynamicWithString.push("oke");
    //std::cout << stackDynamicWithString.peek() << std::endl;
    //stackDynamicWithString.pop();
    //std::cout << stackDynamicWithString.peek() << std::endl;
    //std::cout << stackDynamicWithString.isEmpty() << std::endl;

    ////QUEUE STATIC
    
    //staticDS::Queue<uint32_t> queueStatic;
    //std::cout << queueStatic.size() << std::endl;
    //std::cout << queueStatic.front() << std::endl;
    //std::cout << queueStatic.end() << std::endl;
    //queueStatic.push(10);
    //queueStatic.push(22);
    //std::cout << queueStatic.size() << std::endl;
    //std::cout << queueStatic.front() << std::endl;
    //std::cout << queueStatic.end() << std::endl;
    //queueStatic.pop();
    //std::cout << queueStatic.size() << std::endl;
    //std::cout << queueStatic.front() << std::endl;
    //std::cout << queueStatic.end() << std::endl;

    //staticDS::Queue<std::string> queueStaticWithString;
    //std::cout << queueStaticWithString.size() << std::endl;
    //std::cout << queueStaticWithString.front() << std::endl;
    //std::cout << queueStaticWithString.end() << std::endl;
    //queueStaticWithString.push("ok");
    //std::cout << queueStaticWithString.size() << std::endl;
    //std::cout << queueStaticWithString.front() << std::endl;
    //std::cout << queueStaticWithString.end() << std::endl;
    //queueStaticWithString.push("okay");
    //std::cout << queueStaticWithString.size() << std::endl;
    //std::cout << queueStaticWithString.front() << std::endl;
    //std::cout << queueStaticWithString.end() << std::endl;
    //queueStaticWithString.pop();
    //std::cout << queueStaticWithString.size() << std::endl;
    //std::cout << queueStaticWithString.front() << std::endl;
    //std::cout << queueStaticWithString.end() << std::endl;
    //queueStaticWithString.pop();
    //queueStaticWithString.pop();

    //// QUEUE DYNAMIC

    //dynamicDS::Queue<uint32_t> queueDynamicWithInt;
    //queueDynamicWithInt.display();
    //queueDynamicWithInt.enqueue(10);
    //queueDynamicWithInt.enqueue(55);
    //queueDynamicWithInt.enqueue(78);
    //queueDynamicWithInt.display();
    //queueDynamicWithInt.dequeue();
    //queueDynamicWithInt.display();
    //queueDynamicWithInt.dequeue();
    //queueDynamicWithInt.dequeue();
    //queueDynamicWithInt.dequeue();

    //dynamicDS::Queue<std::string> queueDynamicWithString;
    //queueDynamicWithString.enqueue("ok");
    //queueDynamicWithString.display();
    //queueDynamicWithString.enqueue("okeee");
    //queueDynamicWithString.enqueue("okeeey");
    //queueDynamicWithString.display();
    //queueDynamicWithString.dequeue();
    //queueDynamicWithString.display();
    //queueDynamicWithString.dequeue();
    //queueDynamicWithString.dequeue();
    //queueDynamicWithString.dequeue();

    ////BINARY SEARCH TREE

    BinarySearchTree<uint16_t> binarySearchTreeWithInt;
    binarySearchTreeWithInt.traverseBFS();
    binarySearchTreeWithInt.traverseInOrder();
    binarySearchTreeWithInt.insert(10);
    binarySearchTreeWithInt.insert(2);
    binarySearchTreeWithInt.insert(55);
    binarySearchTreeWithInt.insert(4);
    binarySearchTreeWithInt.insert(8);
    binarySearchTreeWithInt.insert(99);
    binarySearchTreeWithInt.traverseInOrder();
    std::cout << std::endl;
    binarySearchTreeWithInt.traversePreOrder();
    std::cout << std::endl;
    binarySearchTreeWithInt.traversePostOrder();
    std::cout << std::endl;
    std::cout << binarySearchTreeWithInt.find(55) << std::endl;
    std::cout << binarySearchTreeWithInt.find(3) << std::endl;
    binarySearchTreeWithInt.traverseBFS();
    std::cout << std::endl << "New root: " << binarySearchTreeWithInt.remove(10)->value << std::endl;

    std::cout << std::endl;

    BinarySearchTree<std::string> binarySearchTreeWithString;
    binarySearchTreeWithString.traverseBFS();
    binarySearchTreeWithString.traverseInOrder();
    binarySearchTreeWithString.insert("ok");
    binarySearchTreeWithString.insert("okee");
    binarySearchTreeWithString.insert("oke");
    binarySearchTreeWithString.insert("okeeeeee");
    binarySearchTreeWithString.insert("o");
    binarySearchTreeWithString.traverseInOrder();
    std::cout << std::endl;
    binarySearchTreeWithString.traversePreOrder();
    std::cout << std::endl;
    binarySearchTreeWithString.traversePostOrder();
    std::cout << std::endl;
    std::cout << binarySearchTreeWithString.find("ok") << std::endl;
    std::cout << binarySearchTreeWithString.find("oki") << std::endl;
    binarySearchTreeWithString.traverseBFS();
    std::cout << std::endl << "New root: " << binarySearchTreeWithString.remove("ok")->value << std::endl;
    std::cout << std::endl << "New root: " << binarySearchTreeWithString.remove("oke")->value << std::endl;
    std::cout << std::endl << "New root: " << binarySearchTreeWithString.remove("okee")->value << std::endl;
    std::cout << std::endl << "New root: " << binarySearchTreeWithString.remove("okeeeeee")->value << std::endl;
    std::cout << std::endl << "New root: " << binarySearchTreeWithString.remove("o") << std::endl; //nullptr, tree is now empty



    ////GRAPH ADJACENCY MATRIX

    //adjacencyMatrix::Graph graphAdjacencyMatrix;
    //graphAdjacencyMatrix.display();
    //graphAdjacencyMatrix.connectElements(2,200);
    //graphAdjacencyMatrix.connectElements(1, 20);
    //graphAdjacencyMatrix.connectElements(0, 10);
    //graphAdjacencyMatrix.connectElements(2, 1);
    //graphAdjacencyMatrix.display();

    ////GRAPH ADJACENCY LIST

    //adjacencyList::Graph graphAdjacencyList;
    //graphAdjacencyList.display();
    //std::cout << std::endl;
    //graphAdjacencyList.connectElements(1, 4);
    //graphAdjacencyList.connectElements(1, 3);
    //graphAdjacencyList.connectElements(2, 1);
    //graphAdjacencyList.display();
    //graphAdjacencyList.connectElements(-1, 4);
    //graphAdjacencyList.connectElements(1, 6);
    //graphAdjacencyList.disconnectElements(1, 4);
    //graphAdjacencyList.display();
    //graphAdjacencyList.disconnectElements(1, 4); //error due to error in linked list, needs fixing, unit tests would be helpful to test corner cases

    ////UNORDERED MAP
    //SomeData data;
    //data.dataString = "hi";
    //std::unordered_map<SomeData, bool> unorderedMap;
    
    
    ////HASH TABLE
    //HashTable hashTable;
    //hashTable.insert(99, "Michael Scott");
    //hashTable.insert(54, "Dwight Schrute");
    //hashTable.insert(18, "Pam Beesly");
    //hashTable.insert(46, "Jim Halpert");
    //hashTable.insert(46, "Jim Halpert");
    //hashTable.insert(18, "Ryan Howard");
    //hashTable.print();
    //std::cout << std::endl;
    //std::cout << "Find employee with ID 46: " << hashTable.find(46) << std::endl;
    //std::cout << "Find employee with ID 18: " << hashTable.find(18) << std::endl;
    //std::cout << std::endl;
    //hashTable.remove(54);
    //hashTable.remove(54);
    //hashTable.print();

    ////LINEAR SEARCH
    //std::vector<uint16_t> vec{ 5,7,3,4,1,6,2,8 };
    //std::cout << linearSearch<uint16_t>(vec, 3) << std::endl;
    //std::cout << linearSearch<uint16_t>(vec, 9) << std::endl;

    ////BINARY SEARCH ITERATIVE
    //constexpr int sizeOfArray{ 6 };
    //int arr[sizeOfArray]{ 1,3,5,7,9,11 }; //has to be sorted to use binary search!
    //std::cout << searchBinaryIterative(arr, sizeOfArray, 5) << std::endl;
    //std::cout << searchBinaryIterative(arr, sizeOfArray, 10) << std::endl;

    ////BINARY SEARCH RECURSION
    //constexpr int sizeOfArray{ 6 };
    //int arr[sizeOfArray]{ 1,3,5,7,9,11 }; //has to be sorted to use binary search!
    //int low{ 0 };
    //int high{ sizeOfArray - 1 };
    //std::cout << searchBinaryRecursion(arr, low, high, 5) << std::endl;
    //std::cout << searchBinaryRecursion(arr, low, high, 10) << std::endl;
    
    ////BUBBLE SORT
    //constexpr int sizeOfArray{ 5 };
    //int arr[sizeOfArray]{ 3,5,1,4,2 };
    //bubbleSort(arr, sizeOfArray);
    //for (int i{ 0 }; i < sizeOfArray; i++)
    //{
	   // std::cout << arr[i] << " ";
    //}

    ////QUICK SORT
    //constexpr int sizeOfArray{ 5 };
    //int arr[sizeOfArray]{ 3,5,1,4,2 };
    //int first = 0; 
    //int last = sizeOfArray-1;

    //quickSort(arr, first, last);

    //for (int i{ 0 }; i < sizeOfArray; i++)
    //{
    //    std::cout << arr[i] << " ";
    //}
    
    ////SELECTION SORT
    //constexpr int sizeOfArray{ 5 };
    //int arr[sizeOfArray]{ 3,5,1,4,2 };

    //selectionSort(arr, sizeOfArray);
    //for (int i{ 0 }; i < sizeOfArray; i++)
    //{
    //    std::cout << arr[i] << " ";
    //}
    
    ////INSERTION SORT
    //constexpr int sizeOfArray{ 5 };
    //int arr[sizeOfArray]{ 3,5,1,4,2 };

    //insertionSort(arr, sizeOfArray);

    //for (int i{ 0 }; i < sizeOfArray; i++)
    //{
    //    std::cout << arr[i] << " ";
    //}
    
    ////MERGE SORT
    //constexpr int sizeOfArray{ 5 };
    //int arr[sizeOfArray]{ 3,5,1,4,2 };
    //int low{ 0 };
    //int high{ sizeOfArray - 1 };

    //mergeSort(arr, low, high);

    //for (int i{ 0 }; i < sizeOfArray; i++)
    //{
    //    std::cout << arr[i] << " ";
    //}
    
}