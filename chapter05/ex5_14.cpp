#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{

	int maxcnt = 0, curcnt = 0;

	string input;
	string prestr;
	string maxstr;

	while (std::cin >> input)
	{
		if (input == prestr) ++curcnt;
		else curcnt = 1;

		if (maxcnt < curcnt) {
			maxcnt = curcnt;
			maxstr = input;
		}

		prestr = input;
	}

	std::cout << "cnt = " << maxcnt << std::endl
	<< "string = " << maxstr << std::endl;

	return 0;
}
