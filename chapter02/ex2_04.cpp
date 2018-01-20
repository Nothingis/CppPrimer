#include <iostream>

int main()
{
		int ans1 = 0;

		unsigned u = 10, u2 = 42;
		int i = 10, i2 = 42;

		std::cout << "u = u" << u << "\tu2 = u" << u2 << endl;
		std::cout << " u2 - u = ? " << endl;
		std::cin >> ans1;
		
		if ( ans1 != ( u2 - u )) {
				std::cout << " wrong answer !! " << endl;
				return -1;
		}

		std::cout << endl;

		std::cout << " u - u2 = ? " << endl;
		std::cin >> ans1;

		if ( ans1 != ( u - u2 )) {
				std::cout << " wrong answer !! " << endl;
				return -1;
		}

		std::cout << endl;

		std::cout << " i = " << i << "\ti2 = " << i2 << endl;
		std::cout << " i2 - i = ? " << endl;
		std::cin >> ans1;
		if ( ans1 != ( i2 - i )) {
				std::cout << " wrong answer !! " << endl;
				return -1;
		}

		std::cout << endl;

		std::cout << " i - i2 = ? " << endl;
		std::cin >> ans1;
		if ( ans1 != ( i - i2 )) {
				std::cout << " wrong answer !! " << endl;
				return -1;
		}

		std::cout << endl;

		std::cout << " i - u = ? " << endl;
		std::cin >> ans1;
		if ( ans1 != ( i - u )) {
				std::cout << " wrong answer !! " << endl;
				return -1;
		}

		std::cout << endl;

		std::cout << " u - i = ? " << endl;
		std::cin >> ans1;
		if ( ans1 != ( u - i )) {
				std::cout << " wrong answer !! " << endl;
				return -1;
		}

		return 0;
}

