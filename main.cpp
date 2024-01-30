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

int main() {

	std::thread th1(Print1);
	
	std::thread th2(Print2);

	std::thread th3(Print3);


	th1.join();
	th2.join();
	th3.join();

	return 0;

}