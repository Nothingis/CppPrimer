#include <iostream>
#include <vector>

int main()
{
	std::vector<int> ivec;

	for (int i; std::cin >> i; ivec.push_back(i));

	return 0;
}
