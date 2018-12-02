# Chapter 8

## Exercise 9.1
> vector, deque, list 중 다음 프로그램 작업에 가장 적합한 것을 찾고 합리적인 이유를 설명한다. 선택한 컨테이너에 대한 특별한 이유가 없다면 왜 그런지 설명한다.
(a) 단어를 고정된 수만큼 일고 알파벳순으로 컨테이너에 삽입한다. 이런 문제에는 연관 컨테이너가 더 나음을 다음 장에서 살펴본다.


(b) 몇 개인지 모르는 단어를 읽고 새 단어는 항상 끝에 삽입하며 제거는 처음에서 한다.


(c) 몇 개인지 모르는 정수를 파일에서 읽는다. 그 숫자를 정렬한 다음 표준 출력으로 출력한다.

## Exercise 9.2
> int를 담는 deque를 요소로 하는 list를 정의한다.
## Exercise 9.3
> 반복자 범위를 형성하는 반복자에 대한 조건은 무엇인지 설명한다.
## Exercise 9.4
> `vector<int>`와 int 값에 대한 반복자 쌍을 취하는 함수를 만든다. vector 범위에서 지정한 int 값을 찾고, 존재 여부를 나타내는 bool을 반환하도록 한다.
## Exercise 9.5
> 앞에서 만든 프로그램에서 요청한 요소에 대한 반복자를 반환하도록 다시 만든다. 프로그램에서는 요소가 없는 경우도 반드시 처리해야 함에 주의한다.
## Exercise 9.6
> 다음 프로그램에서 잘못된 것은 무엇인지, 어떻게 바로 잡을 수 있는지 설명한다.

```cpp
list<int> lst1;
list<int>::iterator iter1 = lst1.begin(), iter2 = lst1.end();
while (iter1 < iter2) /* ... */
```

## Exercise 9.7
> int의 vector에 색인으로 어떤 타입을 사용해야 하는지 설명한다.
## Exercise 9.8
> string의 list에 속한 요소를 읽기 위해 어떤 타입을 사용해야 하는지 설명한다. 또한 그 요소에 기록하려면 어떤 타입을 사용해야 하는지 설명한다.
## Exercise 9.9
> begin과 cbegin 함수 사이의 차이를 설명한다.
## Exercise 9.10
> 다음 네 객체의 타입이 무엇인지 설명한다.

```cpp
vector<int> v1;
const vector<int> v2;
auto it1 = v1.begin(), it2 = v2.begin();
auto it3 = v1.cbegin(), it4 = v2.cbegin();
```

## Exercise 9.11
> vector를 생성하고 초기화하는 여섯 가지 방법 각각에 대해 예를 보이고 각 vector에서 있는 값이 무엇인지 설명한다.
## Exercise 9.12
> 복사할 컨테이너를 취하는 생성자와 두 반복자를 취하는 생성자 사이에 차이를 설명한다.
## Exercise 9.13
> `list<int>`로 `vector<double>`을 초기화하는 방법을 설명한다. `vector<int>를 사용해 초기화하는 방법도 설명하고 코드를 만들어 답을 확인한다.
## Exercise 9.14
> C 형식 문자열에 대한 `char*` 포인터의 list를 string의 vector에 대입하는 프로그램을 만든다.
## Exercise 9.15
> 두 vector<int>가 같은지 확인하는 프로그램을 만든다.
## Exercise 9.16
> 앞 연습문제와 같은 프로그램을 만들되 이번에는 list<int>의 요소를 vector<int>와 비교한다.
## Exercise 9.17
> c1과 c2가 컨테이너라면 c1과 c2 타입을 다음처럼 사용할 때 어떤 제약이 있을지 설명한다.

```cpp
if (c1 < c2)
```

## Exercise 9.18
> 표준 입력에서 일련의 string을 읽어 deque에 넣는 프로그램을 만든다. 반복자를 사용해 deque의 요소를 출력하는 루프를 만든다.
## Exercise 9.19
> 앞 연습문제에서 만든 프로그램에서 list를 사용해 다시 만든다. 바꿔야 할 내용을 나열한다.
## Exercise 9.20
> `list<int>`에서 요소를 복사해 두 deque에 넣는 프로그램을 만든다. 짝수 요소는 deque 하나에, 홀수 요소는 다른 하나에 넣는다.
## Exercise 9.21
> 408쪽에서, list에 요소를 추가하기 위해 insert 반환 값을 사용한 루프에서 그 대신 vector에 삽입한다면 어떻게 될지 설명한다.
## Exercise 9.22
> iv가 int의 vector라고 할 때 다음 프로그램에서 잘못된 것이 무엇인지, 그 문제를 어떻게 바로 잡을 수 있는지 설명한다.

```cpp
vecot<int>::iterator iter = iv.begin(),
                     mid = iv.begin() + iv.size() / 2;
while (iter != mid)
  if (*iter == some_val)
    iv.insert(iter, 2 * some_val);
```

## Exercise 9.23
> 401쪽에 있는 이 절 첫 프로그램에서 c.size()가 1 이면 val, val2, val3, val4 값이 무엇인지 설명한다.
## Exercise 9.24
> at, 첨자 연산자, front, begin을 사용해 vector에서 첫 요소를 가져오는 프로그램을 만든다. 빈 vector에 대해 프로그램을 시험해 본다.
## Exercise 9.25
> 413쪽에 있는 요소 범위를 삭제하는 프로그램에서 elem1과 elem2가 같으면 어떻게 되는지 설명한다. elem2 또는 elem1과 elem2 모두 끝 지난 반복자일 때는 어떻게 되는지 설명한다.
## Exercise 9.26
> 다음 ia 정의를 사용해 ia를 vector와 list에 복사해 넣는다. 반복자를 하나 취하는 erase 형식을 사용해 list에서는 홀수 값, vector에서는 짝수 값인 요소를 제거한다.

```cpp
int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
```

## Exercise 9.27
> `forward_list<int>`에서 홀수 값 요소를 찾고 제거하는 프로그램을 만든다.
## Exercise 9.28
> `forward_list<string>` 하나와 string 인자 둘을 더 취하는 함수를 만든다.이 함수에서는 첫 번째 string을 찾아 이 첫번째 바로 다음에 두 번째를 삽입해야 한다. 첫 번째 string을 못 찾으면 목록 끝에 두 번째 string을 삽입한다.
## Exercise 9.29
> vec에 요소가 25개 있을 때 vec.resize(100)을 하면 어떻게 될지 설명한다. 그다음 vec.resize(10)을 하면 어떻게 될지 설명한다.
## Exercise 9.30
> 요소 타입에 인자를 하나 취하는 resize 버전을 사용할 때 제약이 있다면 무엇인지 설명한다.
## Exercise 9.31
> 짝수 값 요소를 제거하고 홀수 값 요소를 중복하는, 418쪽에 있는 프로그램은 list나 forward_list에서는 작동하지 않는다. 이유를 설명하고 이러한 타입에서도 잘 작동하도록 프로그램을 고친다.
## Exercise 9.32
> 418쪽에 있는 프로그램에서 insert를 다음처럼 호출하는 것이 적법한지 설명한다.아니라면 왜 그런지 설명한다.

```cpp
iter = v1.insert(iter, *iter++);
```
## Exercise 9.33
> 이 절 마지막 예에서 insert 결과를 begin에 대입하지 않으면 어떻게 되는지 설명한다. 이 대입을 빠뜨린 프로그램을 만들어 예상이 맞는지 확인한다. 
## Exercise 9.34
> vi를 짝수와 홀수 값을 포함한 int의 컨테이너로 가정하고 다음 푸르 행동을 예상한다.루프를 분석한 후 프로그램을 만들어 예상이 맞는지 확인한다.

```cpp
iter = v1.begin();
while iter != vi.end())
  if (*iter % 2)
    iter = v1.insert(iter, *iter);
  ++iter;
```

## Exercise 9.35
> vector에서 capacity와 size 사이에 차이를 설명한다. 
## Exercise 9.36
> 컨테이너에서 capacity가 size보다 작을 수 있을 지 설명한다.
## Exercise 9.37
> list와 array에서는 왜 capacity 수가 없는지 설명한다.
## Exercise 9.38
> 사용하는 라이브러리에서 vector가 어떻게 성장하는지 확인하는 프로그램을 만든다.
## Exercise 9.39
> 다음 프로그램 조각에서 무엇을 하는지 설명한다.

```cpp
vector<string> svec;
svec.reserve(1024);
string word;
while (cin >> word)
  svec.push_back(word);
svec.resize(sevec.size() + svec.size() / 2);
```

## Exercise 9.40
> 앞 연습문제 프로그램에서 단어를 256개 읽는다면 resize 후 capacity가 어떻게 될지 설명한다. 또한 512, 1000, 1048개 읽을 때는 어떻게 될지 설명한다.
## Exercise 9.41
> `vector<char>`로 string을 초기화하는 프로그램을 만든다.
## Exercise 9.42
> 한 번에 한 문자씩 읽어 string에 넣으려 하는데 적어도 문자를 100개 읽어야 한다면, 프로그램 성능을 어떻게 향상시킬 수 있을지 설명한다.
## Exercise 9.43
> 세 string, 즉 s, oldVal, newVal을 취하는 함수를 만든다. 반복자를 사용해 insert와 erase 함수에서는 s 내에 있는 모든 oldVal 내용을 newVal로 교체한다. 만든 함수를 'tho'는 'though', 'thru'는 'through'와 같은 일반적인 약어를 대체하는 데 사용해 확인한다.
## Exercise 9.44
> 색인과 replace를 사용해 앞에서 만든 함수를 다시 만든다.
## Exercise 9.45
> 이름을 나타내는 string과 'Mr.' 또는 'Ms.'와 같은 경칭, 'Jr.' 또는 'lll'과 같은 호칭을 나타내는 다른 두 string을 취하는 함수를 만든다. 반복자와 insert, append 함수를 사용해 경칭과 호칭을 지정한 이름에 추가한 새 string을 생성 후 반환한다.
## Exercise 9.46
> string을 관리하기 위한 위치와 길이를 사용해 앞 연습문제에서 만든 프로그램을 다시 만든다. 이번에는 insert 함수만 사용한다.
## Exercise 9.47
> string "ab2c3d7R4E6"에서 수치 문자 각각을 찾은 다음 알파벳 문자 각각을 찾는 프로그램을 만든다. 이 프로그램을 두 버전으로 만드는데, 첫 번째는 find_first_of, 두 번째는 find_first_not_of를 사용한다.
## Exercise 9.48
> 432쪽에 있는 name과 numbers 정의를 사용해 numbers.find(name)에서 반환하는 값이 무엇인지 설명한다.
## Exercise 9.49
> d나 f처럼 가운뎃줄 위로 확장한 부분이 있는 문자에는 올릭획(ascender)이 있으며, p나 g처럼 가운뎃줄 아래로 확장한 부분이 있는 문자에는 내림획(descender)이 있다. 많은 단어를 포함하고 있는 파일을 읽어 올림획과 내림획이 모두 없는 단어 중 가장 긴 것을 보고하는 프로그램을 만든다.
## Exercise 9.50
> 정수 값으 나타내는 문자열을 요소로 하는 `vector<string>`을 처리하는 프로그램을 만든다. 이 vector의 모든 요소 합을 계산한다. 프로그램을 변경해 부동소수점 값을 나타내는 string의 합을 계산한다.
## Exercise 9.51
> 연, 월, 일을 나타내는 세 unsigned를 멤버로 하는 클래스를 만든다. 날짜를 나타내는 string을 취하는 생성자를 만드는데, 이 생성자에서는 January 1, 1900, 1/1/1900, Jan 1, 1900 등 과 같이 다양한 날짜 형식을 처리한다.
## Exercise 9.52
> stack을 사용해 괄호로 둘러싼 표현식을 처리한다. 열린 괄호를 만나면 이를 기록해 둔다. 열린 괄호 후에 닫힌 괄호를 만나면 stack에서 열린 괄호를 포함해 닫힌 괄호까지 요소를 pop으로 제거한다. push로 stack에 값을 넣어 괄호로 둘러싼 표현식을 대체했음을 나타낸다.
