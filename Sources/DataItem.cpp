#include "../Headers/DataItem.h"

DataItem::DataItem(int key, std::string item) : key(key), item(item) { }

int DataItem::getKey() { return this->key; }
