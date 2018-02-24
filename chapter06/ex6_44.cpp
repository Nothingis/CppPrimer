#include <iostream>
#include <string>

inline bool is_shorter(const std::string &lft, const std::string &rht)
{
	return lft.size() < rht.size();
}

int main()
{
	std::cout << is_shorter("abcd", "ab") << std::endl;

	return 0;
}
