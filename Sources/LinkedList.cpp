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
    for(index = 1; index < this->length; index++)
        currentNode = currentNode->getPtr_nodeToRigth();
    return currentNode;
}

void LinkedList::insertElement(int element)
{
    DataStructureNode* lastNode = getPtr_lastNode();
    DataStructureNode* newNode = new DataStructureNode(nullptr, nullptr, element);
    newNode->setPtr_nodeToLeft(lastNode);
    if(lastNode != nullptr)
        lastNode->setPtr_nodeToRigth(newNode);
    else
        this->ptr_firstNode = newNode;
    this->length++;
}

void LinkedList::deleteElement(int element)
{
    DataStructureNode* nodeToDelete = getPtr_elementNode(element);
    if(nodeToDelete != nullptr)
    {
        if(nodeToDelete->getPtr_nodeToLeft())
        {
            nodeToDelete->getPtr_nodeToLeft()->setPtr_nodeToRigth(nodeToDelete->getPtr_nodeToRigth());
        }
        if(nodeToDelete->getPtr_nodeToRigth())
        {
            nodeToDelete->getPtr_nodeToRigth()->setPtr_nodeToLeft(nodeToDelete->getPtr_nodeToLeft());
        }
        this->length--;
    } else
        std::cout << "The element: " << element << " wasn't found in the linked list" << std::endl;
}

int LinkedList::getElementAt(int index)
{
    if(index >= this->length)
    {
        std::cout << "Error at method getElementAt, given index outside of range" << std::endl;
        return 0;
    }
    else
    {
        DataStructureNode* ptr_node = this->ptr_firstNode;
        for(int i = 0; i < index; i++)
            ptr_node = ptr_node->getPtr_nodeToRigth();
        return ptr_node->getElement();
    }
}

bool LinkedList::isElementFound(int element)
{
    return getPtr_elementNode(element) ? true : false;
}

void LinkedList::sortElements()
{

}

void LinkedList::printElements()
{

}
