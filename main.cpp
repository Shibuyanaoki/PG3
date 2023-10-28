#include <stdio.h>
#include "MT.h"

int main() {

	MT<int>num1(3, 5);
	MT<float>num2(1.5f, 2.1f);

	printf("%d\n", num1.Min());
	printf("%f\n", num2.Min());

	return 0;

}