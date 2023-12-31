#include <functional>  // �̰� ����ؾ� function�� ������ �ѱ� �� �־��.
#include <bits/stdc++.h>
#include <string>
#include <random>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define Lsize 8       // ũ�⸦ 2�辿  ����.
long    N[ Lsize ] = { 1000000, 2000000, 4000000, 8000000, 16000000, 32000000, 64000000, 128000000 } ;
vector  <float>    V[ Lsize ] ;
vector  <float>    U[ Lsize ] ;
int     Gindex ;


double Time_Check( string MSG, function <void ( )> target, int w  ){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double,milli> msec ;
    double tsec ;

	mybegin = chrono::system_clock::now();
        target( );  // ������ �Լ�
	myend   = chrono::system_clock::now() ;
	msec = myend - mybegin ;

    tsec = msec.count() ;
    return( tsec ) ;
}

void fill_vector( ){
    float w ;
    w = 0.997 ;
    fill( V[ Gindex ].begin(), V[ Gindex ].end(),  w ) ;
}

void set_vector( ){    // ����� float vector �迭�� ����.
    float w ;
    w = 0.997 ;
    for(long i=0; i < N[ Gindex ] ; i++){
            V[ Gindex ].push_back( w ) ;
    }
} // end of set_vector( )

int main(){

    int lx ;  // control parameter
    double tpass, prepass, tratio ;
    string msg ;

    printf("\n\n ũ�� N�� ���� Vector[]=w ����  �ð� : V[N] \n") ;
    for( Gindex=0 ; Gindex <= Lsize-1; Gindex++ ){
         msg="vector[" + to_string(Gindex) + "] �ʱ�ȭ  : " ;
         tpass = Time_Check( msg,  set_vector , Gindex ) ;
         if( Gindex == 0 ) prepass = tpass ;
         tratio = tpass / prepass ;
         printf("\n N=%10d, Time=%9.3f,  ratio= %5.3f", N[Gindex], tpass, tratio ) ;
         prepass = tpass ;

    }

    printf("\n\n ũ�� N�� ���� Vector.fill( w ) �ð� : V[N] \n") ;
    for( Gindex=0 ; Gindex <= Lsize-1; Gindex++ ){
         msg="vector[" + to_string(Gindex) + "] filling  : " ;
         tpass = Time_Check( msg,  fill_vector , Gindex ) ;
         if( Gindex == 0 ) prepass = tpass ;
         tratio = tpass / prepass ;
         printf("\n N=%10d, Time=%9.3f,  ratio= %5.3f", N[Gindex], tpass, tratio ) ;
         prepass = tpass ;

    }


	return 0;
}
