#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n " << msg<<" : \n" ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main () {
  list<int> mylist = { 33, 44, 55, 66, 77, 88 };

  auto itb = mylist.begin() ;
  auto ite = mylist.end  () ;

  Outlist("Beginning : ", mylist) ;

  itb= next( itb ) ;  // �� ĭ ������, previous
  ite= prev( ite ) ;  // �� ĭ �ڷ�, previous

  cout << "\n *itb = " << *itb ;
  cout << "\n *ite = " << *ite ;

  return 0;
}  // end of main()
