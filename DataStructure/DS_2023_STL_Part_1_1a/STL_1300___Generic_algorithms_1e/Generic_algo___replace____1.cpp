#include <iostream>     // std::cout
#include <algorithm>    // std::replace
#include <vector>       // std::vector
#include <array>
using namespace std ;

#define vout(msg,x)    cout<<"\n"<<msg; for(auto s:x) cout << "  " << s ;

int main () {
  int myints[] = { 10, 20, 30, 30, 20, 10, 10, 20 };
  array <int, 8>  myarr {2,2,3,2,5,6,7,8} ;
  vector<int> myvector (myints, myints+8);            // 10 20 30 30 20 10 10 20

  vout(" replace �� myvector[]=", myvector ) ;

  cout << "\n 20�� 99�� �ٲ�." ;

  replace (myvector.begin(), myvector.end(), 20, 99); // 10 99 30 30 99 10 10 99
  replace ( myarr.begin() , myarr.end(), 2, -100) ;

  vout(" replace �� myvector[]=", myvector ) ;
  vout(" replace �� myarr[]=", myarr ) ;


  return 0;
}
