#include <bits/stdc++.h>
#define outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main() {

    list <int>::iterator it1, it2, it3 ;
    list <int> la = { 31, 32, 33, 34, 35, 36, 37, -100 };
    outlist("1. la<>= ", la) ;

    it1 = la.end() ;
    advance(it1, -3) ;
    it2 = la.erase( it1 ) ;  // ����϶�... remove( ) return ���� void �̴�.
    outlist("2. la<>= ", la) ;

    cout <<"\n *it1= " << *it1 ;
    cout <<"\n *it2= " << *it2 ;

    // it1�� ���������� ���� ã�� ���� �����ϴ�.
    int i=0;
    for( auto itx= la.begin(); itx != la.end(); itx++, i++){
        if (itx != it1) cout << "\n " << i << " �ٸ��ϴ�." ;
    }

}
