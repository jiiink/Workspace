#include <bits/stdc++.h>
using namespace std;


int main() {
 int i, num ;

 vector <int>   intvec { 34, 23, 99, -100, 1, 3, 55 };
 vector <int>   onevec { 2021 };
 vector <int>   emptyvec {} ;

 cout << "\n intvec.front( )  = " << intvec.front()  ;
 cout << "\n intvec.back( ) = "   << intvec.back() ;


 cout << "\n onevec.front( )  = " << onevec.front()  ;
 cout << "\n onevec.back( ) = "   << onevec.back() ;

 if ( emptyvec.empty() ) { cout << "비어?��?�� vector " ; }
 // cout << "\n emptyvec.front( )  = " << emptyvec.front()  ;
 // cout << "\n emptyvec.back( ) = "   << emptyvec.back() ;
 // Null vector?��?�� front( ), back( )??? ?��류�?? 발생?��?��?��.

} // end of main()

