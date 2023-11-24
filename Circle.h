#pragma once
#include "IShape.h"
class Circle :public IShape
{

	void Size()override;

	void Draw()override;

private:

	//”¼Œa
	int radius = 0;

	//ƒÎ
	int pi = 3.14;

};

