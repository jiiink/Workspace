// vector ������ ����ð� �����ϴ� �Լ�  O( f(N) )�� ���캸�� �ڵ�
// 2020�� �߼� ������ ��ħ�� ��ȯ�԰� ����.
// 2021�� 5�� 6��, �Ե��� ��̳� ���տ��� ������ ���� ���� ��.
// 2021�� 5�� 11��, �Լ������� ��ħ

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

#define Lsize 8       // ũ�⸦ 2�辿  ����.
long    N[ Lsize ] = { 100000, 200000, 400000, 800000, 1600000, 3200000, 6400000, 12800000 } ;
vector  <float>    V[ Lsize ] ;
int     Gindex ;

void vector_sort( vector <float> This ){
     sort( This.begin(), This.end() ) ;
}


double Time_Check( string MSG, function <void ( vector <float>)> target, vector <float> This  ){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double> sec ;
    double tsec ;

	mybegin = chrono::system_clock::now();
        target( This );  // ������ �Լ�
	myend   = chrono::system_clock::now() ;
	sec = myend - mybegin ;

    tsec = sec.count() ;
    return( tsec ) ;
}


void set_vector(){    // ����� float vector �迭�� ����.
    std::random_device rd;
    std::mt19937 e2(rd());
    std::uniform_real_distribution   <> unidist(0, 1); // [0,1] ������ random


    float fval ;
    for(int lindex =0 ; lindex < Lsize ; lindex++) {
        for(long i=0; i < N[lindex] ; i++){
            fval = unidist(e2) ;
            cout << fval << endl ;
            V[ lindex ].push_back( fval ) ;
        }
        printf(" \n Size of float vector[%2d]= %8d",  lindex, N[lindex] ) ;
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
         tpass = Time_Check( msg,  vector_sort, V[Gindex] ) ;
         if( Gindex == 0 ) prepass = tpass ;
         tratio = tpass / prepass ;
         printf("\n N=%10d, Time=%7.3f,  ratio= %5.3f", N[Gindex], tpass, tratio ) ;
         prepass = tpass ;
    }

	return 0;
}
