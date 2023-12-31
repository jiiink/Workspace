#include <iostream>
using namespace std ;

template< typename T >
class TestP {
  public:
  void Add()   {
    cout << "�Ϲ� ���ø�." << endl;
  }
};

template< typename T > // T�� T*�� �κ� ����ȭ
class TestP<T*> {
  public:
  void Add() {
    cout << "�����͸� ����� �κ� ����ȭ ���ø�." << endl;
  }
};

int main() {

  TestP<int> test1;
  test1.Add();
  TestP<int*> test2;
  test2.Add();
}
