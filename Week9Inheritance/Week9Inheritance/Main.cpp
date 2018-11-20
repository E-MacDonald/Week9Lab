#include"Item.h"
#include"Weapon.h"
#include<iostream>
int main() {
    Item sword{ "Geoff's Blade", 100, 1.5f };
    std::cout << sword.ToString() << ". Weight: " << sword.GetItemWeight() << std::endl;
    std::cout << "Setting values \n";
    sword.SetItemName("Bob's Blade");
    sword.SetItemValue(300);
    sword.SetItemWeight(2.0f);
    std::cout << sword.ToString() << ". Weight: " << sword.GetItemWeight() << std::endl;
    std::cout << "Getting Values \n";
    std::cout << "Name: " << sword.GetItemName() << std::endl;
    std::cout << "Value: " << sword.GetItemValue() << std::endl;
    std::cout << "Weight: " << sword.GetItemWeight() << std::endl <<std::endl;
    std::cout << "Testing Weapon \n\n";
    Weapon sword2{ "Geoff's Blade", 100, 1.5f, 10, 100 };
    std::cout << sword2.ToString() << ". Weight: " << sword2.GetItemWeight() << std::endl;
    std::cout << "Setting values \n";
    sword2.SetItemName("Bob's Blade");
    sword2.SetItemValue(300);
    sword2.SetItemWeight(2.0f);
    sword2.SetWeaponHealth(200);
    sword2.SetWeaponHitStrength(15);
    std::cout << sword2.ToString() << ". Weight: " << sword.GetItemWeight() << std::endl;
    std::cout << "Getting Values \n";
    std::cout << "Name: " << sword2.GetItemName() << std::endl;
    std::cout << "Value: " << sword2.GetItemValue() << std::endl;
    std::cout << "Weight: " << sword2.GetItemWeight() << std::endl;
    std::cout << "Hit Strength: " << sword2.GetWeaponHitStrength() << std::endl;
    std::cout << "Health: " << sword2.GetWeaponHealth() << std::endl;

    return 0;
}