#pragma once
#include "DataStructureNode.h"

class DataStructure
{
protected:
    DataStructureNode* ptr_firstNode;
    int length;
public:
    // Constructor
    DataStructure();

    //Methods
    virtual void insertElement(int element) = 0;
    virtual void deleteElement(int element) = 0;
    virtual int getElementAt(int index) = 0;
    virtual bool isElementFound(int element) = 0;
    virtual void sortElements() = 0;
    virtual void printElements() = 0;

    // getters
    int getLength() { return this->length; }
};
