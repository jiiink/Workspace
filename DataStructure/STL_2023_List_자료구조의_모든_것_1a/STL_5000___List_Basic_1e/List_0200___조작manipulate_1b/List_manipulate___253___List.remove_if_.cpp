#include <bits/stdc++.h>
#define outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

bool less30(int x ){
    return( x < 30 ) ;
}

int main() {

    list <int>::iterator it1, it2, it3 ;
    list <int> la = { 31, 32, 11, 33, 34, 25, 35, 34, 27, -100 };
    outlist("1. la<>= ", la) ;

    la.remove( 34) ;  // �־��� ���� �� �� ������. ����϶�... remove( ) return ���� void �̴�.
    outlist("2. la<>= ", la) ;

    la.remove( 134) ;  // ����϶�... remove( ) return ���� void �̴�.
    outlist("3. la<>= ", la) ;
    la.remove_if( less30 ) ;
    outlist("4. la<>= ", la) ;

}
