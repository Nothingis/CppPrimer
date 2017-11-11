/** 혜상이 맞는지 확인하는 프로그램을 만든다.
 * 예상이 맞지 않으면 문제응 이해할 때까지
 * 이 절에서 배운 내용을 다시 학습한다.
 */

#include <iostream>

using namespace std;

int main()
{
		int ans1 = 0;

		unsigned u = 10, u2 = 42;
		int i = 10, i2 = 42;

		cout << "u = u" << u << "\tu2 = u" << u2 << endl;
		cout << " u2 - u = ? " << endl;
		cin >> ans1;
		
		if ( ans1 != ( u2 - u )) {
				cout << " wrong answer !! " << endl;
				return -1;
		}

		cout << endl;

		cout << " u - u2 = ? " << endl;
		cin >> ans1;

		if ( ans1 != ( u - u2 )) {
				cout << " wrong answer !! " << endl;
				return -1;
		}

		cout << endl;

		cout << " i = " << i << "\ti2 = " << i2 << endl;
		cout << " i2 - i = ? " << endl;
		cin >> ans1;
		if ( ans1 != ( i2 - i )) {
				cout << " wrong answer !! " << endl;
				return -1;
		}

		cout << endl;

		cout << " i - i2 = ? " << endl;
		cin >> ans1;
		if ( ans1 != ( i - i2 )) {
				cout << " wrong answer !! " << endl;
				return -1;
		}

		cout << endl;

		cout << " i - u = ? " << endl;
		cin >> ans1;
		if ( ans1 != ( i - u )) {
				cout << " wrong answer !! " << endl;
				return -1;
		}

		cout << endl;

		cout << " u - i = ? " << endl;
		cin >> ans1;
		if ( ans1 != ( u - i )) {
				cout << " wrong answer !! " << endl;
				return -1;
		}

		return 0;
}

