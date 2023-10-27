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
	printf("�G���ڋ߂��Ă����B\n");
}

void Enemy::Shooting()
{
	printf("�G�������Ă����B\n");
}

void Enemy::Leave()
{
	printf("�G�����E�����B\n");
}
