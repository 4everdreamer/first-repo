#include "../Headers/HashTable.h"


DataItem* HashTable::getPtr_DataItem(int key)
{
    int indexesFetched = 1, index = hashFunction(key);
    while(this->arrayOfElements[index].getKey() != key)
    {
        if(indexesFetched > this->length)
            return nullptr;
        index = (index +1) % length;
        indexesFetched++;
    }
    return &this->arrayOfElements[index];
}


HashTable::HashTable(int numberOfElements) : length(numberOfElements), numberOfElementsInTable(0)
{
    arrayOfElements.resize(numberOfElements);
    for(int i = 0; i < numberOfElements; i++)
        this->arrayOfElements[i].setKey(-1);
}
HashTable::~HashTable() { }

// Methods
int HashTable::hashFunction(int key) { return key % this->length; }

void HashTable::insertElement(int key, std::string element)
{
    if(this->numberOfElementsInTable < this->length)
    {
        int index = hashFunction(key);
        while(this->arrayOfElements[index].getKey() != -1)
            index = (index +1) % length;
        this->arrayOfElements[index] = DataItem(key, element);
        this->numberOfElementsInTable++;
    }
    else
        std::cout << "The hash table is full" << std::endl;
}
void HashTable::deleteElement(int key)
{
    DataItem* ptr_DataItem = getPtr_DataItem(key);
    if(ptr_DataItem != nullptr)
    {
        ptr_DataItem->setKey(-1);
        this->numberOfElementsInTable--;
    }
    else
        std::cout << "The key " << key << " wasn't found" << std::endl;
}
std::string HashTable::getElement(int key)
{
    return getPtr_DataItem(key) != nullptr ? getPtr_DataItem(key)->getItem() : "";
}
bool HashTable::isElementFound(std::string element)
{
    for(int i = 0; i < length; i++)
        if(this->arrayOfElements[i].getItem() == element)
            return true;
    return false;
}
void HashTable::printElements()
{
    for(int i = 0; i < this->length; i++)
        if(this->arrayOfElements[i].getKey() != -1)
            std::cout << "DataItem[" << i << "]: Key: " << this->arrayOfElements[i].getKey() << " item: " << this->arrayOfElements[i].getItem() << std::endl;
}
