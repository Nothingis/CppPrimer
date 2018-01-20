#include <iostream>
#include <vector>

using namespace std;

int main()
{
		std::vector<int> ivec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

		for (auto i : ivec) {
				if ( i & 1 )
						std::cout << i << std::endl;
		}

		return 0;
}
