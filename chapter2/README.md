## Exercise 2.1
> int, long, long long, short의 차이는 무엇인가? 
부호 없는 타입과 부호 있는 타입, 그리고 float와 double의 차이는 무엇인가?

int, long, long long 그리고 short은 모두 정수 연산에 사용한다. 
크기면 에서 차이나는데, 언어나 환경에 따라 세부적으로 다르지만 
보통은 다음과 같은 크기의 순서를 따른다.

short < int < long < long long

부호없는 타입은 데이터가 음수가 될 수 없거나 될 수 없음을 보장하고자 할 때 사용한다.

float과 double은 실수를 표현할 때 사용하는 타입이다.
float은 단정도, double은 배정도에 대응된다.
float은 double 보다 데이터를 담는 크기가 적은 대신 수를 표현하는 정확도 면에서 떨어진다.

## Exercise 2.2 
> 융자 상환금을 계산할 때 이자, 원금, 상환금에 사용할 타입을 선택하고 
각각에 대해 설명한다.
 
duoble을 사용하자.
## Exercise 2.3 
> 다음 코드에서 출력 결과는 무엇인가?
 
```cpp
unsigned u = 10, u2 = 42;
std::cout << u2 - u << std::endl;
std::cout << u - u2 << std::endl;
int i = 10, i2 = 42;
std::cout << i2 - i << std::endl;
std::cout << i - i2 << std::endl;
std::cout << i - u << std::endl;
std::cout << u - i << std::endl;
```

출력 결과:
```cpp
32
4294967264
32
-32
0
0
```
## Exercise 2.4
> 예상이 맞는지 확인하는 프로그램을 만든다. 예상이 맞지 않으면 문제를 이해할 때까지 이 절에서 배운 내용을 다시 학습한다.

코드는 [여기](ex2_4.cpp)

## Exercise 2.5 
> 다음 상수 각각의 타입과 네 가지 예제별로 상수의 차이점을 설명한다.

- (a) 'a', L'a', "a", L"a"
- (b) 10, 10u, 10L, 10uL, 012, 0xC
- (c) 3.14, 3.14f, 3.14L
- (d) 10, 10u, 10., 10e-2
 
(a): 문자 상수, 와이드 문자 상수, 문자열 상수, 와이드 문자열 상수

(b): 10진수, 부호 없는 10진수, long 10진수, 부호 없는 long 10진수, 8진수, 16진수

(c): double, float, long double

(d): 10진수, 부호없는 10진수, double, double
## Exercise 2.6 
> 다음 정의에서 차이가 있으면 무엇인지 설명한다.

```cpp
 int month  9, day  7;

 int month  09, day  07;
```
 
두 번째 줄의 month와 day는 8진수 형태이다.

## Exercise 2.7 
> 다음 상수가 나타애는 값이 무엇이고, 각각의 타입이 무엇인지 설명한다.

- (a) "Who goes with F\145rgus?\012"
- (b) 3.14e1L
- (c) 1024f
- (d) 3.14L

(a): Who goes with Fergus? \n    문자열

(b): 31.4    long double

(c): 오류. 정수에 접미어 f는 불가

(d): 3.14    long double

## Exercise 2.8
> 확장 문자열을 사용해 2M과 줄바꿈 문자를 출력하는 프로그램을 만든다. 이 프로그램을 수정해 2, 탭, M, 줄바꿈 문자를 출력하게 한다.

코드는 [여기](ex2_8.cpp)

## Exeercise 2.9
> 다음 정의를 설명하고 올바르지 않으면 무엇이 잘못되었는지 설명하고 고친다.
- (a) std::cin >> int input_value;
- (b) int i = { 3.14 };
- (c) double salary = wage = 9999.99;
- (d) int i = 3.14;

(a): 정의는 따로한다.
```cpp
int input_value = 0;
std::cin >> input_value;
```
(b): c++11 이전 버전에서는 값이 잘려나가는 경고가 발생, c++11 버전에서는 에러가 발생.
```cpp
double i = { 3.14 };
```
(c): wage를 이전에 선언했다면 괜찮지만, 그렇지 않다면 에러.
```cpp
double wage;
double salary = wage = 9999.99;
```
(d): 에러는 없지만 값이 잘려나감
```cpp
double i = 3.14;
```

## Exercise 2.10
> 다음 변수 각각에 대해, 초기 값이 있으면 무엇인지 설명한다.
```cpp
std::string global_str;
int global_int;
int main()
{
		int local_int;
		std::string local_str;
}
```

global_str과 global_int는 전역 변수이기 때문에 0으로 초기화 된다.
local_int는 내장 타입이고, 지역 변수이므로 초기화 되지 않는다.
local_str은 지역 변수이지만, 클래스로 정의된 객체이므로 empty 문자열로 초기화 된다.

## Exercise 2.11
> 다음 각각이 선언인지 정의인지 설명한다.
- (a) extern int ix = 1024;
- (b) int iy;
- (c) extern int iz;

(a) 정의, (b) 정의, (c) 선언

## Exercise 2.12
> 다음 이름 중 유효하지 않은 것이 있으면 무엇인지 찾는다.
- (a) int double = 3.14;
- (b) int _;
- (c) int catch-22;
- (d) int 1_or_2 = 1;
- (e) double Double = 3.14;

a, c, d는 불가.

## Exercise 2.13
> 다음 프로그램에서 j 값은 무엇인가?
```cpp
int i = 42;

int main()
{
		int i = 100;
		int j = i;
}
```

내부 유효 범위를 먼저 읽어서 j의 초기화에 사용 즉, j = 100

## Exercise 2.14
> 다음 프로그램은 올바른가? 옳다면 출력 값은 무엇인가?
```cpp
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
	sum += i;
std::cout << i << " " << sum <, std::endl;
```

출력:

100 45

## Exercise 2.15
> 다음 정의 중 잘못된 것이 있다면 어느 것이고 왜 그런지 설명한다.
- (a) int ival = 1.01;
- (b) int &rvla1 = 1.01;
- (c) int &rval2 = ival;
- (d) int &rval3;

(a): 정상

(b): 오류. 참조는 항상 객체를 이용해 초기화 한다.

(c): 정상

(d): 오류. 참조자는 항상 초기화해줘야 한다.

## Exercise 2.16
> 다음 대입문 중 잘못된 것이 있으면 어느 것인지 찾고, 올바른 것이 있으면 무엇을 하는지 설명한다.
```cpp
int i = 0, &r1 = i; double d = 0, &r2 = d;
```
- (a) r2 = 3.14159;
- (b) r2 = r1;
- (c) i = r2;
- (d) r1 = d;

(a): 정상. b에 대입한것과 같다.

(b): 정상. b = i 와 같다.

(c): 정상. i = d 와 같다. 값이 잘릴 수 있다.

(d): 정상. i = d 와 같다. 값이 잘릴 수 있다.

## Exercise 2.17
> 다음 코드에서 출력하는 내용은 무엇인가?
```cpp
int i,&ri = i;
i = 5; ri = 10;
std::cout << i << " " << ri << std::endl;
```
출력:
	10 10

## Exercise 2.18
> 포인터 값을 바꾸는 코드를 만들고 그 포인터로 가리키는 값을 바꾸는 코드를 만든다.

코드는 [여기](ex2_18.cpp)

## Exercise 2.19
> 포인터와 참조자 사이에 핵심적인 차이를 설명한다.

포인터는 객체지만 참조자는 객체가 아니다.

## Exercise 2.20
> 다음 프로그램에서 하는 일은 무엇인가?
```cpp
int i = 42;
int *p1 = &i;
*p1 = *p1 * *p1;
```
p1은 i를 가르키고 있다. p1이 가리키고 있는 값 (42)를 제곱해서 다시 i에 대입한다.

## Exercise 2.21
> 다음 각 정의에 대해 설명하고 올바르지 않은 것이 있으면 이유를 설명한다.
```cpp
int i = 0;
```
- (a) double *dp = &i;
- (b) int *ip = i;
- (c) int *p = &i;

(a): 오류. double * 타입의 변수에 int * 타입의 변수를 넣을 수 없다.

(b): 오류. int * 타입의 변수에 int 타입의 변수를 넣을 수 없다.

(c): 정상.

## Exercise 2.22
> p가 int에 대한 포인터라고 가정하고 다음 코드를 설명한다.
```cpp
if (p) //...
if (*p) //...
```
- p가 nullptr인지 아닌지
- p가 가르키는 값이 0인지 아닌지

## Exercise 2.23
> 포인터 p가 있다고 할 때, p로 유효한 객체를 가리키고 있는지 결정할 수 있는가? 그럴 수 있다면 어떻게 그럴 수 있는지, 없다면 왜 그런지 설명한다.

없다. 포인터는 가르키고 있는 객체의 형태와 주소에 대한 정보만 있고 가르키고 있는 객체가 실제 유효한지는 알 수 없다.

## Exercise 2.24
> 왜 p에 대한 초기화는 옳고 lp에 대해서는 그렇지 않은지 설명한다.
```cpp
int i = 42; void *p = &i; long *lp = &i;
```

void *는 모든 형태의 객체를 가르킬 수 있는 특별한 타입이므로 p에 대한 초기화는 옳지만 long *lp = &int와 같은 내부적 형변환은 C++에서 금지하고 있다.

## Exercise 2.25
> 다음 각 변수에 대한 타입과 값을 결정한다.
- (a) int* ip, i, &r = i;
- (b) int i, *ip = 0;
- (c) int * ip, ip2;

(a) ip: int 포인터, i: int, r: i 참조자

(b) i: int, ip: int 포인터 값은 nullptr

(c) ip: int 포인터, ip2: int

## Exercise 2.26
> 다음에서 옳은 것을 찾고, 옳지 않은 것은 이유를 설명한다.
- (a) const int buf;
- (b) int cnt = 0;
- (c) const int sz = cnt;
- (d) ++cnt; ++sz;

(a) 오류. 초기화되어야 한다.

(b) 정상

(c) 정상

(d) ++cnt는 정상. ++sz는 const 객체에 쓰기를 시도했다.

## Exercise 2.27
> 다음 초기화 중 옳은 것을 찾고 이유를 설명한다.
- (a) int i = -1, &r = 0;
- (b) int *const p2 = &i2;
- (c) const int i = -1, &r = 0;
- (d) const int *const p3 = &i2;
- (e) const int *pi = &i2;
- (f) const int &const r2;
- (g) const int i2 = i, &r = i;


(a) r은 객체를 가르켜야 한다.

(b) 정상

(c) 정상

(d) 정상

(e) 정상

(f) 오류. r2는 참조자이므로 const가 될 수 없다.

(g) 정상

## Exercise 2.28
> 다음 정의를 설명하고 옳지 않은 것을 찾는다.
- (a) int i, *const cp;
- (b) int *p1, *const p2;
- (c) const int ic, &r = ic;
- (d) const int *const p3;
- (e) const int *p;

(a) cp는 초기화 되어야 한다.

(b) p2는 초기화 되어야 한다.

(c) ic는 초기화 되어야 한다.

(d) p3는 초기화 되어야 한다.

(e) 정상.

## Exercise 2.29
> 앞 연습문제에 있는 변수를 사용해 다음 대입 중 옳은 것을 찾고 이유를 설명한다.
- (a) i = ic;
- (b) p1 = p3;
- (c) p1 = &ic;
- (d) p3 = &ic;
- (e) p2 = p1;
- (f) ic = *p3;

(a) 정상

(b) p3는 const int에 대한 포인터이다.

(c) ic는 const int이다.

(d) p3는 const 포인터이다.

(e) p2는 const 포인터이다.

(f) ic는 const int이다.

## Exercise 2.30 
> 다음 각 선언에서, 객체의 상위나 하위 const가 있는지 찾는다.
```cpp
const int v2 = 0;
int v1 = v2;
int *p1 = &v1, &r1 = v1;
const int *p2 = &v2, *const p3 = &i, &r2 = v2;
```
v2는 상위 const, p2는 하위 레벨 const, p3는 상위 하위 const, r2는 하위 const이다.

## Exercise 2.31
> 앞 연습문제에 있는 선언에 대해 다음 대입이 옳은지 확인한다. 각 경우에 상위 또는 하위 const가 어떻게 적용되는지 설명한다.
```cpp
r1 = v2;
p1 = p2;
p2 = p1;
p1 = p3;
p2 = p3;
```
정상

오류, p2는 하위 const이지만, p1은 아니다.

정상

오류. p3는 하위 const이지만, p1은 아니다.

정상.

## Exercise 2.32 
> 다음 코드가 옳은지 여부를 확인하고, 옳지 않다면 어떻게 바로 잡을 수 있을지 설명한다.
```cpp 
int null = 0, *p = null;
```

int null = 0, *p = nullptr;


## Exercise 2.33
> 이 절에서 예로 든 변수 정의를 사용해 다은 각 대입은 어떻게 되는지 설명한다.
```cpp
a = 42;
b = 42;
c = 42;
d = 42;
e = 42;
g = 42;
```

a 정상.

b 정상.

c 정상.

d 오류. d는 int* 이다.

e 오류. e는 const int* 이다.

g 오류. g는 const int& 이다. (바꿀 수 없다)

## Exercise 2.34
> 앞 연습문제에 있는 변수와 대입을 사용해 프로그랩을 만든다. 대입 앞뒤에서 각 변수를 출력해 앞 연습문제에서 예상한 내용이 맞는지 확인한다. 맞지 않으면 뭐가 잘못됐는지 정확히 알 때까지 예제를 학습한다.

코드는 [여기](ex2_34.cpp)

## Exercise 2.35
> 다음 각 정의에서 추론한 타입을 설명한다. 타입을 모두 설명한 후에는 프로그램을 만들어 맞는지 확인한다.
```cpp
const int i = 42;
auto j = i;
const auto &k = i;
auto *p = &i;
const auto j2 = i, &k2 = i;
```

j: int, k: const int&, p: const int*, j2: const int&

코드는 [여기](ex2_35.cpp)

## Exercise 2.36
> 다음 각 코드에서 각 변수의 타입이 무엇인지, 코드를 마쳤을 때 각 변수이 값은 무엇인지 설명한다.
```cpp
int a = 3, b = 4;
decltype(a) c = a;
decltype((b)) d = a;
++c;
++d;
```
c: int, d: int&,
a,b,c,d = 4

## Exercise 2.37
> 대입은 참조자 타입을 반환하는 표현식의 한 예이며 그 타입은 왼쪽 피연산자의 타입에 대한 참조자이다. 즉 i가 int라면 표현식 i = x의 타입은 int&이다. 그렇다면 다음 각 코드에서 각 변수의 타입과 값은 무엇이겠는가?
```cpp
int a = 3, b = 4;
decltype(a) c = a;
decltype(a = b) d = a;
```

c: int, d: int&
a=3, b=4, c=3, d=3

## Exercise 2.38
> decltype과 auto 사이에 타입 추론 방법의 차이를 설명한다. auto와 decltype을 사용해 같은 타입으로 추론하는 예와 다른 타입으로 추론하는 예를 만든다.

auto는 객체를 실제로 사용하지만, decltype은 참조자를 사용한다. 
decltype은 추론이 대상 표현식의 형식에 의존한다.

## Exercise 2.39
> 다음 프로그램을 컴파일해 클래스 정의에 세미콜론을 빠뜨리면 어떻게 되는지 확인하고, 후에 참고할 수 있도록 메시지를 잘 기억한다.
```cpp
struct Foo { /* empty */ } // 주의: 세미콜론이 없다
int main()
{
	return 0;
}
```
Error message:[Error]expected';' after struct definition

## Exercise 2.40
> Sales_data 클래스를 직접 만든다.
```cpp
struct Sales_data
{
	std:string bookNo;
	std:string bookName;
	unsigned units_sold = 0;
	double revenue = 0.0;
	double price = 0.0;
};
```

## Exercise 2.41
> 직접 만든 Sales_data 클래스를 사용해 1.5.1절, 1.5.2절, 1.6절  연습문제에서 만든 프로그램을 다시 만든다. 지금은 Sales_data 클래스를 main 함수와 같은 파일에 정의해야 한다.

TODO

## Exercise 2.42
> Sales_data.h 헤더를 직접 만들고 이를 사용해 2.6.2절 연습문제에서 만든 프로그램을 다시 만든다.

TODO
