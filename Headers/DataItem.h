#pragma once
#include <string>

class DataItem
{
private:
    int key;
    std::string item;
public:
    DataItem();
    DataItem(int key, std::string item);
    // Getters
    int getKey();
    std::string getItem();

    // Setters
    void setKey(int keyValue);
    void setItem(std::string itemValue);
};
