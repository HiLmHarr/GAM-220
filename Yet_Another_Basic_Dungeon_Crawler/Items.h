#pragma once
#include <string>
#include <iostream>
using namespace std;

//I'm probably going to make this a parent class and make 3 child classes that
//heal
//damage enemies
//and give permenant stat buffs
class Items
{
	
public:
	void Use();
	Items(string newName);
	string name;
};

