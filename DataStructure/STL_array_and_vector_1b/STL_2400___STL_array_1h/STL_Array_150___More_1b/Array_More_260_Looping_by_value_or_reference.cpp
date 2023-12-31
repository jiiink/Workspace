// 2021�� CodeBlock 20 ��ġ�� �ٽ� test

#include <bits/stdc++.h>
using namespace std ;
#define N 6


int main() {

    int  carray[N] = {  4, 3, 2, 1, 0,  -1 }  ;

    cout << "\n\n   Step 01: �״�� ���  \n   " ;
    for( auto U : carray){
            cout << U << " , " ;
    }

    cout << "\n\n   Step 02: += 1 �۾�   \n   " ;
    for( auto U : carray){  // C++ 11, �ڵ����� call by value
            cout << U << " , " ;
            U += 1 ;
    }

    cout << "\n\n   Step 03, call by value ����   \n   " ;
    for( auto U : carray){
            cout << U << " , " ;
    }

    cout << "\n\n   Step 04: += 1 �۾�  by reference  \n   " ;
    for( auto &U : carray){  // C++ 11, �ڵ����� call by value
            cout << U << " , " ;
            U += 1 ;
    }

    cout << "\n\n   Step 05, call by reference �۾� ����  \n   " ;
    for( auto U : carray){
            cout << U << " , " ;
    }



} // end of main( )
