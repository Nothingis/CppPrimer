# Chapter 3

## Exercise 3.1
> 적절한 using 선언을 사용해 1.4.1절과 2.6.2절 연습문제에서 만든 코드를 다시 만든다.


코드는 아래에

[1.4.1 절](ex3_01a.cpp)

[2.6.2 절](ex3_01b.cpp)

## Exercise 3.2
> 표준 입력에서 한 번에 한 줄씩 읽는 프로그램을 만든다. 이 프로그램을 고쳐 한 번에 한 단어를 읽도록 한다.


코드는 [ex3_2a](ex3_02a.cpp)

코드는 [ex3_2b](ex3_02b.cpp)

## Exercise 3.3
> string 입력 연산자와 getline 함수에서 공백 문자를 처리하는 방법을 설명한다.

`is >> s` : 공백문자로 분리된 데이터를 string s에 넣는다.

`getline(is,s)` : 개행문자로 분리한다. 다른 공백문자는 무시된다.

`getline(is,s,delim)` : `delim`을 통해 분리한다. 다른 공백문자는 무시된다.

## Exercise 3.4
> 두 string을 읽고 서로 같은지 알리는 프로그램을 만든다. 다르면 어느 것이 큰지 알리도록 한다. 이제 string 길이가 같은지, 다르면 어느 것이 더 긴진 알리도록 프로그램을 고친다.


코드는 아래에

[A](ex3_04a.cpp)

[B](ex3_04b.cpp)

## Exercise 3.5
> 표준 입력에서 string을 여럿 읽어 큰 string 하나로 결합한 후 결과를 출력하는 프로그램을 만든다. 다음으로, 각 string 사이에 빈칸을 넣어 출력하도록 프로그램을 고친다.


코드는 아래에

[A](ex3_05a.cpp)

[B](ex3_05b.cpp)

## Exercise 3.6
> 범위 for를 사용해 string 내 모든 문자를 x로 바꾼다.


코드는 [여기](ex3_06.cpp)

## Exercise 3.7
> 앞 연습문제에서 루프 제어 변수를 char 타입으로 정의하면 어떻게 될지 결과를 예상해 보고 프로그램을 변경해 예상이 옳은지 확인한다.

만약 다음과 같이 작성한다면,
```cpp
for (char c : str) c = 'A';
```
char 타입의 변수 c는 str의 문자 하나를 복사해 for 의 명령을 실행한다. 결국 c의 변수는 변경되지만 버려지고 str의 문자는 변함이 없다.

## Exercise 3.8
> 첫 번째 연습문제에서 만든 프로그램을 while과 전통적인 for 루프를 사용해 각각 다시 만든다. 세 가지 방법 중 어느 것이 가장 좋으며 이유는 무엇인지 설명한다.


코드는 [여기](ex3_08.cpp)

## Exercise 3.9
> 다음 프로그램에서는 무엇을 하며 옳은지 설명한다. 옳지 않으면 이유를 설명한다.
```cpp
string s;
cout << s[0] << endl;
```

s에 저장된 첫 번째 문자를 읽고, cout 하는 코드이다. 하지만 s는 현재 비어있다.

## Exercise 3.10
> 구두점을 포함한 문자열을 읽고 구두점을 제외한 내용을 출력하는 프로그램을 만든다.


코드는 [여기](ex3_10.cpp)

## Exercise 3.11
> 다음에 있는 범위 for는 옳은지 확인하고 그렇다면 c의 타입이 무엇인지 설명한다.
```cpp
const string s = "Keep out!";
for (auto &c : s) { /* ... */}
```

정상. c는 const char & 타입이다.

## Exercise 3.12
> 다음 vector 정의에서 오류인 것이 있으면 찾는다. 옳으면 어떤 일을 하는지 설명하고 옳지 않으면 왜 그런지 설명한다.
- (a) vector<vector<int>> ivec;
- (b) vector<string> svec = ivec;
- (c) vector<string> svec(10, "null");

(a): 정상 (띄어써야 될 수도 있다.) vector<int>를 담는 vector.

(b): 오류. ivec과 svec은 다른 타입이다.

(c): 정상. svec은 "null" 문자열을 10개 담고 있다.

## Exercise 3.13
> 다음 vector 각각은 요소가 몇 개이고 각 요소 값은 무엇인지 설명한다.
- (a) vector<int> v1;
- (b) vector<int> v2(10);
- (c) vector<int> v3(10, 42);
- (d) vector<int> v4{10};
- (e) vector<int> v5{10,42};
- (f) vector<string> v6{10};
- (g) vector<string> v7{10, "hi"};

(a): 사이즈는 없고, 값도 없다.
 
(b): 사이즈는 10, 값은 0

(c): 사이즈는 10, 값은 42
 
(d): 사이즈는 1, 값은 10
 
(e): 사이즈는 2, 값은 10과 42

(f): 사이즈는 10, 값은 ""
 
(g): 사이즈는 10, 값은 "hi"
 
## Exercise 3.14
> cin에서 일련의 int를 읽어 vector에 저장하는 프로그램을 만든다.

코드는 [여기](ex3_14.cpp)

## Exercise 3.15
> 앞에서 만든 프로그램을 이번에는 string을 읽어 저장하도록 한다.

코드는 [여기](ex3_15.cpp)

## Exercise 3.16
> 연습문제 3.13에 있는 여러 vector의 크기와 내용을 출력하는 프로그램을 만들고 그 연습문제에 대한 답이 맞았는지 확인한다. 틀렸다면 이유를 이해할 때까지 3.3.1절을 다시 학습한다.

코드는 [여기](ex3_16.cpp)

## Exercise 3.17
> cin에서 일련의 단어를 읽어 vector에 저장한다. 모든 단어를 읽은 후 vector를 처리해 각 단어를 대문자로 바꾼다. 변환한 요소는 한 줄에 여덟 단어씩 출력한다.

코드는 [여기](ex3_17.cpp)

## Exercise 3.18
> 다음 프로그램은 옳은가? 옳지 않으면 어떻게 고칠 수 있는가?
```cpp
vector<int> ivec;
ivec[0] = 42;
```

다음과 같이 고친다.

```cpp
vector<int> ivec{42};
```

## Exercise 3.19
> vector를 정의하고 값이 42인 요소 10개를 지정하는 방법을 세 가지 나열한다. 선호하는 방법이 있으면 어느 것인지 나타내고 이유를 설명한다.


```cpp
vector<int> ivec1(10,42);
vector<int> ivec2{42,42,42,42,42,42,42,42,42,42};
vector<int> ivec3;
for (int i = 0; i != 10; ++i) ivec3.push_back(42);

```

첫 번째가 나아 보인다.

## Exercise 3.20
> 정수 집합을 읽어 vector에 넣고 각 인접 요소 쌍의 합을 출력한다. 프로그램을 고쳐 처음과 마지막 요소 합, 두 번재와 마지막에서 두 번째의 합 순으로 출력한다.

코드는 아래에

[A](ex3_20a.cpp)

[B](ex3_20b.cpp)

## Exercise 3.21
> 3.3.3절 첫 번째 연습문제를 반복자를 사용해 다시 푼다.

코드는 [여기](ex3_21.cpp)

## Exercise 3.22
> text에서 첫 번째 단락을 출력하는 루프를 고쳐 첫 번째 단락에 해당하는 요소를 모두 대문자로 바꾼다. text를 갱신하고 내용을 출력한다.

코드는 [여기](ex3_22.cpp)

## Exercise 3.23
> int 요소가 10개인 vector를 생성하는 프로그램을 만든다. 반복자를 사용해 각 요소별로 현재값의 2배를 대입하고 이 vector를 출력해 확인한다.

코드는 [여기](ex3_23.cpp)

## Exercise 3.24
> 반복자를 사용해 3.3.3절 마지막 연습문제를 다시 푼다.

코드는 아래에

[A](ex3_24a.cpp)

[B](ex3_24b.cpp)

## Exercise 3.25
> 3.3.3절에 있는 점수를 묶는 프로그램을 첨자 대신 반복자를 사용해 다시 만든다.

코드는 [여기](ex3_25.cpp)

## Exercise 3.26
> 129쪽에 있는 이진 검색 프로그램에서 mid = (beg + end) / 2 대신 mid = beg + (end - beg)/2로 쓴 이유는 무엇인가?

반복자는 더하거나 뺄 때 항상 범위 내에 있어야 한다.

이 경우 (beg + end) 연산을 진행할 때 범위를 넘기게 된다.

## Exercise 3.27
> txt_size는 인자가 없으며 int값을 반환하는 함수라고 가정할 때 다음 정의 중 옳지 않은 것을 찾고 이유를 설명한다.

```cpp
unsigned buf_size = 1024;
```
- (a) int ia[buf_size];
- (b) int ia[4 * 7 - 14];
- (c) int ia[txt_size()];
- (d) char st[11] = "fundamental";

(a) 오류. 상수 표현식을 사용해야 한다.

(b) 타당

(c) 오류. 상수 표현식을 사용해야 한다.

(d) size는 12여야 한다.

## Exercise 3.28
> 다음 배열에서 값은 무엇인지 설명한다.
```cpp
string sa[10];
int ia[10];
int main() {
	string sa2[10];
	int ia2[10];
}
```

sa는 빈 문자열

ia는 모두 0

sa2는 빈 문자열

ia2는 정의되지 않음

## Exercise 3.29
> vector 대신 배열을 사용할 때 불리한 점 몇 가지를 나열한다.

사이즈가 컴파일 타임에 정해진다.

여러가지 API가 부족(없다)

## Exercise 3.30
> 다음 코드에서 색인 오류를 확인한다.
```cpp
constexpr size_t array_size = 10;
int ia[array_size];
for (size_t ix = 1; ix <= array_size; ++ix)
	ia[ix] = ix;
```

인덱스는 0 - 9 까지다.

## Exercise 3.31
> int가 10개인 배열을 정의하는 프로그램을 만든다. 각 요소에는 배열 내 위치와 같은 값이 지정한다.

```cpp
int arr[10];
for (int i = 0; i < 10; ++i) arr[i] = i;
```

## Exercise 3.32
> 앞 연습문제에서 정의한 배열을 다른 배열에 복사해 넣는다. vector를 사용해 이 프로그램을 다시 만든다.

```cpp
int arr[10];
for (int i = 0; i < 10; ++i) arr[i] = i;
int arr2[10];
for (int i = 0; i < 10; ++i) arr2[i] = arr[i];

vector<int> v(10);
for (int i = 0; i != 10; ++i) v[i] = arr[i];
vector<int> v2(10);
```

## Exercise 3.33
> 134쪽 프로그램에서 score 배열을 초기화 하지 않으면 어떻게 되는지 설명한다.

정의되지 않은 값

## Exercise 3.34
> p1과 p2에서 같은 배열의 요소를 가리킬 때 다음 코드에서 하는 일은 무엇인지 설명한다. 이 코드가 위법이 되는 p1 또는 p2 값이 있는지 확인한다.
```cpp
p1 += p2 - p1;
```

p1과 p2가 같은 배열의 요소를 가리키게 된다.

p1과 p2가 유효값이라면 코드는 유효하다.

## Exercise 3.35
> 포인터를 사용해 배열 내 요소를 0으로 설정하는 프로그램을 만든다.

코드는 [여기](ex3_35.cpp)

## Exercise 3.36
> 두 배열이 같은지 비교하는 프로그램을 만든다. 마찬가지로 두 vector에 대해 비교하는 프로그램도 만든다.


코드는 [여기](ex3_36.cpp)

## Exercise 3.37
> 다음 코드에서 하는 일을 설명한다.
```cpp
const char ca[] = {'h', 'e', 'l', 'l', 'o'};
const char *cp = ca;
while (*cp) {
	cout << *cp << endl;
	++cp;
}
```

ca에 있는 배열의 요소를 출력한다.

cp가 마지막 \n까지 while문을 수행하고, 이후에는 정의되지 않은 행동이지만 while문을 정상적으로 탈출한다.

## Exercise 3.38
> 이 절에서 두 포인터를 더하는것은 위법일 뿐만 아니라 의미도 없다고 설명했다. 두 포인터를 더하는 것이 왜 의미가 없는지 설명한다.

포인터끼리의 연산은 주소값을 연산하는 것이다. 두 포인터를 빼는 것은 논리적으로 의미가 있으나, 포인터 끼리의 합은 의미가 없을 뿐더러 예기치 못한 행동을 유발할 수도 있다.

## Exercise 3.39
> 두 string을 비교하는 프로그램을 만든다. 이제 두 C 형식 문자열 값을 비교하는 프로그램을 만든다.

코드는 [여기](ex3_39.cpp)

## Exercise 3.40
> 문자열 상수로 초기화한 두 문자 배열을 정의하는 프로그램을 만든다. 이제 두 배열을 연결한 내용을 담을 세 번째 문자 배열을 정의하고 strcpy와 strcat를 사용해 두 배열을 세 번째에 복사해 넣는다.


코드는 [여기](ex3_40.cpp)

## Exercise 3.41
> int 배열로 vector를 초기화하는 프로그램을 만든다.

```cpp
int arr[] = { 0, 1, 2, 3, 4 };
vector<int> v(begin(arr), end(arr));
```

## Exercise 3.42
> int의 vector를 복사해 int 배열에 넣는 프로그램을 만든다.

``cpp
vector<int> v{ 0, 1, 2, 3, 4 };
int arr[5];

for (int i = 0; i != v.size(); ++i) arr[i] = v[i];
```

## Exercise 3.43
> ia의 요소를 출력하는 프로그램을 세 가지 다른 버전으로 만든다. 하나는 범위 for를 사용해 반복을 처리하고, 다른 둘은 일반적인 for 루프에서 각각 첨자와 포인터를 사용한다. 세 프로그램 모두 타입을 직접 써야 한다. 즉 코드를 간단히 하기 위해 타입 별칭이나 auto, decltype을 사용하지 않는다.

코드는 [여기](ex3_43.cpp)

## Exercise 3.44
> 앞 연습문제에서 만든 프로그램을 고쳐 루프 제어 변수 타입에 타입 별칭을 사용하도록 한다.

코드는 [여기](ex3_44.cpp)

## Exercise 3.45
> 프로그램을 다시 고쳐 이번에는 auto를 사용한다.

코드는 [여기](ex3_45.cpp)
