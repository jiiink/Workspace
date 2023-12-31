//  list�� ���� ��ġ�� ���� �� argument�� pass�� �� �ִ�.
// �Լ� C++11������ ���� �մϴ�. compile option�� �����ϼ�.

// insert : copies objects into the vector.
// emplace : construct them inside of the vector.

#include <bits/stdc++.h>
using namespace std;


int main () {
  list< pair<int,char> > mylist;
  list< pair<int,char> > ::iterator  it ;

  mylist.emplace ( mylist.begin(), 10, 'x' );  //���� pair�� ����� �ش�.
  mylist.emplace ( mylist.begin(), 12, 'y' );  // insert�ϸ� p ��ü�� �����Ѵ�. ���� �ƴ϶�
  mylist.emplace ( mylist.begin(), 34, 'x' );
  mylist.emplace ( mylist.end()  ,  4, 'a' );
  mylist.emplace ( mylist.end()  , 45, 'b' );
  mylist.emplace ( mylist.end()  , 16, 'c' );

  it = mylist.end() ;
  it-- ;
  it-- ;
  mylist.emplace ( mylist.end()  , -99, 'Z' );

  it = mylist.end();
  it-- ;
  mylist.emplace ( it  , 700, 'w' );

  cout << "mylist contains:";
  for (auto& x: mylist)
    cout << "\n (" << x.first << "," << x.second << ")";

  cout << '\n';
  return 0;
}



