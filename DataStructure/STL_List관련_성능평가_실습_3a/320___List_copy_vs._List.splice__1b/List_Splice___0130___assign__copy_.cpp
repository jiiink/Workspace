#include <functional>  // �̰� ����ؾ� function�� ������ �ѱ� �� �־��.
#include <bits/stdc++.h>
#include <string>
#include <random>
using namespace std ;

#define Lsize 7

long  N[ Lsize ] = { 100000, 200000, 400000, 800000, 1600000, 3200000, 6400000 } ;
list  <float>    L1[ Lsize ], L2[ Lsize ], Ltemp ;
int   Gindex ;

void swap_by_assignment( ){
        Ltemp       = L1[Gindex]  ;
        L1[Gindex]  = L2[Gindex]   ;
        L2[Gindex]  = Ltemp ;
}

void generic_copy( ){

        copy( L1[Gindex].begin(), L1[Gindex].end(), L2[Gindex].begin()  );
        // L1�� begin()���� L1�� end()�� L2�� begin()���� �����ؼ� �־��.
}


double Time_Check( string MSG, function <void ( )> target, int w ){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double, milli> sec ;
    double tsec ;

	mybegin = chrono::system_clock::now();
        target( );  // ������ �Լ�
	myend   = chrono::system_clock::now() ;
	sec = myend - mybegin ;

    tsec = sec.count() ;
    cout << " " << MSG << ": " << tsec << endl;
    return( tsec ) ;
} // end of Time_Check( ) by Zoh 2020. �߼� ������ ��ħ��


void set_list(){
    std::random_device rd;
    std::mt19937 e2(rd());
    std::uniform_real_distribution   <> dist(0, 10);


    float fval ;
    for(int lindex =0 ; lindex < Lsize ; lindex++) {
        for(long i=0; i < N[lindex] ; i++){
            fval = dist(e2) ;
            L1[ lindex ].push_back( fval ) ;
            L2[ lindex ].push_back( fval ) ;
        }
    cout << "\n  Set list["  <<  lindex << "], size= " << setw(10) << N[lindex];
    } // end of for i

}

int main(){

    int lx ;  // control parameter
    string msg ;
    set_list( ) ;


    ostringstream ss;
    cout << "\n\n  List copy by 3 assignments ����  \n" ;
    string s2 ;
    for(int i = 0 ; i < Lsize ; i++ ) {
        Gindex = i ;
        ss.str("");   ss.clear(); // �ݵ�� �� ���� ���� ����ؾ� �Ѵ�.
        ss <<  N[Gindex] ;
        s2 = ss.str() ;
        msg = "List size= " + s2 + ": " ;
        Time_Check( msg ,  swap_by_assignment, 0 ) ;
    }

    cout << "\n\n  Generic copy( L.begin(), L.end( ), L2.begin() ) ����  \n" ;
    for(int i = 0 ; i < Lsize ; i++ ) {
        Gindex = i ;
        ss.str("");   ss.clear(); // �ݵ�� �� ���� ���� ����ؾ� �Ѵ�.
        ss <<  N[Gindex] ;
        s2 = ss.str() ;
        msg = "List size= " + s2 + ": " ;
        Time_Check( msg ,  generic_copy, 0 ) ;
    }

	return 0;
} // end of main( )
