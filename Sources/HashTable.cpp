#include "../Headers/HashTable.h"


HashTable::HashTable(int numberOfElements) : arrayOfElements(new int[numberOfElements]), length(numberOfElements) { }
HashTable::~HashTable() { }

// Methods
int HashTable::hashFunction(int key) { return key % this->length; }

void HashTable::insertElement(int element)
{

}
void HashTable::deleteElement(int element)
{

}
int HashTable::getElement(int key)
{

}
bool HashTable::isElementFound(int element)
{

}
void HashTable::printElements()
{

}
