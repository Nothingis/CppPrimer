#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector<int> v1;
	std::vector<int> v2(10);
	std::vector<int> v3(10, 42);
	std::vector<int> v4{10};
	std::vector<int> v5{10, 42};
	std::vector<std::string> v6{10};
	std::vector<std::string> v7{10, "hi"};

	std::cout << "size of v1 : " << v1.size() << std::endl;
	for (auto i : v1) std::cout << i << " ";
	std::cout << std::endl;
	std::cout << "size of v2 : " << v2.size() << std::endl;
	for (auto i : v2) std::cout << i << " ";
	std::cout << std::endl;
	std::cout << "size of v3 : " << v3.size() << std::endl;
	for (auto i : v3) std::cout << i << " ";
	std::cout << std::endl;
	std::cout << "size of v4 : " << v4.size() << std::endl;
	for (auto i : v4) std::cout << i << " ";
	std::cout << std::endl;
	std::cout << "size of v5 : " << v5.size() << std::endl;
	for (auto i : v5) std::cout << i << " ";
	std::cout << std::endl;
	std::cout << "size of v6 : " << v6.size() << std::endl;
	for (auto i : v6) std::cout << i << " ";
	std::cout << std::endl;
	std::cout << "size of v7 : " << v7.size() << std::endl;
	for (auto i : v7) std::cout << i << " ";
	std::cout << std::endl;

	return 0;
}
