#include <bits/stdc++.h>
#include <iostream>
#define  N  5
using namespace std ;

typedef array<array<int,N>,N> Darray ;


void arrset( Darray &M, int p){  // reference  &M���� �޾ƾ� �Ѵ�. �׷��� ��ȭ�� �ݿ��ȴ�.
    for( auto &Row : M){
        cout << "\n" ; // �ٹٲ�.
        for ( auto &mymy  : Row ){
            mymy = p ;
        }
    }
} // end of allset( )

void arrout( string msg, Darray M){
    cout << "\n\n arrout(): " << msg << "\n" ;
    for( auto Row : M){
        cout<<"\n" ;
        for ( auto element : Row )
              cout << element << " " ;
    }
}  // end of arrout( )


Darray Outer ;

int main() {
   Darray Inner ;

   arrset( Outer, 7) ;
   arrout( "Global: Outer ����غ���", Outer) ;

   arrset( Inner, 8) ;
   arrout( "Automatic: Inner ����غ���", Inner) ;



return 0;
}


