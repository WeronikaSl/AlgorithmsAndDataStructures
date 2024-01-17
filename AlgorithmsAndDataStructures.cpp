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

    //BinarySearchTree<uint16_t> binarySearchTreeWithInt;
    //binarySearchTreeWithInt.traverse();
    //binarySearchTreeWithInt.insert(10);
    //binarySearchTreeWithInt.insert(2);
    //binarySearchTreeWithInt.insert(55);
    //binarySearchTreeWithInt.insert(4);
    //binarySearchTreeWithInt.insert(8);
    //binarySearchTreeWithInt.insert(99);
    //binarySearchTreeWithInt.traverse();

    //std::cout << std::endl;

    //BinarySearchTree<std::string> binarySearchTreeWithString;
    //binarySearchTreeWithString.traverse();
    //binarySearchTreeWithString.insert("ok");
    //binarySearchTreeWithString.insert("okee");
    //binarySearchTreeWithString.insert("oke");
    //binarySearchTreeWithString.insert("okeeeeee");
    //binarySearchTreeWithString.insert("o");
    //binarySearchTreeWithString.traverse();

    ////GRAPH ADJACENCY MATRIX

    //adjacencyMatrix::Graph graphAdjacencyMatrix;
    //graphAdjacencyMatrix.display();
    //graphAdjacencyMatrix.connectElements(2,200);
    //graphAdjacencyMatrix.connectElements(1, 20);
    //graphAdjacencyMatrix.connectElements(0, 10);
    //graphAdjacencyMatrix.connectElements(2, 1);
    //graphAdjacencyMatrix.display();

    ////GRAPH ADJACENCY LIST

    adjacencyList::Graph graphAdjacencyList;
    graphAdjacencyList.display();
    std::cout << std::endl;
    graphAdjacencyList.connectElements(1, 4);
    graphAdjacencyList.connectElements(1, 3);
    graphAdjacencyList.connectElements(2, 1);
    graphAdjacencyList.display();
    graphAdjacencyList.connectElements(-1, 4);
    graphAdjacencyList.connectElements(1, 6);
    graphAdjacencyList.disconnectElements(1, 4);
    graphAdjacencyList.display();
    //graphAdjacencyList.disconnectElements(1, 4); //error due to error in linked list, needs fixing, unit tests would be helpful to test corner cases
}