#include"Item.h"
Item::Item() {

}
Item::Item(std::string itemName, int value, float weight) 
    : itemName_{ itemName }, itemValue_{ value }, weight_{weight} {
}
std::string Item::ToString() {
    std::string itemInfo{};
    itemInfo.append(itemName_ + ", worth " + std::to_string(itemValue_) + " Gold coins");
    return itemInfo;
}
std::string Item::GetItemName() {
    return itemName_;
}
void Item::SetItemName(std::string itemName) {
    itemName_ = itemName;
}
int Item::GetItemValue() {
    return itemValue_;
}
void Item::SetItemValue(int value) {
    itemValue_ = value;
}
float Item::GetItemWeight() {
    return weight_;
}
void Item::SetItemWeight(float weight) {
    weight_ = weight;
}