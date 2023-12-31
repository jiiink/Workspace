#include <bits/stdc++.h>
using namespace std;

void printQ( queue<int> T ) {
    cout << "\n Q[ ]�� ����: " ;
    while( !T.empty()){
        cout << T.front( ) << ", " ;
        T.pop( ) ;
    }

} // end of printQ( )


// &T�� �޴� ���� ���簡 �ƴ϶� �� ��ü...
// ���� ����� �ϰ� ���� Queue�� �������.

void RprintQ( queue<int> &T ) {
    cout << "\n RQ[]�� ����: " ;
    while( !T.empty()){
        cout << T.front( ) << ", " ;
        T.pop( ) ;
    }

} // end of printQ( )

int main() {
    queue <int> q1 ;

    q1.push( 23 ) ;
    q1.push( 34 ) ;
    q1.push( 45 ) ;
    q1.push( 56 ) ;

    printQ( q1 ) ;

    q1.pop() ;
    q1.pop() ;
    q1.push( 999 ) ;
    q1.push( 134 ) ;

    RprintQ( q1) ;

    q1.push( 45 ) ;
    q1.push( 56 ) ;
    q1.push( 87 ) ;

    RprintQ( q1) ;
    printQ ( q1 ) ;
}



