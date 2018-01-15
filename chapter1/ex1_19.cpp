#include <iostream>

int main()
{
	int small = 0, big = 0;
	std::cin >> small >> big;

	if (small > big) {
		int tmp = small;
		small = big;
		big = tmp;
	}

	while (small <= big) {
		std::cout << small << std::endl;
		++small;
	}
	std::cout << std::endl;
	
	return 0;
}
