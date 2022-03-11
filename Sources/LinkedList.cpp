#include <iostream>
#include "../Headers/LinkedList.h"

LinkedList::LinkedList()
{
    //ctor
}

DataStructureNode* LinkedList::getPtr_elementNode(int element)
{
    DataStructureNode* currentNode = this->ptr_firstNode;
    while(currentNode != nullptr && currentNode->getElement() != element)
        currentNode = currentNode->getPtr_nodeToRigth();
    return currentNode;
}

DataStructureNode* LinkedList::getPtr_lastNode()
{
    int index;
    DataStructureNode* currentNode = this->ptr_firstNode;
    for(index = 0; index < (this->length -1); index++)
        currentNode = currentNode->getPtr_nodeToRigth();
    return currentNode;
}

void LinkedList::insertElement(int element)
{
    DataStructureNode* newNode = new DataStructureNode(nullptr, nullptr, element);
    DataStructureNode* lastNode = getPtr_lastNode();
    if(lastNode != nullptr)
        lastNode->getPtr_nodeToRigth = newNode;
    else
        this->ptr_firstNode = newNode;
    this->length++;
}

void LinkedList::deleteElement(int element)
{
    DataStructureNode* nodeToDelete = getPtr_elementNode(element);
    if(nodeToDelete != nullptr)
    {
        nodeToDelete->getPtr_nodeToLeft()->getPtr_nodeToRigth() = nodeToDelete->getPtr_nodeToRigth();
        nodeToDelete->getPtr_nodeToRigth()->getPtr_nodeToLeft() = nodeToDelete->getPtr_nodeToLeft();
    } else
        std::cout << "The element: " << element << "wasn't found in the linked list" << std::endl;
}

int LinkedList::getElementAt(int index)
{

}

bool LinkedList::isElementFound(int element)
{
    bool isElementFound = false;
    return isElementFound;
}

void LinkedList::sortElements()
{

}

void LinkedList::printElements()
{

}
