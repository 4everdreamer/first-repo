#include <iostream>
#include "Headers/DataStructure.h"
#include "Headers/LinkedList.h"
#include "Headers/HashTable.h"

using namespace std;

int main()
{
    HashTable* newHashTable = new HashTable(6);
    newHashTable->insertElement(1, "Andres Antonio Castro Beltran");
    newHashTable->insertElement(0, "James Brayan Verdugo Galvez");
    newHashTable->insertElement(20, "Jysus Pol Wolker Alvarez");
    newHashTable->insertElement(108, "Emmanuel Beltran Castro");
    newHashTable->insertElement(98, "Angel Adrian Castro Camacho");
    newHashTable->insertElement(19, "Katia Michelle Castro Castro");

    newHashTable->deleteElement(18);
    newHashTable->deleteElement(19);

    cout << "Found: " << newHashTable->getElement(19) << endl;
    cout << "Found: " << newHashTable->getElement(20) << endl;
    cout << "Found: " << newHashTable->getElement(1) << endl;

    newHashTable->insertElement(19, "Katia Michelle Castro Castro");
    cout << "Found: " << newHashTable->getElement(19) << endl;

    if(newHashTable->isElementFound("Angel Adrian Castro Camacho"))
        cout << "Angel Adrian Castro Camacho is in the hash table" << endl;
    if(!newHashTable->isElementFound("Angel Adrian Camacho Castro"))
        cout << "Angel Adrian Camacho Castro isn't in the hash table" << endl;

    cout << endl << endl;

    newHashTable->printElements();

    return 0;
}
