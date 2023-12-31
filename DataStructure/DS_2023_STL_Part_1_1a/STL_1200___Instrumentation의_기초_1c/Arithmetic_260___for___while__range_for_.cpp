#include <functional>  // 이걸 사용해야 function을 변수로 넘길 수 있어요.
#include <bits/stdc++.h>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define N 100000000  // 반복횟수 , 1억 번
#define M 10000

vector<int> vi ;
array<int,N> arr;

int Big[M][M];

int myadd(int x, int y){
    return( x + y ) ;
}

int main(){
    chrono::system_clock::time_point mybegin, myend ;
    chrono::duration<double,milli> sec ;
    double tsec ;
    int          ia=2,   ib=3,   ic=4;
    long long    la=2,   lb=3,   lc=4;
    float        fa=1.2, fb=2.3, fc=3.4;
    double       da=2.3, db=3.4, dc=4.5;
    long double  wa=2.3, wb=3.4, wc=3.5;
    int i,j ;


    for(int i= 0; i < N ; i++) { vi.push_back(i); arr[i]=i ;}

    cout << "\n   Repeats N = " << N ;
    cout << "\n   for( ), while( ) 속도 비교  \n" ;
    mybegin = chrono::system_clock::now();
    for (i = 0; i < N; ++i) arr[i]= arr[i]+i ;
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << ">  for(i)          : "<< tsec << endl;

    mybegin = chrono::system_clock::now();
    i=0;
    while(1){ if(i>= N)break; arr[i]= arr[i]+i; ++i; }
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << ">  while(1)        : "<< tsec << endl;

    mybegin = chrono::system_clock::now();
    for(auto w : arr) w = w+i ;
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << ">  for(auto w:arr) : "<< tsec << endl;

	return 0;
} // end of main( )
