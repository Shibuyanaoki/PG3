#include "Enemy.h"
#include <Windows.h>
#include <stdio.h>

void (Enemy::* Enemy::fhaseTable[])() = {
	&Enemy::Approach, //0
	&Enemy::Shooting, //1
	&Enemy::Leave	  //2
};


void Enemy::Update()
{

	(this->*fhaseTable[static_cast<size_t>(phase_)])();

}

void Enemy::Approach()
{
	printf("敵が接近してきた。\n");



}

void Enemy::Shooting()
{
	printf("敵が撃ってきた。\n");
}

void Enemy::Leave()
{
	printf("敵が離脱した。\n");
}
