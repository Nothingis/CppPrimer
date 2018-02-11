#include <iostream>
#include <stdexcept>

int main()
{
	int i, j;
	std::cin >> i >> j;
	try
	{
	if (j == 0)
		throw std::runtime_error("divisor is 0");
	std::cout << i / j << std::endl;
	}
	catch (std::runtime_error e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
