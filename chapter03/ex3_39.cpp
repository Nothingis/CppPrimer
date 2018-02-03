#include <iostream>
#include <string>
#include <cstring>

int main()
{
	std::string str1, str2;
	std::cin >> str1 >> str2;

	if (str1 == str2)
		std::cout << " Same " << std::endl;
	else
		std::cout << " Differ " << std::endl;
	
	const char* cstr1 = "abcd";
	const char* cstr2 = "abdd";

	auto result = strcmp(cstr1, cstr2);

	if (result == 0)
		std::cout << " Same " << std::endl;
	else
		std::cout << " Differ " << std::endl;

	return 0;
}

