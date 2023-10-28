#pragma once
#include "Phase.h"
class Enemy
{
public:

	/// <summary>
	/// �X�V
	/// </summary>
	void Update();

private:

	/// <summary>
	/// �ڋ�
	/// </summary>
	void Approach();

	/// <summary>
	/// ����
	/// </summary>
	void Shooting();

	/// <summary>
	/// ���E
	/// </summary>
	void Leave();

private:

	static void (Enemy::* fhaseTable[])();

	Phase phase_ = Phase::APPROACH; 

};

