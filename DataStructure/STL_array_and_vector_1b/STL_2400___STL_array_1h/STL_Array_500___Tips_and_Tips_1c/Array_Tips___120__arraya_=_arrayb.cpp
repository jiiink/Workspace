// array�� ���� type������ ����(assignment) ����. C-Array �� �Ұ�.

#include <bits/stdc++.h>
#define  pout(MSG,X)     cout<<"\n"<<MSG<< X << "\n" ;
#define  allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
#define  SKIP            cout<<"\n"
using namespace std ;

int main() {

    array <int, 5> xarr, yarr ;         // �ݵ�� ũ�Ⱑ compile time�� �����Ǿ�� �Ѵ�.

    xarr = { 0, 1, 2, 3, 4 };    // okay
    yarr = xarr ;

    allout("yarr[]= ", yarr) ;
    allout("xarr[]= ", yarr) ;

    xarr[3]= -99 ;


    cout << "\n 4. yarr[]= "  ;
    for(auto& s: yarr ) cout << s << ' ';



} // end of main( )
