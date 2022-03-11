#include "../Headers/LinkedList.h"

LinkedList::LinkedList()
{
    //ctor
}

DataStructureNode* LinkedList::getLastNode()
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
    DataStructureNode* lastNode = getLastNode();
    if(lastNode != nullptr)
        lastNode->getPtr_nodeToRigth = newNode;
    else
        this->ptr_firstNode = newNode;
    this->length++;
}
void LinkedList::deleteElement(int element)
{

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
