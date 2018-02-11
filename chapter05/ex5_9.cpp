#include <iostream>
#include <string>

int main()
{
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	char ch;
	while (std::cin >> ch) {
		if (ch == 'a') ++aCnt;
		else if (ch == 'e') ++eCnt;
		else if (ch == 'i') ++iCnt;
		else if (ch == 'o') ++oCnt;
		else if (ch == 'u') ++uCnt;
		
	}
	std::cout << "aCnt = " << aCnt << std::endl
	<< "eCnt = " << eCnt << std::endl
	<< "iCnt = " << iCnt << std::endl
	<< "oCnt = " << oCnt << std::endl
	<< "uCnt = " << uCnt << std::endl;

	return 0;
}

		
