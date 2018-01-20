#include <iostream>
#include <string>

int main()
{
	std::string str;

	std::cin >> str;

	/* while */
	auto i = str.begin();

	while (i != str.end()) *i++ = 'x';
	std::cout << str << std::endl;

	/* for */
	for(; i != str.end(); ++i) *i = 'x';
	std::cout << str << std::endl;

	return 0;
}
