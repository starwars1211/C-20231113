#include "Character.h"
#include <iostream>

FCharacter::FCharacter()
{
	
	std::cout << "캐릭터 생성됨" << std::endl;

}

FCharacter::~FCharacter()
{

	std::cout << "캐릭터 파괴됨" << std::endl;
}

void FCharacter::Move()
{

	std::cout << "플레이어를 때리고 도망간다" << std::endl;

}