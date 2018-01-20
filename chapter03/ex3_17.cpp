#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector<std::string> v;

	for (std::string s; std::cin >> s; v.push_back(s));
	for (auto &i : v) for (auto &c : i) c = toupper(c);
	for (decltype(v.size()) i = 1; i != v.size(); ++i)
	{
		if (i % 8 == 1 ) std::cout << std::endl;

		std::cout << v[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}
