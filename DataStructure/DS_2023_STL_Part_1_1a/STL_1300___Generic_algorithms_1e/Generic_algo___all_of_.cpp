
#include <iostream>     // cout
#include <algorithm>    // STL algorithm�� ��� l_of
#include <array>        // STL array
#include <list>

using namespace std ;

// int foo[8]

int que(int s){
}

int main () {

  array <int,8> foo = {3,5,7,11,14, 17,19,23}; // int foo[8] = { }
  list <string> soo = {"Summer", "TimeKiller", "Banana Boat", "Compiler" };

  // ������ ���Ұ� ��� predicate true�̸� ��ü�� true, ���� �˻�� Ȧ��
  if ( all_of(foo.begin(), foo.end(), [](int i){return i%2;}) ) // �̸����� �Լ� ����. functional code
           cout << " ��� ���ڴ� Ȧ���Դϴ�. \n";
             else cout << "���ڿ� ¦���� ���� �ֽ��ϴ�. " ;

  if ( all_of(soo.begin(), soo.end(), [](string w){ if ( w.size() > 7 ) return 1; else 0;}) )
          cout << " ���ڿ��� ���̰� ��� 7 �̻� " ;
  else    cout << " ���ڿ��� ���̰� ��� 7 �̻��� �ƴմϴ�. " ;


  return 0;
}
