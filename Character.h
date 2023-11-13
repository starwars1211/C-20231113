#pragma once
#include "Character.h"
#include <vector>

class FCharacter
{
public:
	FCharacter();
	~FCharacter();

	int HP;
	int Item;

	std::vector <int> Items;

	void Move();

	int GetHP()
	{
		return HP;

	}

	void SetHP(int InNewHP)
	{
		if (InNewHP >= 0)
		{
			HP = InNewHP;
		}
	}

protected:
	
};
