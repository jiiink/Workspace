#include <bits/stdc++.h>
using namespace std;
// vector jump�� �޸� list�� �⺻������ circular list �̴�.

int main() {
     int i  ;

     list <int>   intlist { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19 };

     auto itr = intlist.begin() ;
     i= 0 ;
     while( i++ <= 6 ){
            if( itr == intlist.end()) cout <<" $" ;
            else cout << " " << *itr ;
            advance( itr, i ) ;
     }

} // end of main()

