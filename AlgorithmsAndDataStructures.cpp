#include <iostream>
#include <string>
#include "LinkedList.hpp"
#include "StackStatic.hpp"
#include "StackDynamic.hpp"

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
    StackDynamic<uint16_t> stackDynamicWithInt;
    std::cout << stackDynamicWithInt.peek() << std::endl;
    std::cout << stackDynamicWithInt.isEmpty() << std::endl;
    stackDynamicWithInt.pop();
    stackDynamicWithInt.push(10);
    std::cout << stackDynamicWithInt.peek() << std::endl;
    stackDynamicWithInt.push(12);
    std::cout << stackDynamicWithInt.peek() << std::endl;
    stackDynamicWithInt.pop();
    std::cout << stackDynamicWithInt.peek() << std::endl;
    std::cout << stackDynamicWithInt.isEmpty() << std::endl;

    StackDynamic<std::string> stackDynamicWithString;
    std::cout << stackDynamicWithString.peek() << std::endl;
    std::cout << stackDynamicWithString.isEmpty() << std::endl;
    stackDynamicWithString.pop();
    stackDynamicWithString.push("ok");
    std::cout << stackDynamicWithString.peek() << std::endl;
    stackDynamicWithString.push("oke");
    std::cout << stackDynamicWithString.peek() << std::endl;
    stackDynamicWithString.pop();
    std::cout << stackDynamicWithString.peek() << std::endl;
    std::cout << stackDynamicWithString.isEmpty() << std::endl;
}