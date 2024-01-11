#include <iostream>
#include <string>
#include "LinkedList.hpp"
#include "StackStatic.hpp"

int main()
{
    //LINKED LIST

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

    //STACK STATIC
    StackStatic<uint16_t> stackStaticWithInt;
    stackStaticWithInt.pop();
    std::cout << stackStaticWithInt.size() << std::endl;
    stackStaticWithInt.push(6);
    std::cout << stackStaticWithInt.top() << std::endl;    
    std::cout << stackStaticWithInt.size() << std::endl;
    stackStaticWithInt.push(10);
    std::cout << stackStaticWithInt.top() << std::endl;
    std::cout << stackStaticWithInt.size() << std::endl;

    StackStatic<std::string> stackStaticWithString;
    stackStaticWithString.push("Hi");
    std::cout << stackStaticWithString.top() << std::endl;
    stackStaticWithString.pop();
    stackStaticWithString.pop();



}