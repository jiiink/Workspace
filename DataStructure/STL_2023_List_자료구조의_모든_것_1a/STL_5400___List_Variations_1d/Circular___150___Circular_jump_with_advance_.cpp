#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n >> " << msg<<": " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main () {
  int i, jump, N = 30, c = 30 ;

  list<int> mylist( N ) ;
  iota( begin(mylist), end(mylist), 1) ;
  auto it = mylist.begin();

  Outlist("�ʱ� ����Ʈ:", mylist ) ;
  cout << "\n ������ �ڷ� kĭ �Űܰ��� ���� " ;
  jump = 4 ;
  while( c-- ) {

     cout << "\n c=" << setw(3) << c << "   *it = " << setw(3) <<*it ;
     advance(it, jump ) ;
     if (it == mylist.end() ) it++ ;
  }
  cout << "\n End of experiment \n\n" ;
} // end of main()
