#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std;


int main() {
 int i, num ;

 vector <int>   intvec { 12, 23, 34, 45, 56, 67, 78, 89, 90, -44 };

 int a =9 , b = 10 ;
 swap(a,b);
 cout << "\n a,b = " << a << ", " << b ;

 allout("1. ó�� intvec[ ] = ", intvec ) ;
 swap( intvec.front(), intvec.back()) ;
 allout("2. swap( )���� intvec[ ] = ", intvec ) ;
 intvec.back()= 98765 ;
 allout("3. assign ���� intvec[ ] = ", intvec ) ;

 // ��� �ֱ�
 int m ;
 m = (int) ( (intvec.end()-intvec.begin())/2 ) ;
 cout << "\n m = "<< m ;
 *(intvec.end()-m) = 0 ;
  allout("4. assign ���� intvec[ ] = ", intvec ) ;

} // end of main()

