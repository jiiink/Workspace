#include <bits/stdc++.h>
using namespace std;

#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;

int main() {

  list<char> mylist = { 's', 'u', 'm', 'm', 'e', 'r', 't', 'i', 'm', 'e', 'z' } ;
  list<char>::iterator where, next ;

  myout("\n mylist[]= ", mylist ) ;
  where = mylist.begin() ;

  cout << "\n 1=> " << *where ;
  cout << "\n 2=> " << *(++where) ;

  advance(where,4) ;     // it++ �� ������ ���� �ʰ� advance�� �� ���ư���.

  cout << "\n 3=> " << *where ;
  cout << "\n 4=> " << *(++where) ;

  //  ���� advance���� jump�� ���� ũ�� �ϱ�, ���� �ɴϱ� ?
  //                   ���� jump���� �ϸ� �Ųٷ� ���� �ɴϱ� ?

  return 0 ;
}
