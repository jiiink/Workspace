#include <bits/stdc++.h>
using namespace std;

int main() {

     vector < string > vs = { "banana" , "apple", "tomato", "rose", "water", "peanut", "coffee"};
     list   < string > ls = { "cat" , "dog", "tiger", "bear", "dragon", "pig", "horse" };
     vector < string >::iterator itv ;
     list   < string >::iterator itl ;

     itv = vs.begin() ; // vector iterator�� ������ ����.
     cout << "\n Vector Iterator : " ;
     cout << *(itv) << " -- " << *(itv+3) ;

     cout << "\n List Iterator :  " ;  // list iterator�� ������ �Ұ���. ++, --�� ����
     itl = ls.begin() ;
     string stemp ;

     cout << *(itl) ;
     ++itl ; ++itl ; ++itl ;
     cout << " -- " << *(++itl) ;

} // end of main( )
