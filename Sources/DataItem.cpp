#include "../Headers/DataItem.h"

DataItem::DataItem() {}
DataItem::DataItem(int key, std::string item) : key(key), item(item) { }

// Getters
int DataItem::getKey() { return this->key; }
std::string DataItem::getItem() { return this->item; }

// Setters
void DataItem::setKey(int keyValue) { this->key = keyValue; }
void DataItem::setItem(std::string itemValue) { this->item = itemValue; }
