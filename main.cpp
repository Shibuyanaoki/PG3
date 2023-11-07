#include <stdio.h>
#include "Mouse.h"
#include "Logicool.h"
#include "Razer.h"


int main() {

	Mouse* mouse_[2] ;
	for (int i = 0; i < 2; i++){
		if (i < 1) {
			mouse_[i] = new Logicool;
		}
		else {
			mouse_[i] = new Razer;
		}
	}

	for (int i = 0; i < 2; i++) {
		mouse_[i]->Company();
	}

	return 0;
}