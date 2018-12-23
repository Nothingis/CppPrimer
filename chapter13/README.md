# Chapter 13

## Exercise 13.1
> 복사 생성자는 무엇이고 언제 사용하는지 설명한다.

복사 생성자는 첫 매개변수가 해당 클래스 타입에 대한 참조자이고 추가 매개변수에 기본 값이 있는 생성자이다.

복사 초기화는 일반적으로 복사 생성자를 사용하지만 클래스에 이동 생성자가 있으면 때때로 이동 생성자를 사용한다.

복사 초기화는 다음과 같은 경우에 일어난다.

* `=`를 사용해 변수를 정의
* 객체를 비참조자 타입 매개변수에 인자로 전달할 때
* 비참조가 타입을 반환하는 함수에서 객체를 반환할 때
* 배녈 내 요소난 집합 클래스의 멤버를 중괄호 초기화할 때
* 일부 클래스 타입에서 객체를 할당할 때 (ex. vector의 insert)

## Exercise 13.2
> 다음 선언은 왜 위법인지 설명한다.

```cpp
Sales_data::Sales_data(Sales_data rhs);
```

복사 생성자를 호출하려면 복사 생성자를 사용해 인자를 복사해야 하지만 인자를 복사하려면 복사 생성자가 필요.

## Exercise 13.3
> StrBlob과 StrBlobPtr을 복사할 때 어떤 일이 일어나는지 각각 설명한다.

StrBlob을 복사하면, shared_ptr의 count가 1 증가한다.

StrBlobPtrs를 복사하면, shared_ptr의 count는 증가하지 않는다.

## Exercise 13.4
> Pointer가 public 복사 생성자가 있는 클래스 타입이라고 할 때 다음 프로그램 조각에서 언제 복사 생성자를 사용하는지 찾는다.

```cpp
Point global;
Point foo_bar(Point arg)  // 함수 호출시 인자 복사에 한 번
{
  Point local = arg, *heap = new Point(global);  // 두 번
  *heap = local;
  Point pa[ 4 ] = { local, *heap };  // 두 번
  return *heap;  // return에서 한 번
}
```

## Exercise 13.5
> 개략적인 클래스 모습이 다음과 같을 때 모든 멤버를 복사하는 복사 생성자를 만든다. 이 생성자에서는 새 string을 동적으로 할당하고(12.1.2절) ps 자체를 복사하는 대신 ps에서 가리키는 객체를 복사한다.

```cpp
class HasPtr {
 public:
  HasPtr(const std::string &s = std::string()) :
    ps(new std::string(s)), i(0) { }
 private:
  std::string *ps;
  int i;
};
```

```cpp
HasPtr(const HasPtr& hp) : ps(new std::string(*hp.ps)), i(hp.i) { }
```

## Exercise 13.6
## Exercise 13.7
## Exercise 13.8
## Exercise 13.9
## Exercise 13.10
## Exercise 13.11
## Exercise 13.12
## Exercise 13.13
## Exercise 13.14
## Exercise 13.15
## Exercise 13.16
## Exercise 13.17
## Exercise 13.18
## Exercise 13.19
## Exercise 13.20
## Exercise 13.21
## Exercise 13.22
## Exercise 13.23
## Exercise 13.24
## Exercise 13.25
## Exercise 13.26
## Exercise 13.27
## Exercise 13.28
## Exercise 13.29
## Exercise 13.30
## Exercise 13.31
## Exercise 13.32
## Exercise 13.33
## Exercise 13.34
## Exercise 13.35
## Exercise 13.36
## Exercise 13.37
## Exercise 13.38
## Exercise 13.39
## Exercise 13.40
## Exercise 13.41
## Exercise 13.42
## Exercise 13.43
## Exercise 13.44
## Exercise 13.45
## Exercise 13.46
## Exercise 13.47
## Exercise 13.48
## Exercise 13.49
## Exercise 13.50
## Exercise 13.51
## Exercise 13.52
## Exercise 13.53
## Exercise 13.54
## Exercise 13.55
## Exercise 13.56
## Exercise 13.57
## Exercise 13.58

