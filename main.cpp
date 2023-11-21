#include <stdio.h>
#include "IsShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {

	IsShape* isAhape_[2];

	isAhape_[0] = new Circle;
	isAhape_[1] = new Rectangle;

	for (int i = 0; i < 2; i++) {
		isAhape_[i]->Size();
		isAhape_[i]->Draw();
	}

	return 0;
}