# Chapter 3

## Exercise 4.1
> 5 + 10 * 20 / 2에서 반환하는 값은 무엇인가?

## Exercise 4.2
> 표 4.12를 사용해 다음 표현식에서 피연산자가 결합하는 순서대로 괄호를 묶는다.

(a) * vec.begin()

(b) * vec.begin() + 1

## Exercise 4.3
> 이항 연산자 대부분에서 평가 순서는 미정의로 남겨 두고 컴파일러에서 최적화 할 수 있도록 한다. 이러한 전략에는 효율적인 코드 생성과 프로그래머가 언어를 사용할 때 빠질 수 있는 함정 사이에 이율배반적 논리가 숨어 있다. 이러한 논리는 받아들일 수 있을지 생각해 보고 이유를 설명한다.

## Exercise 4.4
> 다음 표현식을 평가하는 순서대로 괄호를 묶는다. (괄호 없이) 이 표현식을 컴파일하고 결과를 출력해 답을 확인한다.

## Exercise 4.5
> 다음 표현식의 결과가 무엇인지 설명한다.

(a) -30 * 3 + 21 / 5

(b) -30 + 3 * 21 / 5

(c) 30 / 3 * 21 % 5

(d) -30 / 3 * 21 % 4

## Exercise 4.6
> int 값이 짝수와 홀수 중 무엇인지 결정하는 표현식을 만든다.

## Exercise 4.7
> 오버플로의 뜻이 무엇인지 설명하고 발생하는 표현식을 3개 만든다.

## Exercise 4.8
> 논리 AND, 논리 OR, 상등 연산자에서 피연산자를 언제 평가하는지 설명한다.

## Exercise 4.9
> 아래 if 조건이 어떻게 행동하는지 설명한다.
'''cpp
const char *cp = "Hello World";
if (cp && *cp)
```

## Exercise 4.10
> 표준 입력에서 int를 읽다가 읽은 값이 42와 같으면 중지하는 while 루프에 대한 조건을 만든다.

## Exercise 4.11
> a, b, c, d 네 값에 대해 a는 b보다 크고, 이 하위 표현식은 c보다 크며 이 하위 표현식은 d보다 큰지 확인하는 표현식을 만든다.

## Exercise 4.12
> i, j, k는 모두 int일 때 표현식 i != j < k에서 뜻하는 것이 무엇인지 설명한다.

## Exercise 4.13
> 각 대입을 마친 후 i와 d 값은 무엇인지 설명한다.

```cpp
int i; double d;
```
(a) d = i = 3.5;

(b) i = d = 3.5;

## Exercise 4.14
> 각 if 시험에서 어떤 일이 생기는지 설명한다.

```cpp
if (42 = i) // ...

if (i = 42) // ...
```

## Exercise 4.15
> 다음 대입은 위법이다. 이유와 함께 어떻게 고칠 수 있는지 설명한다.
```cpp
double dval; int ival; int *pi;
dval = ival = pi = 0;
```

## Exercise 4.16
> 다음 내용은 적법하지만 프로그래머가 기대한 대로 행동하지 않는 것 같다. 이유를 설명하고 올바로 작동하도록 해당 표현식을 다시 만든다.

(a) if (p = getPtr() != 0)

(b) if (i = 1024)

## Exercise 4.17
> 전위와 후의 증가 사이에 차이를 설명한다.

## Exercise 4.18
> 172쪽에 있는, vector의 요소를 출력하는 while 루프에 전위 증가 연산자를 사용하면 어떻게 될지 설명한다.

## Exercise 4.19
> ptr은 int에 대한 포인터, vec는 vector<int>, ival은 int라고 할 때 각 표현식의 행동을 설명한다. 올바르지 않은 듯한 것이 있으면 어느 것인지 이유와 함께 설명하고 각각을 올바르게 고친다.

(a) ptr != 0 && *ptr++

(b) ival++ && ival

(c) vec[ival++] <= vec[ival]

## Exercise 4.20
> iter이 vector<string>::iterator라고 할 때 다음 표현식 중 적법한 것이 있으면 지시한다. 적법한 표현식은 어떻게 행동하는지 설명하고 위법인 것은 왜 오류인지 설명한다.

(a) *iter++;

(b)(*iter)++;

(c) *iter.empty()

(d) iter->empty();

(e) ++*iter;

(f) iter++->empty();


## Exercise 4.21
> 조건 연산자를 사용해 vector<int>에서 요소가 홀수인 것을 찾고 그런 요소 각각에 대해 값을 2배 하는 프로그램을 만든다.

코드는 [여기](ex4_21.cpp)


## Exercise 4.22
> 고득점 합격, 합격, 실해 등급을 대입하는 프로그램을 확장해 60이상 75 이하 점수에 대해 저득점 합격을 대입하도록 한다. 두 가지 버전을 만드는데, 하나는 조건 연산자만 사용하고 다른 하나는 if 문을 하나 이상 사용해야 한다. 어느 것이 이해하기 더 쉬운지 이유와 함께 설명한다.

코드는 [여기](ex4_22.cpp)


## Exercise 4.23
> 다음 표현식은 연산자 우선순위 때문에 컴파일하지 못한다. 표 4.12를 사용해 왜 실패하는지, 어떻게 고칠 수 있을지 설명한다.
```cpp
string s = "word"
string pl = s + s[s.size() - 1] == 's' ? "" : "s";


## Exercise 4.24
> 고득점 합격, 합격, 실패를 구분하는 프로그램에서는 조건 연산자가 오른쪽 결합이라는 사실에 의존한다. 이 연산자가 왼쪽 결합이라면 어떤 식으로 평가할지 설명한다.

## Exercise 4.25
> int가 32비트이고 char이 8비트인 시스템에서 ~'q' << 6 값은 무엇인지 설명한다. Latin-1 문자 집합에서 'q' 비트 구성 형식은 01110001이다.

## Exercise 4.26
> 이 절에서 예로 든 성적 프로그램에서 quiz1의 타입을 unsigned int로 한다면 어떻게 될지 설명한다.


## Exercise 4.27
> 다음 표현식 각각의 결과를 설명한다.
```cpp
unsigned long ul1 = 3, ul2 = 7;
```

(a) ul1 & ul2

(b) ul1 | ul2

(c) ul1 && ul2

(d) ul1 || ul2


## Exercise 4.28
> 각 내장 타입 크기를 출력하는 프로그램을 만든다.

## Exercise 4.29
> 다음 코드에서 출력이 무엇일지 예상하고 이유를 설명한다. 이제 프로그램을 실행해 출력 결과가 예상한 것과 같은지 확인하고 다르다면 이유를 설명한다.
```cpp
int x[10]; int *p = x;
cout << sizeof(x)/sizeof(*x) << endl;
cout << sizeof(p)/sizeof(*p) << endl;
```

## Exercise 4.30
> 표 4.12를 사용해 다음 표현식을 기본 평가 순서에 맞게 괄호로 묶는다.

(a) sizeof x + y

(b) sizeof p->mem[i]

(c) sizeof a < b

(d) sizeof f()

## Exercise 4.31
> 이 절에서 예로 든 프로그램에서는 전위 증가와 감소 연산자를 사용했다. 후위가 아닌 전위 연산자를 사용한 이유를 설명한다. 후위 연산자를 사용하려면 무엇을 바꿔야 하는지 설명하고 이를 사용해 프로그램을 다시 만든다.


## Exercise 4.32
> 다음 루프를 설명한다.
```cpp
constexpr int size = 5;
int ia[size] = {1,2,3,4,5};
for (int *ptr = ia, ix = 0;
	ix != size && ptr != ia+size;
	++ix, ++ptr) { /* ... */ }
```

## Exercise 4.33
> 표 4.12를 사용해 다음 표현식에서 무엇을 하는지 설명한다.
```cpp
someValue ? ++c, ++y : --x, --y
```

## Exercise 4.34
> 이 절에서 예로 든 변수 정의를 사용해 다음 표현식에서 어떤 변환이 일어나는지 설명한다.

(a) if (fval)

(b) dval = fval + ival;

(c) dval + ival * cval;

연산자 결합법칙을 고려해야 할 수도 있음을 기억한다.

## Exercise 4.35
> 다음 정의를 사용해
char cval;
int ival;
unsigned int ui;
float fval;
duilble dval;

> 암시적 타입 변환이 일어난다면 어떻게 일어나는지 설명한다.

(a) cval = 'a' + 3;
(b) fval = ui - ival * 1.0;
(c) dval = ui * fval;
(d) cval = ival + fval + dval;

## Exercise 4.36
> i는 int, d는 double로 가정하고 표현식 i *= d를 부동소수점이 아니라 정수 곱셈을 하도록 만든다.


## Exercise 4.37
> 다음 각 구식 캐스트를 명명한 캐스트를 사용해 다시 만든다.
```cpp
int i;
double d;
const string *ps;
char *pc;
void *pv;

(a) pv = (void*)ps;

(b) i = in(*pc);

(c) pv = &d;

(d) pc = (char*)pv;


## Exercise 4.38
> 다음 표현식을 설명한다.
```cpp
double slope = static_cast<double>(j/i);
```
[1.4.1 절](ex3_1a.cpp)

