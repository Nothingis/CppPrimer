#include <iostream>
#include <string>

int main()
{
	std::string str1, str2;
	while (std::cin >> str1 >> str2)
	{
		if (str1 == str2)
			std::cout << " equal" << std::endl;
		else
			std::cout << ((str1 > str2) ? str1 : str2)
				<< " is bigger" << std::endl;

	}

	return 0;
}
