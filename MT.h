#pragma once

template <typename Type>

class MT
{
public:

	/*MT(Type1 a, Type1 b) {
		num1 = a, num2 = b;
	}*/

	//è„Ç∆ìØÇ∂à”ñ°
	MT(Type num1, Type num2) :num1(num1), num2(num2) {};


	Type Min() {
		if (num1 < num2) {
			return static_cast<Type>(num1);
		}

		if (num1 > num2) {
			return static_cast<Type>(num2);
		}
	}


private:

	Type num1;
	Type num2;

};


