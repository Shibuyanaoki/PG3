#pragma once
class IsShape
{
public:
	virtual void Size() = 0;

	virtual void Draw() = 0;

protected:
	//�ʐ�
	int area = 0;

	//�Ίp��
	int diagonal = 0;

	//���a
	int radius = 0;
	//��
	int pi = 3.14;

};

