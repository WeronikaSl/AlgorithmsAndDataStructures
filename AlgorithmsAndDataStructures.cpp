#include <iostream>
#include <string>
#include "LinkedList.hpp"
#include "StackStatic.hpp"
#include "StackDynamic.hpp"
#include "QueueStatic.hpp"
#include "QueueDynamic.hpp"

int main()
{
    ////LINKED LIST

    //LinkedList<uint16_t> linkedListWithInts;

    //linkedListWithInts.popFront(); //head is a nullptr, checks if no error
    //linkedListWithInts.displayElements();

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
    //StackStatic<uint16_t> stackStaticWithInt;
    //std::cout << stackStaticWithInt.top() << std::endl;
    //stackStaticWithInt.pop();
    //std::cout << stackStaticWithInt.size() << std::endl;
    //stackStaticWithInt.push(6);
    //std::cout << stackStaticWithInt.top() << std::endl;    
    //std::cout << stackStaticWithInt.size() << std::endl;
    //stackStaticWithInt.push(10);
    //std::cout << stackStaticWithInt.top() << std::endl;
    //std::cout << stackStaticWithInt.size() << std::endl;

    //StackStatic<std::string> stackStaticWithString;
    //stackStaticWithString.push("Hi");
    //std::cout << stackStaticWithString.top() << std::endl;
    //stackStaticWithString.pop();
    //stackStaticWithString.pop();
    //std::cout << stackStaticWithString.top() << std::endl;

    ////STACK DYNAMIC
    //StackDynamic<uint16_t> stackDynamicWithInt;
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

    //StackDynamic<std::string> stackDynamicWithString;
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
    
    //QueueStatic<uint32_t> queueStatic;
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

    //QueueStatic<std::string> queueStaticWithString;
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

    //QueueDynamic<uint32_t> queueDynamicWithInt;
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

    QueueDynamic<std::string> queueDynamicWithString;
    queueDynamicWithString.enqueue("ok");
    queueDynamicWithString.display();
    queueDynamicWithString.enqueue("okeee");
    queueDynamicWithString.enqueue("okeeey");
    queueDynamicWithString.display();
    queueDynamicWithString.dequeue();
    queueDynamicWithString.display();
    queueDynamicWithString.dequeue();
    queueDynamicWithString.dequeue();
    queueDynamicWithString.dequeue();
}