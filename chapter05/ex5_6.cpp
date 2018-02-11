#include <iostream>
#include <string>

int main()
{
		std::string scores[] = { "F", "D", "C", "B", "A"};	

	int input = 0;

	while (std::cin >> input) {
		std::string grade;
		grade =  input < 60 ? scores[0] : scores[(input - 50) / 10];

		std::cout << grade << std::endl;
	}

		return 0;
}
