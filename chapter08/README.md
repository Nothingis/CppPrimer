# Chapter 8

## Exercise 8.1
> istream&를 취하고 반환하는 함수를 만든다. 이 함수에서는 파일 끝에 도달할 때까지 스트림을 읽고 그 내용을 표준 출력으로 내보낸다. 스트림을 반환하기 전에 해당 스트림이 유효하도록 재설정한다.

```cpp
std::istream& func(std::istream &is) {
  std::string str;
  while (is >> str)
    std::cout << str << std::endl;
  is.clear();
  return is;
}

```

## Exercise 8.2
> 앞 연습문제에서 만든 함수에 인자로 cin을 전달하며 호출해 시험한다.

코드는 [여기](ex8_02.cc)

## Exercise 8.3
> 어떤 경우에 다음 while을 종료할지 설명한다.
```cpp
while (cin >> i) /* ... */
```

cin.fail() == true일 때. 즉, badbit or failbit가 켜져있을 때.

## Exercise 8.4
> 입력 파일을 열고 내용을 읽어 string의 vector에 넣는 함수를 만든다. 이때 한 줄을 vector 요소 하나로 저장한다.

```cpp
void Func(const std::string& file_name, std::vector<std::string>& v) {
  ifstream ifs(file_name);
  if (ifs) {
    std::string line;
    wile (std::getline(ifs, line))
      v.push_back(buf);
  }
}
```
## Exercise 8.5
> 앞 연습문제에서 만든 프로그램을 고쳐 각 단어를 요소로 저장하도록 한다.

```cpp
void Func(const std::string& file_name, std::vector<std::string>& v) {
  ifstream ifs(file_name);
  if (ifs) {
    std::string word;
    wile (ifs >> word))
      v.push_back(buf);
  }
}
```
## Exercise 8.6
> 7.1.1절에 있는 서점 프로그램을 고쳐 파일에서 거래 내용을 읽도록 한다. 그 파일 이름은 main 함수에 대한 인자로 전달한다(6.2.5절)

코드는 [여기](ex8_06.cc)

## Exercise 8.7
> 이전 절에 있는 서점 프로그램을 고쳐 파일에 출력하도록 한다. 출력 파일 이름은 main의 두 번째 인자로 전달한다.

코드는 [여기](ex8_07.cc)

## Exercise 8.8
> 앞 연습문제에서 만든 프로그램을 고쳐 출력 내용을 지정한 파일에 추가하도록 한다. 같은 출력 파일에 대해 프로그램을 적어도 두 번 실행해 데이터를 보존하는지 확인한다.

코드는 [여기](ex8_08.cc)

## Exercise 8.9
> 8.1.2절 첫 번째 연습문제에서 만든 함수를 사용해 istringstream 객체 내용을 출력한다.

코드는 [여기](ex8_09.cc)

## Exercise 8.10
> 파일에서 읽은 각 줄을 `vector<string>`에 저장하는 프로그램을 만든다. 이제 istringstream을 사용해 vector의 각 요소에서 한 번에 한 단어씩 읽도록 한다.

코드는 [여기](ex8_10.cc)

## Exercise 8.11
> 이 절에서 예로 든 프로그램에서는 istringstream 객체를 바깥쪽 while 루프 안에서 정의한다. record를 이 루프 바깥에서 정의하려면 어떻게 바꿔야 하는가? record 정의를 그 while 밖으로 옮기도록 프로그램을 다시 만들고 생각한 것이 맞는지 확인한다.

코드는 [여기](ex8_11.cc)

## Exercise 8.12
> PersonInfo에서 클래스 내 초기 값을 사용하지 않은 이유가 무엇인지 설명한다.

런타임에 결정되는(사용자의 입력) 정보를 가지고 있어야 되므로.

## Exercise 8.13
> 이 절에 있는 전화번호 프로그램을 다시 만들어 cin 대신 명명한 파일에서 읽도록 한다.

코드는 [여기](ex8_13.cc)

## Exercise 8.14
> entry와 nums를 const auto &로 선언한 이유를 설명한다.

class 타입이고, 변수의 값을 수정하지 않으므로 `const&`가 더 유용하다.
