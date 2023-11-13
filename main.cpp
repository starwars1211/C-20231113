#include <iostream>
#include <vector>
#include "Character.h"
#include "FPlayer.h"
#include "Goblin.h"
#include "Boar.h"
#include "FSlime.h"

using namespace std;

int main()
{
	/*
	//STL
	Standard Template Library
	Meta<int> MInt1'
	Meta<
	//STl, Container(자료저장하는공간)

	vector<int> IntArray;
	IntArray.push_back(1);
	for (int i = 0; i < IntArray.size(); ++i)
	{
		IntArray[i];
	}
	IntArray.push_back(2);
	IntArray.push_back(3);
	IntArray.

	IntArray.erase(find.(Intarray.begin(), IntArray.end(), 2));

	auto FindValue = find.(Intarray.begin(), IntArray.end(), 2));

	
	for (int i = 0; i < IntArray.size(); ++i)
	{
		cout << IntArray[i] << endl;
	}
	list<int> IntList; //#include <List>
	IntList.push_back(1);
	IntList.push_back(2);
	IntList.push_back(3);

	for (int i = 0; i < IntList.size(); ++i)
	{
		cout << IntList[i] << endl;
	}

	/*
	FPlayer* MyPlayer = new FPlayer;
	MyPlayer->Move();
	MyPlayer->SetHP(MyPlayer->GetHP() - 10);
	delete MyPlayer;
	*/
	/*
	FGoblin* YourGoblin = new FGoblin;
	YourGoblin->Move();
	YourGoblin->SetHP(YourGoblin->GetHP() - 10);
	delete YourGoblin;

	//FGoblin Goblins[10];
	vector <FGoblin*> Goblin;
	Goblins.pusg_back(new FGoblin());

	vector <FBoar*> YourBoar;
	YourBoar.pusg_back(new YourBoar());

	FBoar* YourBoar = new FBoar;
	YourBoar->Move();
	YourBoar->SetHP(YourBoar->GetHP() - 10);
	delete YourBoar;
	
	vector <FSlime*> FSlime;
	FSlime.pusg_back(new FSlime());
	*/

	vector<FCharacter*> Characters;
	Characters.push_back(new FPlayer());
	Characters.push_back(new FSlime());
	Characters.push_back(new FBoar());
	Characters.push_back(new FGoblin());

	for (auto Character : Characters)
	{
		Character->Move();
	}

	return 0;
}
