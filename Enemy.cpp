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
	printf("“G‚ªÚ‹ß‚µ‚Ä‚«‚½B\n");
}

void Enemy::Shooting()
{
	printf("“G‚ªŒ‚‚Á‚Ä‚«‚½B\n");
}

void Enemy::Leave()
{
	printf("“G‚ª—£’E‚µ‚½B\n");
}
