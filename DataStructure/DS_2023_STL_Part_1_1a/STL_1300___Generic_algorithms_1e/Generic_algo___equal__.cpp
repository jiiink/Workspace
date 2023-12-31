// equal algorithm example
#include <iostream>     // cout
#include <algorithm>    // equal
#include <vector>       // vector

# �� �����̳��� ������ ������� �����Ѱ� ?

using namespace std ;

bool mypredicate (int i, int j) {
  return (i==j);
}

int main () {
  int myints[] = {20,40,60,80,100};               //   myints�� ���� 20 40 60 80 100
  vector<int>myvector (myints,myints+5);     // myvector�� ���� 20 40 60 80 100

  if ( equal (myvector.begin(), myvector.end(), myints) )
    cout << "�� ������ ���Ҵ� �����ϴ�.\n";
  else
    cout << "�� ������ ���Ҵ� ���� �ʽ��ϴ�.\n";

  myvector[3]=81;                                 // myvector�� [3] ���Ҵ� 81

  // using predicate comparison:
  if ( equal (myvector.begin(), myvector.end(), myints, mypredicate) )
    cout << "�� ������ ���Ҵ� �����ϴ�.\n";
  else
    cout << "�� ������ ���Ҵ� ���� �ʽ��ϴ�.\n";

  return 0;
}
