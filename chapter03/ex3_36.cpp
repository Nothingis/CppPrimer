#include <iostream>
#include <vector>
#include <iterator>

int main()
{
	int arr1[3] = { 0, 1, 2};
	int arr2[3] = { 0, 2, 4};
 
	for (int i = 0; i < 3; ++i) {
		if (arr1[i] != arr2[i]) {
			std::cout << " diffrent " << std::endl;
			break;
		} else if ( i == 2)
			std::cout << " Same " << std::endl;
	}

	std::vector<int> v1 = { 0, 1, 2 };
	std::vector<int> v2 = { 0, 1, 2 };

	if (v1 == v2)
		std::cout << " Same " << std::endl;
	else
		std::cout << " Different " << std::endl;

	return 0;
}
	
