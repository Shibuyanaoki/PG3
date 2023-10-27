#pragma once
class Enemy
{
public:

	void Update();

	/// <summary>
	/// Ú‹ß
	/// </summary>
	void Approach();

	/// <summary>
	/// Œ‚‚Â
	/// </summary>
	void Shooting();

	/// <summary>
	/// —£’E
	/// </summary>
	void Leave();


private:

	static void (Enemy::* fhaseTable[])();

	//static_cast<size_t>(phase_);


};

