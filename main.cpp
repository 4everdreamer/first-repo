#include <iostream>
#include "Headers/DataStructure.h"
#include "Headers/LinkedList.h"

using namespace std;

int main()
{
    LinkedList* newLinkedList = new LinkedList();
    newLinkedList->insertElement(2);
    newLinkedList->insertElement(1);
    newLinkedList->insertElement(12);
    newLinkedList->insertElement(22);


    string isElementFound = newLinkedList->isElementFound(1) ? "True" : "False";
    cout << isElementFound << endl;
    newLinkedList->deleteElement(1);
/*
    cout << newLinkedList->getElementAt(0) << endl;
    cout << newLinkedList->getElementAt(1) << endl;
    cout << newLinkedList->getElementAt(2) << endl;
    cout << newLinkedList->getElementAt(3) << endl;
*/
    isElementFound = newLinkedList->isElementFound(1) ? "True" : "False";
    cout << isElementFound << endl;


    return 0;
}
