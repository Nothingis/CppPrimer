#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v1{ 0, 1, 2, 3 };
	std::vector<int> v2{ 0, 1, 2, 3, 4, 5 };
	bool result;

	for (int i = 0; i != v1.size() && i != v2.size(); ++i)
		if (v1[i] != v2[i]) {
			result = false;
			break;
		}
		result = true;

	if (result) std::cout << " YES " << std::endl;
	else std::cout << " NO " << std::endl;

	return 0;
}
