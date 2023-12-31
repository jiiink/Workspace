
#include <iostream>
#include <cassert>
#include <list>
#include <algorithm>  // For reverse
#include <string.h>
#define Outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;

/*
������ ����
  reverse( A, X) ; A���� �����ؼ� X������
*/
using namespace std;
template <typename Container>
Container make(const char s[]) {
  return Container(&s[0], &s[strlen(s)]);
}

int main() {

  cout << "����Ʈ�� ���� �Ųٷ� �ϱ� \n" ;
  list<char> list1 = make< list<char> >("Summer Time Killer");
  list<char>::iterator litr ;

  Outlist(" reverse() ������ list1[]= ", list1 ) ;

  auto ihead = list1.begin() ;
  auto itail = list1.end() ;
  reverse( ++ihead, --itail );

  Outlist(" reverse() ������ list1[]= ", list1 ) ;
  cout << "\n *ihead = " << *ihead ;
  cout << "\n *itail = " << *itail ;
  reverse(  list1.begin(), list1.end() );

  Outlist(" �� ������ reverse() ������ list1[]= ", list1 ) ;
  return 0;
}
