#include <functional>  // �̰� ����ؾ� function�� ������ �ѱ� �� �־��.
#include <bits/stdc++.h>
#include <random>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define Lsize 6

long  N[ Lsize ] = { 100000, 200000, 400000, 800000, 1600000, 3200000 } ;
vector  <float>    V[ Lsize ] ;
int   Gindex ;

void vector_sort( ){
     sort( V[Gindex].begin(),  V[Gindex].end() ) ;
}


double Time_Check( string MSG, function <void ( )> target, int w ){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double,milli> sec ;
    double tsec ;

	mybegin = chrono::system_clock::now();
        target( );  // ������ �Լ�
	myend   = chrono::system_clock::now() ;
	sec = myend - mybegin ;

    tsec = sec.count() ;
    cout << MSG << ": " << tsec << endl;
    return( tsec ) ;
} // end of Time_Check( ) by Zoh 2020. �߼� ������ ��ħ��


void set_vector(){
    std::random_device rd;
    std::mt19937 e2(rd());
    std::uniform_real_distribution   <> dist(0, 10);


    float fval ;
    for(int lindex =0 ; lindex < Lsize ; lindex++) {
        for(long i=0; i < N[lindex] ; i++){
            fval = dist(e2) ;
            V[ lindex ].push_back( fval ) ;
        }
    // cout << "\n Prepared for ũ�� �� vector[ ] " <<  lindex << "] >> " << N[lindex];
    } // end of for i

}

int main(){

    string msg ;

    set_vector( ) ;
    cout << "\n\n All vectors are prepared( ) \n\n" ;

    for(Gindex = 0 ; Gindex < Lsize ; Gindex++) {
       msg = "\n vector with " + to_string( N[Gindex]) + " :" ;
       Time_Check(msg ,  vector_sort, Gindex ) ;
    }


	return 0;
}
