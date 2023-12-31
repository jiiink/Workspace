// ����ð� �����ϴ� �Լ�

#include <functional>  // �̰� ����ؾ� function�� ������ �ѱ� �� �־��.
#include <bits/stdc++.h>
#include <string>
#include <random>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define Lsize 7

long  N[ Lsize ] = { 100000, 200000, 400000, 800000, 1600000, 3200000, 6400000 } ;
list  <float>    L1[ Lsize ], L2[ Lsize ], L3[ Lsize], L4[ Lsize], Ltemp ;
int   Gindex ;

void pop_moveback( ){  // List ������ �� 1/2�� �ڷ� �ű�.
     int N , one ;
     N = L1[Gindex].size( );
     for(int i=0 ; i< (int) N/2 ; i++) {
            one = L1[Gindex].front( ) ;
            L1[Gindex].pop_front(  ) ;
            L1[Gindex].push_back( one ) ;
     }

}

void splice_back( ){  // List L2�� L1�� �ڿ� �ϳ��� insert ��.
    int N , one ;
    N = L2[Gindex].size( );
    auto it1 =  L2[Gindex].begin() ;
    auto it2 =  L2[Gindex].begin() ;
    advance(it2, (int) N/2 ) ;     // �߰� ��ġ�� it2�� �ű�
    L2[Gindex].splice( L2[Gindex].end(),L2[Gindex], it1, it2 );
}

double Time_Check( string MSG, function <void ( )> target, int w ){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double,milli> msec ;
    double tsec ;

	mybegin = chrono::system_clock::now();
        target( );  // ������ �Լ�
	myend   = chrono::system_clock::now() ;
	msec = myend - mybegin ;

    tsec = msec.count() ;
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
            L3[ lindex ].push_back( fval ) ;
        }
    cout << "\n  Set list["  <<  lindex << "], size= " << setw(10) << N[lindex];
    } // end of for i

}

int main(){

    int lx ;  // control parameter
    string msg ;
    set_list( ) ;
    cout << "\n\n  All Lists are prepared( ) \n" ;

    ostringstream ss;
    string s2 ;
    cout << "\n\n  List���� �� ���Ҹ� ���� �ڷ� �ű�. �ϳ��� \n" ;
    for(int i = 0 ; i < Lsize ; i++ ) {
        Gindex = i ;
        ss.str("");   ss.clear(); // �ݵ�� �� ���� ���� ����ؾ� �Ѵ�.
        ss <<  N[Gindex] ;
        s2 = ss.str() ;
        msg = "List size= " + s2 + ": " ;
        Time_Check( msg ,  pop_moveback , 0 ) ;
    }

    cout << "\n\n   List 1/2�� splice�� ���� �ڷ� �ѹ��� �ű�. \n" ;
    for(int i = 0 ; i < Lsize ; i++ ) {
        Gindex = i ;
        ss.str("");   ss.clear(); // �ݵ�� �� ���� ���� ����ؾ� �Ѵ�.
        ss <<  N[Gindex] ;
        s2 = ss.str() ;
        msg = "List size= " + s2 + ": " ;
        Time_Check( msg ,  splice_back, 0 ) ;
    }

	return 0;
} // end of main( )
