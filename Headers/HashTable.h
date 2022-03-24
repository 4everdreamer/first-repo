#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "DataItem.h"

class HashTable
{
private:
    std::vector<DataItem> arrayOfElements;
    int length;
    int numberOfElementsInTable;

    int hashFunction(int key);
public:
    HashTable(int numberOfElements);
    ~HashTable();

    // Methods
    void insertElement(int key, std::string element);
    void deleteElement(int key);
    int getElement(int key);
    bool isElementFound(std::string element);
    void printElements();
};
