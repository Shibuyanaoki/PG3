#pragma once
class Enemy
{
public:

	void Update();

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

	//static_cast<size_t>(phase_);


};

