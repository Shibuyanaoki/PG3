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

	switch (phase_) {
	case Phase::APPROACH:
		(this->*fhaseTable[0])();

		break;

	case Phase::SHOOTING:

		(this->*fhaseTable[1])();

		break;

	case Phase::LEAVE:

		(this->*fhaseTable[2])();
		
		break;

	}

}

void Enemy::Approach()
{
	printf("�G���ڋ߂��Ă����B\n");
	phase_ = Phase::SHOOTING;
}

void Enemy::Shooting()
{
	printf("�G�������Ă����B\n");
	phase_ = Phase::LEAVE;
}

void Enemy::Leave()
{
	printf("�G�����E�����B\n");
}
