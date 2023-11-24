#pragma once
#include "IShape.h"
class Rectangle:public IShape
{

	void Size()override;

	void Draw()override;

private:
	//‘ÎŠpü
	int diagonal = 0;

};

