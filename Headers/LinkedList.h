#include "DataStructure.h"
#include "DataStructureNode.h"

class LinkedList : public DataStructure
{
protected:
    DataStructureNode* getPtr_elementNode(int element);
    DataStructureNode* getPtr_lastNode();
public:
    //Methods
    LinkedList();
    virtual void insertElement(int element) override;
    virtual void deleteElement(int element) override;
    virtual int getElementAt(int index) override;
    virtual bool isElementFound(int element) override;
    virtual void printElements() override;
    virtual void sortElements() override;
};
