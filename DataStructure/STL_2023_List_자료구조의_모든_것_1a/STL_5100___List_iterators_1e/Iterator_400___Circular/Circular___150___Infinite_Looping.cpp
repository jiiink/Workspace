#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;


int main () {
  list<int> mylist   = { 1, 2, 3, 4, 5 };
  list<int>::iterator it ;
  int i = 0 ;

  it = mylist.begin() ;

  while( i < 30 ){
    printf("\n %2d = %d", i, *it) ;
    i++ ;  it++ ; // ��� �߰��ϸ� �ڵ������� ���ƿ´�.
    if( it == mylist.end()) {
           it = mylist.begin() ;  cout << "\n ***" ;
    }
  }


  cout << "\n\n *mylist.end()=" <<  *mylist.end() ;
  return 0;
}
