# Chapter 3

## Exercise 4.1
> 5 + 10 * 20 / 2에서 반환하는 값은 무엇인가?

105

## Exercise 4.2
> 표 4.12를 사용해 다음 표현식에서 피연산자가 결합하는 순서대로 괄호를 묶는다.

- (a) * vec.begin()

*(vec.begin())

- (b) * vec.begin() + 1

- (*(vec.begin())) + 1

## Exercise 4.3
> 이항 연산자 대부분에서 평가 순서는 미정의로 남겨 두고 컴파일러에서 최적화 할 수 있도록 한다. 이러한 전략에는 효율적인 코드 생성과 프로그래머가 언어를 사용할 때 빠질 수 있는 함정 사이에 이율배반적 논리가 숨어 있다. 이러한 논리는 받아들일 수 있을지 생각해 보고 이유를 설명한다.

...글쎄
## Exercise 4.4
> 다음 표현식을 평가하는 순서대로 괄호를 묶는다. (괄호 없이) 이 표현식을 컴파일하고 결과를 출력해 답을 확인한다.

12 / 3 * 4 + 5 * 15 + 24 % 4 / 2

answre : 91

## Exercise 4.5
> 다음 표현식의 결과가 무엇인지 설명한다.

- (a) -30 * 3 + 21 / 5

-86

- (b) -30 + 3 * 21 / 5

-18

- (c) 30 / 3 * 21 % 5

0

- (d) -30 / 3 * 21 % 4

-2

## Exercise 4.6
> int 값이 짝수와 홀수 중 무엇인지 결정하는 표현식을 만든다.
```cpp
ival % 2 == 1
ival & 1
```
## Exercise 4.7
> 오버플로의 뜻이 무엇인지 설명하고 발생하는 표현식을 3개 만든다.
```cpp
short a = 32767; ++a;

unsigned b = 0; --b;

unsigned short c = 65535; ++c;
```

## Exercise 4.8
> 논리 AND, 논리 OR, 상등 연산자에서 피연산자를 언제 평가하는지 설명한다.

논리 AND : 왼쪽 피연산자가 true일 때만 오른쪽을 평가.

논리 OR : 왼쪽 피연산자가 false일 때만 오른쪽을 평가.

상등 연산자 : 정의되지 않음
## Exercise 4.9
> 아래 if 조건이 어떻게 행동하는지 설명한다.
```cpp
const char *cp = "Hello World";
if (cp && *cp)
```

cp의 값(주소)이 있고 (즉, nullptr이 아니고)
		
*cp의 값(char)이 있으므로 (즉, null값이 아니다)

true

## Exercise 4.10
> 표준 입력에서 int를 읽다가 읽은 값이 42와 같으면 중지하는 while 루프에 대한 조건을 만든다.
```cpp
int i = 0;
while (cin >> i && i != 42)
```

## Exercise 4.11
> a, b, c, d 네 값에 대해 a는 b보다 크고, 이 하위 표현식은 c보다 크며 이 하위 표현식은 d보다 큰지 확인하는 표현식을 만든다.
```cpp
a > b && b > c && c > d
```
## Exercise 4.12
> i, j, k는 모두 int일 때 표현식 i != j < k에서 뜻하는 것이 무엇인지 설명한다.

다음의 표현식과 같다.
```cpp
i != (j < k)
```

## Exercise 4.13
> 각 대입을 마친 후 i와 d 값은 무엇인지 설명한다.

```cpp
int i; double d;
```
- (a) d = i = 3.5;

i = 3, d = 3.0

- (b) i = d = 3.5;

d = 3.5, i = 3

## Exercise 4.14
> 각 if 시험에서 어떤 일이 생기는지 설명한다.

```cpp
if (42 = i) // 컴파일 에러

if (i = 42) // true
```

## Exercise 4.15
> 다음 대입은 위법이다. 이유와 함께 어떻게 고칠 수 있는지 설명한다.

```cpp
double dval; int ival; int *pi;
dval = ival = pi = 0;
```

pi = 0 의 결과로 int* 타입의 변수 0이 반환된다.

다음과 같이 고친다.
```cpp
dval = ival = 0;

pi = 0;
```
## Exercise 4.16
> 다음 내용은 적법하지만 프로그래머가 기대한 대로 행동하지 않는 것 같다. 이유를 설명하고 올바로 작동하도록 해당 표현식을 다시 만든다.

- (a) if (p = getPtr() != 0)

- (b) if (i = 1024)


다음과 같이 고친다.

- (a) if ((p = getPtr()) != 0)

- (b) if (i == 1024)
## Exercise 4.17
> 전위와 후의 증가 사이에 차이를 설명한다.

++i는 i값을 증가시키고 그 값을 리턴한다.

i++는 i값을 증가시킬 것이지만 본래 값을 리턴한다.

## Exercise 4.18
> 172쪽에 있는, vector의 요소를 출력하는 while 루프에 전위 증가 연산자를 사용하면 어떻게 될지 설명한다.

전위 증가 연산자를 사용하면 pbeg의 값을 증가시킨 후 *연산자를 적용하므로 vector값의 첫 요소를 줄력하지 않고, 마지막 이후의 값을 참조하려고 하므로 오류.

## Exercise 4.19
> ptr은 int에 대한 포인터, vec는 vector<int>, ival은 int라고 할 때 각 표현식의 행동을 설명한다. 올바르지 않은 듯한 것이 있으면 어느 것인지 이유와 함께 설명하고 각각을 올바르게 고친다.

(a) ptr != 0 && *ptr++
// ptr이 nullptr인지 확인하고, 포인터 값을 확인.

(b) ival++ && ival
// ival을 확인하고, ival + 1을 확인

(c) vec[ival++] <= vec[ival]
// 정의되지 않음

## Exercise 4.20
> iter이 vector<string>::iterator라고 할 때 다음 표현식 중 적법한 것이 있으면 지시한다. 적법한 표현식은 어떻게 행동하는지 설명하고 위법인 것은 왜 오류인지 설명한다.

- (a) *iter++;
// *iter, ++

- (b)(*iter)++;
// 오류

- (c) *iter.empty()
// 오류

- (d) iter->empty();
// iter 포인터 값의 empty()

- (e) ++*iter;
// 오류

- (f) iter++->empty();
// iter->empty(), ++


## Exercise 4.21
> 조건 연산자를 사용해 vector<int>에서 요소가 홀수인 것을 찾고 그런 요소 각각에 대해 값을 2배 하는 프로그램을 만든다.

코드는 [여기](ex4_21.cpp)


## Exercise 4.22
> 고득점 합격, 합격, 실패 등급을 대입하는 프로그램을 확장해 60이상 75 이하 점수에 대해 저득점 합격을 대입하도록 한다. 두 가지 버전을 만드는데, 하나는 조건 연산자만 사용하고 다른 하나는 if 문을 하나 이상 사용해야 한다. 어느 것이 이해하기 더 쉬운지 이유와 함께 설명한다.

코드는 [여기](ex4_22.cpp)


## Exercise 4.23
> 다음 표현식은 연산자 우선순위 때문에 컴파일하지 못한다. 표 4.12를 사용해 왜 실패하는지, 어떻게 고칠 수 있을지 설명한다.
```cpp
string s = "word";
string pl = s + s[s.size() - 1] == 's' ? "" : "s";
```

다음과 같이 고친다.
``cpp
string s = "word";
string pl = s + (s[s.size() - 1] == 's' ? "" : "s");
```

## Exercise 4.24
> 고득점 합격, 합격, 실패를 구분하는 프로그램에서는 조건 연산자가 오른쪽 결합이라는 사실에 의존한다. 이 연산자가 왼쪽 결합이라면 어떤 식으로 평가할지 설명한다.

```cpp
finalgrade = (grade > 90) ? "high pass"
						: (grade < 60) ? "fail" : "pass";
```
grade > 90 ? "high pass" : (grade < 60)가 먼저 연산되어 high pass? 혹은 grade < 60 ?이 평가되어 항상 fail이 된다.

## Exercise 4.25
> int가 32비트이고 char이 8비트인 시스템에서 ~'q' << 6 값은 무엇인지 설명한다. Latin-1 문자 집합에서 'q' 비트 구성 형식은 01110001이다.

int 값으로 -7296

## Exercise 4.26
> 이 절에서 예로 든 성적 프로그램에서 quiz1의 타입을 unsigned int로 한다면 어떻게 될지 설명한다.

unsigned long은 적어도 32비트, unsigned int는 16비트 정도이다.

정의되지 않은 행동이다.

## Exercise 4.27
> 다음 표현식 각각의 결과를 설명한다.
```cpp
unsigned long ul1 = 3, ul2 = 7;
```

- (a) ul1 & ul2
// 3 
- (b) ul1 | ul2
// 7
- (c) ul1 && ul2
// true
- (d) ul1 || ul2
// true

## Exercise 4.28
> 각 내장 타입 크기를 출력하는 프로그램을 만든다.

코드는 (여기)[ex4_28.cpp]

## Exercise 4.29
> 다음 코드에서 출력이 무엇일지 예상하고 이유를 설명한다. 이제 프로그램을 실행해 출력 결과가 예상한 것과 같은지 확인하고 다르다면 이유를 설명한다.
```cpp
int x[10]; int *p = x;
cout << sizeof(x)/sizeof(*x) << endl;
cout << sizeof(p)/sizeof(*p) << endl;
```

첫 번째의 결과는 10.

두 번째의 결과는 포인터와 int의 size에 따라 다르다.

## Exercise 4.30
> 표 4.12를 사용해 다음 표현식을 기본 평가 순서에 맞게 괄호로 묶는다.

- (a) sizeof x + y
(sizeof x) + y
- (b) sizeof p->mem[i]
sizeof(p->mem[i])
- (c) sizeof a < b
sizeof(a) < b
- (d) sizeof f()
sizeof(f())

## Exercise 4.31
> 이 절에서 예로 든 프로그램에서는 전위 증가와 감소 연산자를 사용했다. 후위가 아닌 전위 연산자를 사용한 이유를 설명한다. 후위 연산자를 사용하려면 무엇을 바꿔야 하는지 설명하고 이를 사용해 프로그램을 다시 만든다.

전위와 후의는 리턴값에서 차이가 난다.

이 경우에는 바꿀것이 없다.
## Exercise 4.32
> 다음 루프를 설명한다.
```cpp
constexpr int size = 5;
int ia[size] = {1,2,3,4,5};
for (int *ptr = ia, ix = 0;
	ix != size && ptr != ia+size;
	++ix, ++ptr) { /* ... */ }
```

int 배열인 ia를 접근하는데 있어서, ptr은 배열 각 요소의 주소값을, ix는 배열의 인덱스값을 사용했다.

## Exercise 4.33
> 표 4.12를 사용해 다음 표현식에서 무엇을 하는지 설명한다.
```cpp
someValue ? ++x, ++y : --x, --y
```

someValue를 먼저 평가한다. 그 결과에 따라 앞 혹은 뒤 쉼표 연산을 진행한다. 쉼표연산자는 왼쪽에서 오른쪽으로 값을 평가하고 평가한 왼쪽 값은 버리므로 x 값을 변경하고 변경한 y값을 리턴한다.

## Exercise 4.34
> 이 절에서 예로 든 변수 정의를 사용해 다음 표현식에서 어떤 변환이 일어나는지 설명한다.

- (a) if (fval)
fval을 bool로 변환
- (b) dval = fval + ival;
ival을 fval로 변환하고 + 연산의 결과를 double로 변환
- (c) dval + ival * cval;
cval을 int로 변환하고 곱의 결과를 double로 변환


- 연산자 결합법칙을 고려해야 할 수도 있음을 기억한다.

## Exercise 4.35
> 다음 정의를 사용해
```cpp
char cval;
int ival;
unsigned int ui;
float fval;
duilble dval;
```
> 암시적 타입 변환이 일어난다면 어떻게 일어나는지 설명한다.

- (a) cval = 'a' + 3;
'a'를 int로 변환하고 + 연산후 char로 변환
- (b) fval = ui - ival * 1.0;
ival을 double로 변환하고 ui를 double로 변환 후 - 연산하고 float으로 변화
- (c) dval = ui * fval;
ui를 float으로 변환하여 * 연산 후 double로 변환
- (d) cval = ival + fval + dval;
ival은 float변환 후 + 연산 후 double 변환 후 + 연산 후 char로 변환.

## Exercise 4.36
> i는 int, d는 double로 가정하고 표현식 i *= d를 부동소수점이 아니라 정수 곱셈을 하도록 만든다.

```cpp
i *= static_cast<int>(d);
```

## Exercise 4.37
> 다음 각 구식 캐스트를 명명한 캐스트를 사용해 다시 만든다.
```cpp
int i;
double d;
const string *ps;
char *pc;
void *pv;

//(a) 
pv = (void*)ps; // pv = const_cast<string*>(ps);


//(b) 
i = in(*pc); // static_cast<int>(*pc);

//(c) 
pv = &d; // static_cast<void*>(&d);

//(d)
pc = (char*)pv; // static_cast<char*>(pv);
```

## Exercise 4.38
> 다음 표현식을 설명한다.
```cpp
double slope = static_cast<double>(j/i);
```
j와i는 int이므로 int 나눗셈을 한 뒤, double로 변환한다.

