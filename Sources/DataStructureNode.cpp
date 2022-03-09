#include "../Headers/DataStructureNode.h"
#include <iostream>

// Constructors
DataStructureNode::DataStructureNode() : ptr_nodeToLeft(nullptr), ptr_nodeToRigth(nullptr)
{ std::cout << "Base Node created"; }

DataStructureNode::DataStructureNode(DataStructureNode* leftNodeValue, DataStructureNode* rigthNodeValue, int elementValue)
                                    : ptr_nodeToLeft(leftNodeValue), ptr_nodeToRigth(rigthNodeValue), element(elementValue)
{ std::cout << "Complete Node created"; }

// Getters
DataStructureNode* DataStructureNode::getPtr_nodeToLeft() { return this->ptr_nodeToLeft; }
DataStructureNode* DataStructureNode::getPtr_nodeToRigth() { return this->ptr_nodeToRigth; }
int DataStructureNode::getElement() { return this-> element; }

// Setters
void DataStructureNode::setPtr_nodeToLeft(DataStructureNode* newLeftNode) { this->ptr_nodeToLeft = newLeftNode; }
void DataStructureNode::setPtr_nodeToRigth(DataStructureNode* newRigthNode) { this->ptr_nodeToRigth = newRigthNode; }
void DataStructureNode::setElement(int newElement) { this->element = newElement; }
