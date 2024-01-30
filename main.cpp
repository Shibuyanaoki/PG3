#include <stdio.h>
#include <thread>

void Print1() {

	printf("thread1\n");
}

void Print2() {

	printf("thread2\n");
}

void Print3() {

	printf("thread3\n");
}

void Num(int num) {

	for (num; num <= 3; ++num) {
		printf("thread%d\n",num);
	}

}

int main() {

	std::thread th1(Print1);
	
	std::thread th2(Print2);

	std::thread th3(Print3);

	//std::thread th4(Num,1);

	th1.join();
	th2.join();
	th3.join();
	//th4.join();

	return 0;

}