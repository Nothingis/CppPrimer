#include <iostream>

int main()
{
	const int size = 10;
	int arr[size];
	for (auto ptr = arr; ptr != arr + size; ++ptr) *ptr = 0;

	return 0;
}
