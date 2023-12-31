// ������ ũ�⿡ ���� ���� �ð��� ��ȭ�� Ȯ���ϱ� ���ؼ� ���� ���� �����
// �������� ũ�⸦ doubling(2�辿) �÷°��鼭 Ȯ���ϴ� ���̴�.


#include <functional>  // �̰� ����ؾ� function�� ������ �ѱ� �� �־��.
#include <bits/stdc++.h>
#include <string>
#include <random>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define Lsize 6      // ũ�⸦ 2�辿, �� doubling �ϴ� ���̴�.
long    N[ Lsize ] = { 100000, 200000, 400000, 800000, 1600000, 3200000 } ;
vector  <float>    V[ Lsize ] ;
int     Gindex ;


void set_vector(){    // ����� float vector �迭�� ����.
    std::random_device rd;
    std::mt19937 e2(rd());
    std::uniform_real_distribution   <> dist(0, 10);


    float fval ;
    for(int lindex =0 ; lindex < Lsize ; lindex++) {
        for(long i=0; i < N[lindex] ; i++){
            fval = dist(e2) ;
            V[ lindex ].push_back( fval ) ;
        }
        printf(" \n Vector.size( ) vetor[%2d]=%8d",  lindex, N[lindex] ) ;
    } // end of for i
} // end of set_vector( )

int main(){

    int lx, vsize ;  // control parameter
    double tpass, prepass, tratio ;
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double> sec ;
    double tsec ;
    string msg ;

    set_vector( ) ;

    printf("\n Vector.size( )�� ó�� �ð� �ð� \n") ;


    for( Gindex=0 ; Gindex <= Lsize-1; Gindex++ ){
      	mybegin = chrono::system_clock::now();
                vsize = V[Gindex].size( ) ;
	    myend   = chrono::system_clock::now() ;
        cout << "\n V["<< Gindex << "].size()= "<< vsize ;
        sec = myend - mybegin ;
        printf(", sizing time= %7.3f ", sec ) ;

    } // end of for( )

	return 0;
}
