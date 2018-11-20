#pragma once
#include<string>
class Item {
public:
    Item();
    Item(std::string itemName, int value, float weight);
    std::string ToString();
    std::string GetItemName();
    void SetItemName(std::string itemName);
    int GetItemValue();
    void SetItemValue(int value);
    float GetItemWeight();
    void SetItemWeight(float weight);
private:
    std::string itemName_;
    int itemValue_;
    float weight_;
};