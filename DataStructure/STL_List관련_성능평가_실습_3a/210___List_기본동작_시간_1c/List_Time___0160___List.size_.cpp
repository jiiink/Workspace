// ����ð� �����ϴ� �Լ�

#include <functional>  // �̰� ����ؾ� function�� ������ �ѱ� �� �־��.
#include <bits/stdc++.h>
#include <random>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define Lsize 7

long  N[ Lsize ] = { 100000, 200000, 400000, 800000, 1600000, 3200000, 6400000 } ;
list  <float>    L[ Lsize ], templ ;
int   Gindex ;

void list_reverse( ){
     reverse( L[Gindex].begin(), L[Gindex].end() ) ;
}

int get_list_size( ){
     return ( L[Gindex].size( ) ) ;
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
    cout << "   " << MSG << ": " << tsec << endl;
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
            L[ lindex ].push_back( fval ) ;
        }
    cout << "\n Prepared for list[ " <<  lindex << "] >> " << N[lindex];
    } // end of for i

}

int main(){

    int lx ;  // control parameter

    set_list( ) ;
    cout << "\n All Lists are prepared( ) " ;

    cout << "\n List�� reversing �ϱ� " ;
    for(int i = 0 ; i < Lsize ; i++ ) {
        Gindex = i ;     cout << "Size= " << N[i] ;
        Time_Check( "reverse( L ) timing " ,  list_reverse, 0 ) ;

    }

    cout << "\n List�� List.size( ) " ;
    for(int i = 0 ; i < Lsize ; i++ ) {
        Gindex = i ;    cout << "Size= " << N[i] ;
        Time_Check( "get_list_size( )= " ,  get_list_size, 0 ) ;

    }

	return 0;
}
