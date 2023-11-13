#pragma once
#include "Character.h"
#include <vector>

class FSlime : public FCharacter
{
public:

	FSlime();
	~FSlime();

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

private:
	
};


