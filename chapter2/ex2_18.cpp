#include <iostream>

int main()
{
	int a = 0, b = 1;
	int *pa = &a, *pb = pa;

	pa = &b;

	*pa = b;

	return 0;
}
