#pragma once
class IsShape
{
public:
	virtual void Size() = 0;

	virtual void Draw() = 0;

protected:
	//–ÊÏ
	int area = 0;

	//‘ÎŠpü
	int diagonal = 0;

	//”¼Œa
	int radius = 0;
	//ƒÎ
	int pi = 3.14;

};

