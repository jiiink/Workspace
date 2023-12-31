#include <bits/stdc++.h>
using namespace std;

template <typename T>
ostream & operator<<(ostream & os, queue<T> myQ ) {
    //Call by value�� stack�� �޾ƿ� copy�ؼ� ����ϰ� ����.
    // cout<< "\n Queue : " ;
    while(!myQ.empty()) { //body
        os << myQ.front() << " ";
        myQ.pop();
    }
    return os; // end of function
}


void printQ( queue<int> T ) {
    cout << "\n Q[]�� ���� : " ;
    while( !T.empty()){
        cout << T.front( ) << " " ;
        T.pop( ) ;
    }

} // end of printQ( )


int main() {
    queue <int> q1 ;

    q1.push( 23 ) ;
    printQ( q1 ) ;
    q1.push( 34 ) ;
    q1.push( 45 ) ;
    q1.push( 56 ) ;
    printQ( q1 ) ;

    q1.pop() ;
    q1.pop() ;
    cout << "\n Q[]= " << q1 ;
    q1.push( 999) ;
    q1.push( 134 ) ;
    q1.push( 145 ) ;
    q1.push( 156 ) ;
    printQ( q1 ) ;

}



