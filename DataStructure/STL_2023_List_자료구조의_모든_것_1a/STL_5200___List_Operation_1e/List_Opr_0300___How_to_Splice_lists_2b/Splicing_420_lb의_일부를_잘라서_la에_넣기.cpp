#include <bits/stdc++.h>
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;
using namespace std;

int main () {
  list<int> la = { 1,   2,  3, 4} ;
  list<int> lb = { 55, 56, 57, 58, 59, 60 };

  auto it = la.begin();
  ++it;  // points to 2

  myout("Before la[]= ", la ) ;
  myout("Before lb[]= ", lb ) ;

  auto itlbb = lb.begin();
  auto itlbe = lb.end();
  advance(itlbb,  1 ) ;
  advance(itlbe, -1 ) ;

  //  lb�� [itlbb, itlbe]�� ���� la�� it�� �־���.. ��
  la.splice (it, lb, itlbb, itlbe );

  cout << "\n\n after la.splice (it, itlbb, itlbe ) \n\n" ;

  myout("After la[]= ", la ) ;
  myout("After lb[]= ", lb ) ;


  return 0;
}  // end of main( )
