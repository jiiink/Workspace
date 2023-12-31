// vector ������ ����ð� �����ϴ� �Լ�  O( f(N) )�� ���캸�� �ڵ�
// 2020�� �߼� ������ ��ħ�� ��ȯ�԰� ����.
// 2021�� 5�� 6��, �Ե��� ��̳� ���տ��� ������ ���� ���� ��.

/*  2021.5.6 comments
   STL���� ����ϴ� sorting algorithm�� IntroSort �˰����̴�. �̰���
   3���� �˰���, QuickSort, HeapSort and InsertionSort�̴�.
   �⺻�����δ� QuickSort�� ���Ǵµ� pivot�� median-of-3�� ����ؼ� �̴´�.
   ���� QuickSort�� pivoting�� �־��� ����Ǹ�
   �� N*log N�̻� �ɸ� ���̶�� ����Ǹ� worst case O(N log N)�� HeapSort�� ����ϰ�
   Quick �ܰ��� ũ�Ⱑ ����� ���� ��쿡�� �� �̻� divide���� �ʰ�
   InsertionSort( )�� �� ���� ������ Conquer�Ͽ� ó���Ѵ�. �밳 20�� �����̴�.
*/

#include <functional>  // �̰� ����ؾ� function�� ������ �ѱ� �� �־��.
#include <bits/stdc++.h>
#include <string>
#include <random>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define Lsize 6      // ũ�⸦ 3�辿  ����.
long    N[ Lsize ] = { 100000, 300000, 900000, 2700000, 8100000, 24300000 } ;
vector  <float>    V[ Lsize ] ;
int     Gindex ;

void vector_sort( ){
     sort( V[Gindex].begin(),  V[Gindex].end() ) ;
}


double Time_Check( string MSG, function <void ( )> target, int w ){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double> sec ;
    double tsec ;

	mybegin = chrono::system_clock::now();
        target( );  // ������ �Լ�
	myend   = chrono::system_clock::now() ;
	sec = myend - mybegin ;

    tsec = sec.count() ;
    return( tsec ) ;
}


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
        printf(" \n Size of float vetor[%2d]=%8d",  lindex, N[lindex] ) ;
    } // end of for i
} // end of set_vector( )

int main(){

    int lx ;  // control parameter
    double tpass, prepass, tratio ;
    string msg ;
    set_vector( ) ;

    printf("\n Vector[N] sorting �ð� \n") ;


    for( Gindex=0 ; Gindex <= Lsize-1; Gindex++ ){
         msg="vector[" + to_string(Gindex) + "] sorting: " ;
         tpass = Time_Check( msg,  vector_sort, Gindex ) ;
         if( Gindex == 0 ) prepass = tpass ;
         tratio = tpass / prepass ;
         printf("\n N=%10d, Time=%7.3f,  ratio= %5.3f", N[Gindex], tpass, tratio ) ;
         prepass = tpass ;

    }


	return 0;
}
