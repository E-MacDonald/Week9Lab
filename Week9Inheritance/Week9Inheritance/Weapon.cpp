/*
    Weapon.cpp
    Desciption: Definition file for Weapon.h
    Date: 20/11/2018
    Author: Jamie Neill
    Copyright: UUM
*/
#include"Weapon.h"

Weapon::Weapon() {

}
Weapon::Weapon(std::string weaponName, int Value, float weight, int hitStrength, int health)
    : Item({ weaponName, Value, weight }), weaponHitStrength_{ hitStrength }, weaponHealth_{ health } {

}
int Weapon::GetWeaponHealth() {
    return weaponHealth_;
}
void Weapon::SetWeaponHealth(int health) {
    weaponHealth_ = health;
}
int Weapon::GetWeaponHitStrength() {
    return weaponHitStrength_;
}
void Weapon::SetWeaponHitStrength(int hitStrength) {
    weaponHitStrength_ = hitStrength;
}
std::string Weapon::ToString() {
    std::string weaponInfo{ "Weapon: " + GetItemName() + ", Worth: " + std::to_string(GetItemValue())
        + ",gold coins, Hit stength: " + std::to_string(GetWeaponHitStrength()) 
        + ", Weapon health: " + std::to_string(GetWeaponHealth()) };
    return weaponInfo;
}
