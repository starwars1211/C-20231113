#pragma once
#include <vector>
#include "Character.h"

class FPlayer: public FCharacter
{
public: 
	
	FPlayer();
	virtual~FPlayer();

	int HP;



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

