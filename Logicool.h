#pragma once
#include "Mouse.h"

class Logicool: public Mouse
{
public:
	Logicool();

	~Logicool();

	void Company() override;

};

