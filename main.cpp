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
    newLinkedList->insertElement(22);
    newLinkedList->insertElement(5);

    newLinkedList->printElements();

    newLinkedList->sortElements();

    cout << endl;
    newLinkedList->printElements();

    return 0;
}
