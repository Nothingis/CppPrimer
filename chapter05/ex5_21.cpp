#include <iostream>
#include <string>

int main()
{
	std::string str, tmp;
	bool is_repeated = false;

	while (std::cin >> str) {
		if (std::isupper(str[0]) && tmp == str) {
			std::cout << str << " 두 번이고 대문자" << std::endl;
			is_repeated = false;
			break;
		}
		tmp = str;
	}

	if (is_repeated)
		std::cout << " 반복 아님 " << std::endl;

	return 0;
}
