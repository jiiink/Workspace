
#include <bits/stdc++.h>
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;
using namespace std;

int main() {

  list  <int> my = { 34, 5, 11, 65, 31,  9, 2, 56, 80, 51, 12, 86} ;
  vector<int> py = { 54, 3, 25, 37, 69, 52, 7, 18, 70, 32,  6, 10} ;
  deque <int> dy = { 54, 3, 25, 37, 69, 52, 7, 18, 70, 32,  6, 10} ;
  myout("my[] Before:", my) ;
  my.sort() ;
  myout("my[] After :", my) ;
  // sort( my.begin(), my.end()) ;  List�� algorithm/sort�� ����ϸ� �ȵȴ�. List.sort( )
  // ���� sort( )�� container�� �⺻������ random access[] ������ ����.
  // sort( my.begin(), my.end() ) ; // error
  sort(py.begin(), py.end());
  myout("py[] After :", py) ;

  sort( dy.begin(), dy.end() ) ;
  myout("dy[] After :", py) ;
  return 0;
}
