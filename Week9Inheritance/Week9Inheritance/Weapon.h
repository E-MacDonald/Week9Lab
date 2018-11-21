/*
    Weapon.h
    Desciption: Declaration file for Weapon.cpp
    Date: 20/11/2018
    Author: Jamie Neill
    Copyright: UUM
*/
#pragma once
#include"Item.h"
class Weapon : public Item {
public:
    Weapon();
    Weapon(std::string weaponName, int Value, float weight, int hitStrength, int health);
    int GetWeaponHealth();
    void SetWeaponHealth(int health);
    int GetWeaponHitStrength();
    void SetWeaponHitStrength(int hitStrength);
    std::string ToString();
private:
    int weaponHitStrength_;
    int weaponHealth_;
};