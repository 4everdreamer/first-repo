#include "DataStructure.h"
#include "DataStructureNode.h"

class LinkedList : protected DataStructure
{
protected:
    DataStructureNode* getLastNode();
public:
    //Methods
    LinkedList();
    virtual void insertElement(int element) override;
    virtual void deleteElement(int element) override;
    virtual int getElementAt(int index) override;
    virtual bool isElementFound(int element) override;
    virtual void sortElements() override;
    virtual void printElements() override;
};
