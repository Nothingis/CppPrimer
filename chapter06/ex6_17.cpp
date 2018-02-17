#include <iostream>
#include <string>

bool any_capital(std::string const& str)
{
	for (auto c : str)
		if (isupper(c)) return true;
	return false;
}

void to_lower(std::string& str)
{
	for (auto& c : str) c = tolower(c);
}

int main()
{
	std::string str;
	std::cin >> str;
	std::cout << any_capital(str) << std::endl;
	to_lower(str);
	std::cout << str << std::endl;

	return 0;
}

