#include <bits/stdc++.h>
#define outlist(msg,lx)  cout<< "\n " << msg<<" : " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main() {

    list <int>::iterator it1, it2, it3 ;
    list <int> la = { 31, 32, 33, 34, 35 };
    outlist("1. la<>= ", la) ;

    it1 = la.insert( la.begin(), 71) ;
    outlist("2. la<>= ", la) ;

    printf("\n  it1�� ��, �� ��ü, it1= %d", it1) ;
    printf("\n  it1�� �����ϴ� ��ġ�� �� *it1 = %d", *it1) ;

    it2 = la.end() ;
    advance(it2, -3) ; // ������. it2-- ; it2--; it2--;
    it3 = la.insert( it2, -10 ) ;
    it3-- ;
    outlist("3. la<>= ", la) ;
    cout << "\n it2�� ���� ����غ��� *it3 =  " << *it3 ;

    {
    list<int> a = {1, 2, 3, 4, 5, 6};
    list<int>::iterator it;
    advance(it, 5);
    a.insert(it, 99);
    outlist("a = ", a);
    }
}
