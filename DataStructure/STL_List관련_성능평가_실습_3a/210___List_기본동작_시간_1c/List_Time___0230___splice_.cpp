// ����ð� �����ϴ� �Լ�

#include <functional>  // �̰� ����ؾ� function�� ������ �ѱ� �� �־��.
#include <bits/stdc++.h>
#include <string>
#include <random>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define Lsize 5

long  N[ Lsize ] = { 100000, 200000, 400000, 800000, 1600000 } ;
list  <float>    L[ Lsize ], templ ;
int   Gindex ;

void list_splice( ){
    auto it = L[Gindex].begin() ;
    advance( it, 500 ) ;
    L[Gindex].splice( L[Gindex].begin(),  L[Gindex], it, L[Gindex].end()  )  ;
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
    cout << "\n " << MSG << ": " << tsec << endl;
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
    cout << "\n  Set list["  <<  lindex << "], size= " << setw(10) << N[lindex];
    } // end of for i

}

int main(){

    int lx ;  // control parameter
    string msg ;
    set_list( ) ;
    cout << "\n All Lists are prepared( ) \n\n" ;

    ostringstream ss;
    string s2 ;
    for(int i = 0 ; i < Lsize ; i++ ) {
        Gindex = i ;
        ss.str("");   ss.clear(); // �ݵ�� �� ���� ���� ����ؾ� �Ѵ�.
        ss << std::setw(9) << std::setfill('0') << N[Gindex] ;
        s2 = ss.str() ;
        msg = "Splicing L, size=" + s2 + ": " ;
        Time_Check( msg ,  list_splice, 0 ) ;
    }

	return 0;
} // end of main( )
