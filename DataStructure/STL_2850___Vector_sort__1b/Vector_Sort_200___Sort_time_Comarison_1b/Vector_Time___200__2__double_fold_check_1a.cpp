// 데이터 크기에 따른 수행 시간의 변화를 확인하기 위해서 가장 좋은 방법은
// 데이터의 크기를 doubling(2배씩) 늘력가면서 확인하는 것이다.

/*
   STL에서 사용하는 sorting algorithm은 "IntroSort" 라고 불리는 자체 알고리즘이다. 이것은
   3개의 알고리즘, QuickSort, HeapSort and InsertionSort을 혼합하여 만들어진 일종의
   hybrid 알고리즘이다.
   기본적으로는 QuickSort이 사용되는데 pivot은 median-of-3를 사용해서 뽑는다.
   만일 QuickSort가 pivoting에 최악이 예상되면
   즉 N*log N이상 걸릴 것이라고 예상되면 worst case O(N log N)인 HeapSort을 사용하고
   Quick 단계의 크기가 충분히 적을 경우에는 더 이상 divide하지 않고
   InsertionSort( )로 그 작은 단위를 Conquer하여 처리한다. 대개 20개 정도이다.
*/

#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#include <string>
#include <random>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define Lsize 6      // 크기를 2배씩, 즉 doubling 하는 것이다.
long    N[ Lsize ] = { 100000, 200000, 400000, 800000, 1600000, 3200000 } ;
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
        target( );  // 측정할 함수
	myend   = chrono::system_clock::now() ;
	sec = myend - mybegin ;

    tsec = sec.count() ;
    return( tsec ) ;
}


void set_vector(){    // 실험용 float vector 배열을 만듬.
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

    int lx ;  // control parameter
    double tpass, prepass, tratio ;
    string msg ;
    set_vector( ) ;

    printf("\n Vector[N] sorting 시간 \n") ;


    for( Gindex=0 ; Gindex <= Lsize-1; Gindex++ ){
         msg="vector[" + to_string(Gindex) + "] sorting: " ;
         tpass = Time_Check( msg,  vector_sort, Gindex ) ;
         if( Gindex == 0 ) prepass = tpass ;
         tratio = tpass / prepass ;
         printf("\n N=%10d, Time=%7.3f,  ratio= %5.3f", N[Gindex], tpass, tratio ) ;
         prepass = tpass ;
    } // end of for( )

	return 0;
}
