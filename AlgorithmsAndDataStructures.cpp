#include <iostream>
#include "Node.hpp"
#include "LinkedList.hpp"

int main()
{
    LinkedList linkedList;
    linkedList.pushBack(6);
    linkedList.displayElements();

    std::cout << std::endl << std::endl;

    linkedList.pushFront(999);
    linkedList.displayElements();

    std::cout << std::endl << std::endl;

    linkedList.insert(2, 10);
    linkedList.displayElements();

    std::cout << std::endl << std::endl;

    linkedList.popFront();
    linkedList.displayElements();

    std::cout << std::endl << std::endl;

    linkedList.pushBack(88);
    linkedList.displayElements();

    std::cout << std::endl << std::endl;

    linkedList.removeValue(10);
    linkedList.displayElements();

    std::cout << std::endl << std::endl;

    linkedList.pushBack(54);
    linkedList.displayElements();

    std::cout << std::endl << std::endl;

    linkedList.removeValue(88);
    linkedList.displayElements();

    std::cout << std::endl << std::endl;

    linkedList.pushBack(82);
    linkedList.displayElements();

    std::cout << std::endl << std::endl;

    linkedList.pushBack(91);
    linkedList.displayElements();

    std::cout << std::endl << std::endl;

    linkedList.removeFromPosition(2);
    linkedList.displayElements();

}