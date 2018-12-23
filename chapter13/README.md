# Chapter 13

## Exercise 13.1
> ���� �����ڴ� �����̰� ���� ����ϴ��� �����Ѵ�.

���� �����ڴ� ù �Ű������� �ش� Ŭ���� Ÿ�Կ� ���� �������̰� �߰� �Ű������� �⺻ ���� �ִ� �������̴�.

���� �ʱ�ȭ�� �Ϲ������� ���� �����ڸ� ��������� Ŭ������ �̵� �����ڰ� ������ ������ �̵� �����ڸ� ����Ѵ�.

���� �ʱ�ȭ�� ������ ���� ��쿡 �Ͼ��.

* `=`�� ����� ������ ����
* ��ü�� �������� Ÿ�� �Ű������� ���ڷ� ������ ��
* �������� Ÿ���� ��ȯ�ϴ� �Լ����� ��ü�� ��ȯ�� ��
* ��� �� ��ҳ� ���� Ŭ������ ����� �߰�ȣ �ʱ�ȭ�� ��
* �Ϻ� Ŭ���� Ÿ�Կ��� ��ü�� �Ҵ��� �� (ex. vector�� insert)

## Exercise 13.2
> ���� ������ �� �������� �����Ѵ�.

```cpp
Sales_data::Sales_data(Sales_data rhs);
```

���� �����ڸ� ȣ���Ϸ��� ���� �����ڸ� ����� ���ڸ� �����ؾ� ������ ���ڸ� �����Ϸ��� ���� �����ڰ� �ʿ�.

## Exercise 13.3
> StrBlob�� StrBlobPtr�� ������ �� � ���� �Ͼ���� ���� �����Ѵ�.

StrBlob�� �����ϸ�, shared_ptr�� count�� 1 �����Ѵ�.

StrBlobPtrs�� �����ϸ�, shared_ptr�� count�� �������� �ʴ´�.

## Exercise 13.4
> Pointer�� public ���� �����ڰ� �ִ� Ŭ���� Ÿ���̶�� �� �� ���� ���α׷� �������� ���� ���� �����ڸ� ����ϴ��� ã�´�.

```cpp
Point global;
Point foo_bar(Point arg)  // �Լ� ȣ��� ���� ���翡 �� ��
{
  Point local = arg, *heap = new Point(global);  // �� ��
  *heap = local;
  Point pa[ 4 ] = { local, *heap };  // �� ��
  return *heap;  // return���� �� ��
}
```

## Exercise 13.5
> �������� Ŭ���� ����� ������ ���� �� ��� ����� �����ϴ� ���� �����ڸ� �����. �� �����ڿ����� �� string�� �������� �Ҵ��ϰ�(12.1.2��) ps ��ü�� �����ϴ� ��� ps���� ����Ű�� ��ü�� �����Ѵ�.

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

