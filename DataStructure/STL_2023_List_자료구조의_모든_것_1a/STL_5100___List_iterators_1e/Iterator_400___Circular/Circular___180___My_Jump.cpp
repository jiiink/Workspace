#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n >> " << msg<<": " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main () {
  int i, jump, N = 30 ;

  list<int> mylist( N ) ;
  iota( begin(mylist), end(mylist), 1) ;
  auto it = mylist.begin();

  Outlist("�ʱ� ����Ʈ:", mylist ) ;
  cout << "\n ������ �ڷ� kĭ �Űܰ��� ���� " ;

  while( 1 ) {
    cout << "\n Type jump steps (0=quit): " ;
    cin >> jump ;
    if( jump == 0 ) break ;
    if ( jump > 0 ) {
        for(i=0 ; i < jump; i++ ){
          it++ ;
          if( it == mylist.end()) it = mylist.begin() ;
        }
    } else { // jump�� ����, backword jump, �ڷ� ���ư���
        for(i=0 ; i < -jump; i++ ){

        if( it == mylist.begin()) { it = mylist.end() ; it-- ;}
        else it-- ;
        }
    }

    cout << " Current = " << *it ;
  }
  cout << "\n End of experiment \n\n" ;
} // end of main()
