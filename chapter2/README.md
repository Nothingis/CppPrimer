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

