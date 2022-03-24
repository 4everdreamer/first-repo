#include "../Headers/HashTable.h"


HashTable::HashTable(int numberOfElements) : length(numberOfElements), numberOfElementsInTable(0)
{
    arrayOfElements.resize(numberOfElements);
    for(int i = 0; i < numberOfElements; i++)
        this->arrayOfElements[i] = NULL;
}
HashTable::~HashTable() { }

// Methods
int HashTable::hashFunction(int key) { return key % this->length; }

void HashTable::insertElement(int key, std::string element)
{
    if(this->numberOfElementsInTable < this->length)
    {
        int index = hashFunction(key);
        while(this->arrayOfElements[index] != NULL)
            index = (index +1) % length;
        this->arrayOfElements[index] = DataItem(key, element);
        this->numberOfElementsInTable++;
    }
    else
        std::cout << "The hash table is full" << std::endl;
}
void HashTable::deleteElement(int key)
{

}
int HashTable::getElement(int key)
{

}
bool HashTable::isElementFound(std::string element)
{

}
void HashTable::printElements()
{

}
