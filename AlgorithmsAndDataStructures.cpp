#include <iostream>
#include <string>
#include "LinkedList.hpp"

int main()
{
    //LINKED LIST

    LinkedList<uint16_t> linkedListWithInts;

    linkedListWithInts.popFront(); //head is a nullptr, checks if no error
    linkedListWithInts.displayElements();

    linkedListWithInts.pushBack(6);
    linkedListWithInts.displayElements();

    std::cout << std::endl << std::endl;

    linkedListWithInts.pushFront(999);
    linkedListWithInts.displayElements();

    std::cout << std::endl << std::endl;

    LinkedList<std::string> linkedListWithStrings;

    linkedListWithStrings.insert(0, "HI"); //empty list, head is nullptr 
    linkedListWithStrings.displayElements();

    linkedListWithStrings.removeFromPosition(0);
    linkedListWithStrings.displayElements();

    linkedListWithStrings.removeFromPosition(10); //list is empty, checks if no error
    linkedListWithStrings.displayElements();

    std::cout << std::endl << std::endl;

    linkedListWithStrings.pushFront(":D");
    linkedListWithStrings.displayElements();
}