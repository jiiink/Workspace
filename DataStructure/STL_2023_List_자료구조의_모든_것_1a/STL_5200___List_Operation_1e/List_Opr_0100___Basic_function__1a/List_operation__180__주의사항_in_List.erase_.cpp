#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;


int main() {

    list< int > La = {  1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12 } ;      // create list of ints
    list< int >::iterator it1, it2, it3 ;

    mout("> �־��� La[]= ", La) ;
    it1 = La.begin() ;
    it2 = La.end()   ;

    advance( it1, +7 ) ;
    //advance( it2, -2 ) ;

    it3 = La.erase( it1, it2 ) ;

    // Ư�� ��ġ���� �� ���ұ��� ���� ��쿡 return iterator�� last���Ҹ� ����ġŲ��.
    // [8,9,10]�� ���� ��� return iterator�� 11�� �����Ѵ�.
    // ���� [8,9,10,11,12]�� ���� ��쿡�� last( ) ������ 7�� �����Ѵ�.

    mout("> La.erase() ����  La[]= ", La) ;
    cout << "\n  *it3= " << *it3 ;



    return 0;
}
