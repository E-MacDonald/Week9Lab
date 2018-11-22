#pragma once
#include <iostream>
#include "Armour.h"
#include "Weapon.h"

/*
GameCharacter.h
Desciption: Declaration file for GameCharacter.h
Date: 22/11/2018
Author: Erin MacDonald
Copyright: UUM
*/

enum CharacterState { Idle, Running, Sleeping, Walking, Defending, Attacking, Dead };

class GameCharacter : public Item {

public:

	bool Attack(GameCharacter&character);
	CharacterState GetState();
	void AddFood(int amount);
	void Eat();

	//----------- Getters/Setters
	void SetGcDefend();
	void SetGcWalk();
	void SetGcRun();
	void SetGcSleep();
	void GetGcDefend();
	void GetGcWalk();
	void GetGcRun();
	void GetGcSleep();

private:
	GameCharacter(std::string charcaterName_);
	float health;
	float weightLimit;
	Weapon weapon_;
	Armour armour_;
	int food_;
	CharacterState state_;

};
