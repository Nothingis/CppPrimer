#include <iostream>
#include <string>

int main()
{
	std::string str, tmp;
	while (std::cin >> str)
		if (str == tmp) break;
		else tmp = str;

	if (std::cin.eof())
		std::cout << " no word" << std::endl;
	else
		std::cout << str << " repeated" << std::endl;
	
	return 0;
}
