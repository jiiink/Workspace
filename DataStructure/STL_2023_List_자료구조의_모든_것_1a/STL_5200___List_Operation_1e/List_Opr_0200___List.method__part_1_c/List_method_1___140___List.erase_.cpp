#include <bits/stdc++.h>
using namespace std;

#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;

int main( ) {

    list<int> ml= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    myout("> list c = ", ml ) ;

    ml.erase( ml.begin());
    myout("> ml.erase( ml.begin()) ��= ", ml ) ;

    auto it = ml.end() ;

    it-- ;  //��¥ ������ ����
    it-- ;
    ml.erase( it );
    myout("> ml.erase( it ) ��= ", ml ) ;

}
