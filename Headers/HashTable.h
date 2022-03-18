#pragma once

class HashTable
{
private:
    int* arrayOfElements;
    int length;

    int hashFunction(int key);
public:
    HashTable(int numberOfElements);
    ~HashTable();

    // Methods
    void insertElement(int element);
    void deleteElement(int element);
    int getElement(int key);
    bool isElementFound(int element);
    void printElements();
};
