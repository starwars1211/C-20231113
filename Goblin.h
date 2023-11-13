#pragma once
#include <vector>
#include "Character.h"

class FGoblin : public FCharacter
{
public:
	FGoblin();
	~FGoblin();

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

};
