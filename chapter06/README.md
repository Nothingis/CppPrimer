# Chapter 6

## Exercise 6.1
> 매개변수와 인자 사이에 차이를 설명한다.

## Exercise 6.2
> 다음 함수에 어떤 오류가 있는지 나타내고 이유를 설명한다. 그 문제를 어떻게 바로잡을 수 있는 지 설명한다.
- (a)
```cpp
int f() {
	string s;
	// ...
	return s;
	}
```
- (b)
```cpp
f2(int i) { /* ... */ }
```
- (c)
```cpp
int calc(int v1, int v1) /* ... */ }
```
- (d)
```cpp
duoble square(double x) return x * x;
```

## Exercise 6.3
> fact를 직접 만들고 확인한다.
## Exercise 6.4
> 사용자에게 수를 요청하고 그 수의 계승을 계산하는 함수를 만든 후 main에서 그 함수를 호출한다.
## Exercise 6.5
> 함수에서 받은 인자의 절대 값을 반환하는 함수를 만든다.
## Exercise 6.6
> 매개변수, 지역변수, 지역 static 변수 사이에 차이를 설명하고 각각이 유용한 함수의 예를 든다.
## Exercise 6.7
> 처음 호출할 때는 0을 반환하고 이후에는 호출할 때마다 순차열에 숫자를 생성하는 함수를 만든다.
## Exercise 6.8
> Chapter6.h라는 이름으로 헤더 파일을 만들고 6.1절 연습문제에서 만든 함수의 선언을 담는다.
## Exercise 6.9
> fact.cc와 factMain.cc 파일을 직접 만든다. 이 파일에는 앞 절의 연습문제에서 만든 Chapter6.h를 포함해야 한다. 그리고 이 파일을 사용해 컴파일러에서 분리 컴파일을 어떻게 지원하는지 이해한다.
## Exercise 6.10
> 포인터를 사용해 두 int 값을 교환하는 함수를 만든다. 이 함수를 호출하고 교환한 값을 출력해 확인한다.
## Exercise 6.11
> 참조자를 취하는 reset 버전을 직접 만들고 확인한다.
## Exercise 6.12
> 6.2.1절 연습문제 6.10에서 만든 프로그램을 고쳐 포인터 대신 참조자를 사용해 두 int 값을 교환하도록 한다. 생각하기에 어느 버전이 더 사용하기 쉬운지, 왜 그런지 설명한다.
## Exercise 6.13
> T를 타입 이름이라고 할 때 void f (T)와 void f (T&)로 선언한 함수 사이의 차이를 설명한다.
## Exercise 6.14
> 언제 매개변수를 참조자 타입으로 해야 하는지 예를 든다. 매개변수를 참조자 타입으로 하면 안되는 때는 언제인지 예를 든다.
## Exercise 6.15
> find_char의 각 매개변수 타입에 대한 이론적 근거를 설명한다. 특히 s는 const에 대한 참조자인데 occurs는 보통의 참조자인 이유는 무엇일까? 다른 매개변수는 참조자인데 char 매개변수 c는 아닌 이유는 무엇인가? s를 보통의 참조자로 사용하면 어떻게 되는가? occurs를 const에 대한 참조자로 하면 어떻게 되는가?
## Exercise 6.16
> 다음 함수는 올바를지라도 보기보다 그다지 유용하진 않다. 이 함수의 한계가 무엇인지 설명하고 올바르게 고친다.
```cpp
bool is_empty(string& s) { return s.empty(); }
```
## Exercise 6.17
> string에 대문자가 있는지 확인하는 함수와 string 내용을 모두 소문자로 바꾸는 함수를 만든다. 이 함수에서 사용한 매개변수의 타입이 같은지 확인한다. 같은지 다른지 각각에 대해 이유와 함께 설명한다.
## Exercise 6.18
> 다음 각 함수에 대한 선언을 만든다 선언을 만들 때는 각 함수에서 하는 일을 나타내는 함수 이름을 사용한다.
- (a) bool을 반환하고 matrix 클래스에 대한 참조자인 매개변수가 둘인 compare 함수
- (b) vector<int> 반복자를 반환하고 두 매개변수 중 하나는 int, 다른 하나는 vector<int>에 대한 반복자를 취하는 함수 change_val
## Exercise 6.19
> 다음 선언에 대해 올바른 것과 그렇지 않은 것을 찾는다. 올바르지 않은 것은 이유를 설명한다.
```cpp
double calc(double);
int count(const string &, char);
int sum(vector<int>::iterator, vector<int>::iterator, int);
vector<int> vec(10);
```
- (a)
```cpp
calc(23.4, 55.1)
```
- (b) 
```cpp
count("abcda", 'a');
```
- (c)
```cpp
calc(66);
```
- (d)
```cpp
sum(vec.begin(), vec.end(), 3.8);
```
## Exercise 6.20
> 참조자 매개변수를 const에 대한 참조로 해야 할 때는 언제인지, const에 대한 참조자여야 할 때 보통의 참조자를 사용하면 어떻게 되는지 설명한다.
## Exercise 6.21
> int와 int에 대한 포인터를 취하고 int 값이나 그 포인터에서 가리키는 값보다 더 큰 값을 반환하는 함수를 만든다. 그 포인터를 어떤 타입으로 정의해야 하는가?
## Exercise 6.22
> 두 int 포인터를 교환하는 함수를 만든다.
## Exercise 6.23
> 이 절에서 보여 준 각 print 함수 버전을 직접 만들고 각각을 호출해 다음처럼 정의한 i와 j를 출력한다.
```cpp
int i = 0, j[2] = { 0, 1};
```
## Exercise 6.24
> 다음 함수 행동을 설명한다. 코드에 문제가 있으면 무엇인지, 어떻게 고칠 수 있는지 설명한다.
```cpp
void print(const int ia[10])
{
	for (size_t i = 0; i != 10; ++i)
		cout <, ia[i] << endl;
}
```
## Exercise 6.25
> 두 인자를 취하는 main 함수를 만들고 제공한 인자를 결합한 후 결과 string을 출력한다.
## Exercise 6.26
> 이 절에서 보여 준 선택 내용을 받아들이는 프로그램을 만들고 main에 전달한 인자 값을 출력한다.
## Exercise 6.27
> initializer_list<int>를 취하고 이 목록 내 요소의 합을 계산하는 함수를 만든다.
## Exercise 6.28
> ErrCode 매개변수를 취하는 두 번째 error_msg 버전에서 for 루프 내 elem의 타입은 무엇인지 설명한다.
## Exercise 6.29
> 범위 for에서 initializer_list를 사용할 때 루프 제어 변수로 참조자를 사용할 경우가 있는가? 그렇다면 왜 그런지, 그렇지 않다면 또 왜 그렇지 않은지 설명한다.
## Exercise 6.30
> 260쪽에 있는 str_subrange를 컴파일해, 사용하는 컴파일러에서 나타낸 오류는 무엇인지 확인한다.
## Exercise 6.31
> 참조자와 const에 대한 참조자 각각에 대해 언제 반환해야 유효한지 설명한다.
## Exercise 6.32
> 다음 함수가 옳은지 확인한다. 옳다면 무엇을 하는지 설명하고 옳지 않다면 오류를 바로잡고 그에 대해 설명한다.
```cpp
int &get(int *arry, int index) { return arry[index]; }
int main() {
	int ia[10];
	for (int i = 0; i != 10; ++i)
		get(ia, i) = i;
}
```
## Exercise 6.33
> vector 내용을 출력하는 재귀 함수를 만든다.
## Exercise 6.34
> factorial에서 중지 조건이 다음과 같으면 어떻게 될지 설명한다.
```cpp
if (val != 0)
```
## Exercise 6.35
> factorial 호출에서 val--가 아니라 val-1을 전달한 이유를 설명한다.
## Exercise 6.36
> string이 10개인 배열에 대한 참조자를 반환하는 함수 선언을 후행 반환, decltype, 타입 별칭을 사용하지 않고 만든다.
## Exercise 6.37
> 앞 연습문제의 함수에 대해 세 가지 선언을 추가로 만든다. 하나는 타입 별칭, 다른 하나는 후행 반환, 세 번째는 decltype을 사용한다. 선호하는 형식을 이유와 함께 설명한다.
## Exercise 6.38
> arrPtr을 고쳐 그 배열에 대한 참조자를 반환하도록 한다.
## Exercise 6.39
> 다음 각 선언 집합에서 두 번째 선언이 미치는 영향을 설명한다. 위법인 것이 있으면 지시한다.
- (a)
```cpp
int clac (int, int);
int clac (const int, const int);
```
- (b)
```cpp
int get();
double get();
```
- (c)
```cpp
int *reset(int *);
double *reset(double *);
```
## Exercise 6.40
> 다음 선언 중 오류가 있는 것은 어느 것인지 설명한다.
- (a)
```cpp
int ff(int a, int b = 0, int c = 0);
```
- (b)
```cpp
char *init(int ht = 24, int wd, char bckgrnd);
```
## Exercise 6.41
> 다음 호출 중 옳지 않은 것이 있으면 어느 것인지 설명한다. 옳지만 프로그래머의 의도와 일치하지 않아 보이는 것이 있으면 어느 것인지 설명한다.
```cpp
char *init(int ht, int wd = 80, char bckgrnd = ' ');
```
- (a)
```cpp
init();
```
- (b) 
```cpp
init(24,10);
```
- (c)
```cpp
init(14, '*');
```
## Exercise 6.42
> make_plural의 두 번째 매개변수에 기본 인자로 's'를 지정하고, 단어로 사용한 success롸 failure의 단수형과 복수형을 출력해 프로그램을 시험한다.
## Exercise 6.43
> 다음 선언과 정의 중 헤더에 두어야 하는 것과 소스 파일에 두어야 하는 것을 찾고 이유를 설명한다.
- (a)
```cpp
inline bool eq(const BigInt&, const BigInt&) {...}
```
- (b)
```cpp
void putValues(int *arr, int size);
```
## Exercise 6.44
> 6.2.2.절에 있는 isShorter를 inline으로 다시 만든다.
## Exercise 6.45
> 지금까지 연습문제에서 만든 프로그램을 살펴보고 inline으로 정의해야 할지 판단한다. 그렇제 한다면 그렇게 하고, 그렇게 하지 않는다면 왜 inline으로 하면 안 되는지 설명한다.
## Exercise 6.46
> isShorter를 constexpr로 정의할 수 있으면 그렇게 하고, 그렇게 할 수 없으면 이유를 설명한다.
## Exercise 6.47
> 6.3.2.절 연습문제에서 만든, 재귀를 사용해 vector 내용을 출력하는 프로그램을 고쳐 실행 정보를 조건에 따라 출력하도록 한다. 예를 들어 매 호출마다 vector 크기를 출력할 수도 있다. 오류 수정용 기능이 동작하도록 설정한 후 컴파일, 실행하고 기능이 동작하지 않도록 해제한 후 다시 반복한다.
## Exercise 6.48
> 다음 루프에서 하는 일과 assert를 잘 사용했는지 설명한다.
```cpp
string s;
while (cin >> s &&s != sought) { } //빈 본체
assert(cin)
```
## Exercise 6.49
> 후보 함수와 호출 가능 함수가 무엇인지 설명한다.
## Exercise 6.50
> 284쪽에 있는 f에 대한 선언이 있을 때 다음 각 호출에 대해 호출 가능 함수가 있다면 나열한다. 가장 일치하는 함수가 어느 것인지, 호출이 옳지 않다면 일치하는 것이 없는지 또는 왜 호출이 모호한지 설명한다.
- (a) f(2.56, 42)
- (b) f(42)
- (c) f(42, 0)
- (d) f(2.56, 3.14)
## Exercise 6.51
> 네 가지 f 버전을 만든다. 각 함수에서는 구별할 수 있는 메시지를 출력해야 한다. 앞 연습문제 답을 확인하고 답이 옳지 않으면 왜 잘못됐는지 이해할 때까지 이 절을 학습한다.
## Exercise 6.52
> 선언지 다음과 같을 때
```cpp
void manip(int, int);
double dobj;
```
다음 호출에서 각 변환의 순위가 어떻게 되는지 설명한다.
- (a) manip('a', 'z');
- (b) manip(55.4, dobj);
## Exercise 6.53
> 다음 각 선언 집합에서 두 번째 선언이 미치는 영향을 설명하고, 옳지 않은 것이 있으면 어느 것인지 나타낸다.
- (a)
```cpp
int calc(int&, int&);
int calc(const int&, const int&);
```
- (b)
```cpp
int calc(char*, char*(;
int calc(const char*, const char*);
```
- (c)
```cpp
int calc(char*, char*);
int calc(char* const, char* const);
```
## Exercise 6.54
> 두 int 매개변수를 취하고 int를 반환하는 함수에 대한 선언을 만들고, 이 함수 포인터 타입을 요소로 하는 vector를 선언한다.
## Exercise 6.55
> 두 int 값을 더하고 빼며 곱하고 나누는 네 함수를 만든다. 앞 연습문제에서 만든 vector에 이 함수에 대한 포인터를 저장한다.
## Exercise 6.56
> 이 vector의 각 요소를 호출하고 결과를 출력한다.
