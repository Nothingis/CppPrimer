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

