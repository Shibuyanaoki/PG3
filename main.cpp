#include <stdio.h>

	int Recursive(int h, int j, int m) {

		if (h <= 0) {
			//���������������ꍇ
			return j;
		}

		return Recursive(h - 1, j += m, m * 2 - 50);

	}

	int main() {
		int hour = 4;
		int money = 100;
		int total = 0;
		int normal = 1072;

		int result;

		result = Recursive(hour, total, money);

		printf("3���ԓ�������ʒ����̌n %d �F �ċA�I�Ȓ����̌n %d", normal * hour, result);

		return 0;
	}