#include <iostream>

void reset(int &a)
{
	a = 0;
}

int main()
{
	int a = 123;
	reset(a);
	std::cout << a << std::endl;
	return 0;
}
