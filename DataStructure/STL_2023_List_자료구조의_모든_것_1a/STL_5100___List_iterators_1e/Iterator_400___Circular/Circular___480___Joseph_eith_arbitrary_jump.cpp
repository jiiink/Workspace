// ������ ���ڰ� �ƴ϶� ó���� ������ ������ jump�� �Ѵ�.
// working �Ѵ�. 7��

#include <bits/stdc++.h>
#include <stdio.h>
#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto _w:C) cout << " "<<_w;
using namespace std;

string name ;
int main() {

  int i,j, N=10, Jump=2 ;
  list  <int> myl(N) ;;

  iota( begin( myl ), end(myl), 3) ;
  mout("mout[]= ", myl ) ;
  auto it = myl.begin() ;

  Jump = myl.front() ;  // ���� ���ڿ��� jump�� �Ѵ�.

  while(1) {
    for(i=0 ; i < Jump ; i++){
        it++ ;
        if( it == myl.end()) { cout << " end()*" ; it = myl.begin();  }
    } // end of for()
    printf("\n Jump  *it= %2d", *it) ;
    Jump = *it ;
    it = myl.erase(it) ;
    it--;
    mout(" ==>", myl) ;
    if( myl.size() == 1 ) break ;
  } // end of while( )



} // end of main()





