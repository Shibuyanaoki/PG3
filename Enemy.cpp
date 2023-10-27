#include "Enemy.h"
#include <stdio.h>

void (Enemy::*Enemy::fhaseTable[])() = {
	&Enemy::Approach,
	&Enemy::Shooting,
	&Enemy::Leave
};


void Enemy::Update()
{

	(this->*fhaseTable[0])();


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
