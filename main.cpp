#include <stdio.h>
#include "MT.h"

int main() {

	MT<int>num1(3, 5);
	MT<float>num2(1.5f, 2.1f);
	MT<double>num3(2.5f, 5.1f);

	printf("%d\n", num1.Min());
	printf("%f\n", num2.Min());
	printf("%f\n", num3.Min());

	return 0;

}