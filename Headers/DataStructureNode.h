#pragma once

class DataStructureNode
{
protected:
    DataStructureNode* ptr_nodeToLeft;
    DataStructureNode* ptr_nodeToRigth;
    int element;
public:
    // Constructors
    DataStructureNode();
    DataStructureNode(DataStructureNode* leftNodeValue, DataStructureNode* rigthNodeValue, int elementValue);

    // Getters
    DataStructureNode* getPtr_nodeToLeft();
    DataStructureNode* getPtr_nodeToRigth();
    int getElement();

    // Setters
    void setPtr_nodeToLeft(DataStructureNode* newLeftNode);
    void setPtr_nodeToRigth(DataStructureNode* newRigthNode);
    void setElement(int newElement);
};
