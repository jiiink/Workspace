#include <bits/stdc++.h>
using namespace std ;
#define N 6


int main() {

    int  carray[N] = { -4, -3, -2, -1, 0,  1 }  ;
    int  sarray[N] = {  4,  3,  2,  1, 0, -1 }  ;
    array < int, N > tarray { 101, 102, 103, 104, 105, 106} ;


    cout << "\nStep 01 \n" ;
    for( auto &U : carray){  // C++ 11, ��ȭ�� �ݿ���.
            cout << U << " , " ;
            U *= -1 ;
    }

    cout << "\nStep 02 \n" ;
    for( auto U : carray){
            cout << U << " , " ;
    }

    cout << "\nStep 03 \n" ;
    for( auto U : sarray){  // �̷��� �θ��� call by reference�� �ȴ�.
            cout << U << " , " ;
            U *= -1 ;
    }

    cout << "\nStep 04 \n" ;
    for( auto U : sarray){
            cout << U << " , " ;
    }


} // end of main( )
