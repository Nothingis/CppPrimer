/**
 * int, long, long long, short의 차이는 무엇인가?
 * 부호 없는 타입과 부호 있는 타입, 그리고 float와 double의
 * 차이는 무엇인가?
 */

#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	long b = 0;
	long long c = 0;
	short d = 0;

	cout << "size of int = " << sizeof(a) << endl;
	cout << "size of long = " << sizeof(b) << endl;
	cout << "size of long long = " << sizeof(c) << endl;
	cout << "size of short = " << sizeof(d) << endl;

	return 0;
}
