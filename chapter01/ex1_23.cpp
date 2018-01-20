#include <iostream>
#include "include/Sales_item.h"

int main()
{
	Sales_item cur, temp;
	if (std::cin >> cur) {
		int cnt = 1;

		while (std::cin >> temp) {
			if (temp.isbn() == cur.isbn())
				++cnt;
			else {
				std::cout << "item = " << cur
					<< "count = " << cnt << std::endl;
				cur = temp;
				cnt = 1;
			}
		}
		std::cout << "item = " << cur
			<< "count = " << cnt << std::endl;
	}
	return 0;
}
