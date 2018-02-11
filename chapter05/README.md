# Chapter 5

## Exercise 5.1
> 널 문은 무엇이고 언제 사용할 수 있는지 설명한다.

```cpp
;
```
널 문은 문장은 필요하지만 프로그램 논리 구조는 필요하지 않을 때 사용한다.

## Exercise 5.2
> 구역은 무엇이고 언제 사용할 수 있는지 설명한다.

중괄호 쌍으로 둘러싼 일련의 문장.

단일 문장이 필요하지만 프로그램 논리 구조는 하나이 이상이 필요할 때 사용한다.

## Exercise 5.3
> 1.4.1절 프로그램의 while 루프에서 구역을 사용하지 않도록 쉼표 연산자(4.10절)를 사용해 다시 만든다. 새로 만든 코드는 가시성이 좋아지는지 오히려 나빠지는지 설명한다.

```cpp
while (val <= 10 )
	sum +=val, ++val;
	std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;	
```

가시성이 나빠진다.

## Exercise 5.4
> 다음 예 각각을 설명하고 발견한 문제가 있으면 바로잡는다.

- (a) 
```cpp
while (string::iterator iter != s.end()) { /* ... */ }
// 선언이 잘 못 되었다. 다음과 같이 고친다.
```
```cpp
std::string::iterator iter = s.begin();
while (iter != s.end()) { /* ... */ }
```
- (b)
```cpp
while (bool status = find(word) { /* ... */ }
		if (!status) { /* ... */ }
//status 변수를 while 밖에서 볼 수 없다.
```
```cpp
while (bool status = find(word) {
		if (!status) { /* ... */ }
		}
```

## Exercise 5.5
> if-else 문을 사용해 수치 점수를 문자로 된 평점으로 바꾸는 프로그램을 직접 만든다.

코드는 [여기](ex5_5.cpp)

## Exercise 5.6
> 직접 만든 성적 프로그램을 if-else 문 대신 조건 연산자(4.7절)를 사용해 다시 만든다.

코드는 [여기](ex5_6.cpp)

## Exercise 5.7
> 다음 각 코드에서 오류를 수정한다.
- (a)
```cpp
if (ival1 != ival2)
	ival1 = ival2 //세미 콜론
else ival1 = ival2 = 0;
```
- (b)
```cpp
if (ival < minval)
	minval = ival;
	occurs = 1;
	// 중괄호 필요
```
- (c)
```cpp
if (int ival = get_value())
	cout << "ival = " << ival << endl;
if (!ival)
	cout << "ival = " << ival << endl;
```
두 번째 if문은 else if 필요

- (d)
```cpp
if (ival = 0) // == 필요
	ival = get_value();
```
## Exercise 5.8
> '모호한 else'가 무엇인지, C++에서 else 절을 어떻게 처리하는지 설명한다.

if가 많고 else가 있을 때 else가 어떤 if에 속하는지 판단하기 모호해지는 것.

c++에서는 else를 앞서 나온 if 중에서 다른 else롸 결합하지 않았으며 가장 가까운 것과 결합한다.

## Exercise 5.9
> cin에서 읽은 내용에서 모음 수를 세는 프로그램을 일련의 if 문을 사용해 만든다.

코드는 [여기](ex5_9.cpp)

## Exercise 5.10
> 예로 들며 구현한 모음을 세는 프로그램에는 한 가지 문제가 있다. 즉 대문자인 모음은 세지 않는다. 그러므로 대소문자 모두 해당 모음을 세도록 프로그램을 만든다. 즉 'a'와 'A' 모두 aCnt를 증가시켜야 한다.

코드는 [여기](ex5_10.cpp)

## Exercise 5.11
> 모음을 세는 프로그램을 고쳐 빈칸, 탭, 줄바꿈 수도 세도록 한다.

코드는 [여기](ex5_11.cpp)

## Exercise 5.12
> 모음을 세는 프로그램을 고쳐 ff, fl, fi가 나타나는 횟수도 세도록 한다.

코드는 [여기](ex5_12.cpp)

## Exercise 5.13
> 다음의 각 프로그램에는 흔한 프로그래밍 오류가 있다. 각 오류를 찾고 올바르게 고친다.
- (a)
```cpp
 unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
 char ch = next_text();
 switch (ch) {
	case 'a' : aCnt++;
	case 'e' : eCnt++;
	default: iouCnt++;
 }
```
각 케이스에 break가 없다.
- (b) 
```cpp
unsigned index = some_value();
switch (index) {
	case 1:
		int ix = get_value();
		ivec[ ix ] = index;
		break;
	default:
		ix = ivec.size() - 1;
		ivec[ ix ] = index;
}
```
변수 ix에 대한 선언이 default 케이스에 대해 우회된다.
- (c)
```cpp
unsigned evenCnt = 0, oddCnt = 0;
int digit = get_num() % 10;
switch (digit) {
	case 1, 3, 5, 7, 9:
		oddcnt++;
		break;
	case 2, 4, 6, 8, 10:
		evencnt++;
		break;
}
```
케이스에 콜론(:)
- (d)
```cpp
unsigned ival = 512, jval = 1024, kval = 4096;
unsigned bufsize;
unsigned swt = get_bufCnt();
switch(swt) {
	case ival:
		bufsize = ival * sizeof(int);
		break;
	case jval:
		bufsize = jval * sizeof(int);
		break;
	case kval:
		bufsize = kval * sizeof(int);
		break;
}
```
케이스에 대한 라벨은 const expression이여야 한다.

## Exercise 5.14
> 표준 입력에서 string을 읽고 중복 단어를 찾는 프로그램을 만든다. 프로그램에서는 입력 내용에서 어떤 단어 바로 다음에 같은 단어가 나오는지 확인한다. 한 단어에 대해 가장 많이 반복한 횟수와 해당 단어를 추적하고, 최대 중복 횟수나 반복한 단어가 없음을 알리는 메시지를 출력한다. 예를 들어 입력 내용이 how now now now brown cow cow 이면 출력은 now가 3번 있었음을 나타내야 한다.

코드는 [여기](ex5_14.cpp)

## Exercise 5.15
> 다음 각 루프를 설명하고 문제가 있으면 올바르게 고친다.
- (a)
```cpp
for (int ix = 0; ix != sz; ++ix) { /* ... */ }
if (ix != sz)
	// ...
```

```cpp
int ix;
for (int ix = 0; ix != sz; ++ix) { /* ... */ }
if (ix != sz)
```

- (b)
```cpp
int ix;
for (ix != sz; ++ix) { /* ... */ }
```

```cpp
int ix;
for (;ix != sz; ++ix) { /* ... */ }
```
- (c)
```cpp
for (int ix = 0; ix != sz; ++ix, ++sz) { /* ... */ }
```


```cpp
for (int ix = 0; ix != sz; ++ix) { /* ... */ }
```

## Exercise 5.16
> while 루프는 파일끝에 도달할 때까지 값을 읽어야 할 때처럼, 어떤 조건이 유효한 동안 실행하기에 특히 좋다. 일반적으로 for 루프에서는 루프를 단계적으로 생각한다. 즉 색인을 사용해 모음 내 값의 어떤 범위를 단계적으로 진행한다. 각 루프를 관용적인 사용법에 따라 만든 다음 다른 루프 구조를 사용해 각각을 다시 만든다. 루프를 한 종류만 쓸 수 있다면 어느 것을 선택할 지 이유와 함께 설명한다.

```cpp
int i;
while ( cin >> i )

for (int i = 0; cin >> i;)


for (int i =0; i != size; ++i)

int i = 0;
while (i != size)
{
	/* ... */
	++i
}
```

while은 구조가 단순하고 직관적이지만, for는 사용법이 단순하고 편리하다. 또한 for는 루프 범위만을 위한 변수를 선언할 수 있어 while보다 깔끔하다.

## Exercise 5.17
> int의 vector가 2개 있을 때 한 vector가 다른 것의 앞부분에 해당하는지 확인하는 프로그램을 만든다. vector의 길이가 거로 다를 때는 더 작은 vector의 요소 수만큼 비교한다. 예를 들어 vector가 0, 1, 1, 2와 0, 1, 1, 2, 3, 5, 8일 때 프로그램에서는 true를 봔환해야 한다.

코드는 [여기](ex5_17.cpp)

## Exercise 5.18
> 다음 각 루프를 설명하고 문제가 있으면 올바르게 고친다.
- (a)
```cpp
do
	int v1, v2;
	cout << "Please enter two numbers to sum:";
	if (cin >> v1 >> v2)
		cout << "Sum is: " << v1 + v2 << endl;
while (cin);
```

괄호 빠짐
- (b)
```cpp
do {
	// ...
} while (int ival = get_response());
```

do 이전에 ival이 선언되어야 한다.

- (c)
```cpp
do {
		int ival = get_response();
} while (ival);
```

do 이전에 ival이 선언되어야 한다.

## Exercise 5.19
> do while 루프를 사용해 사용자에게 두 string을 반복해 요청하고 다른 것보다 작은 string이 무엇인지 알리는 프로그램을 만든다.

코드는 [여기](ex5_19.cpp)

## Exercise 5.20
> 같은 단어가 두 번 연속으로 나오거나 모든 단어를 읽을 때까지 표준 입력에서 일련의 string을 읽는 프로그램을 만든다. while 루프를 사용해 한 번에 한 단어를 읽고 단어가 두 번 연속으로 나오면 break 문을 사용해 종료한다. 두 번 연속으로 나온 단어가 있으면 그 단어를, 아니면 반복한 단어가 없다는 메시지를 출력한다.

코드는 [여기](ex5_19.cpp)

## Exercise 5.21
> 5.5.1절 연습문제에서 만든 프로그램을 고쳐 중복 단어 중 대문자로 시작하는 것만 찾도록 한다.

코드는 [여기](ex5_19.cpp)

## Exercise 5.22
> begin으로 거슬러 건너뛰는 이 절 마지막 예저는 루프를 사용해 더 잘 만들 수 있다. goto를 제거하고 코드를 다시 만든다.

```cpp
for (int sz = get_size(); sz <= 0; sz = get_size())
	;
```

## Exercise 5.23
> 표준 입력에서 두 정수를 읽고 두 번째 수로 첫 번째를 나눈 결과를 출력하는 프로그램을 만든다.

```cpp
int i, j;
cin >> i >> j;
cout << i / j << endl;
```
## Exercise 5.24
> 두 번째 수가 0일 때 예외를 발생하도록 프로그램을 고친다. 프로그램에 0을 입력하고 예외를 처리하지 않으면 사용하는 시스템에서는 어떤 일이 생기는지 확인한다.

코드는 [여기](ex5_24.cpp)

## Exercise 5.25
> 앞 연습문제에서 만든 프로그램을 고쳐 try 구역을 사용해 예외를 처리하도록 한다. catch 절에서는 사용자에게 메시지를 출력하고 새 값을 입력해 try내 코드를 반복하도록 요청해야한다.

코드는 [여기](ex5_25.cpp)

