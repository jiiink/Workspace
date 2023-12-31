#include <functional>  // �̰� ����ؾ� function�� ������ �ѱ� �� �־��.
#include <bits/stdc++.h>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define N 100000000  // �ݺ�Ƚ�� , 1�� ��
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


    cout << "\n   ���� ���(Identity Matrix) �����  \n" ;
    cout << "\n   ���  Big[][] = " << N << " x " << N  << endl ;;
    mybegin = chrono::system_clock::now();
    for (i = 1; i < M; ++i)  for (j = 1; j < M; ++j) Big[i][j]=(i/j)*(j/i) ;
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << ">  Big[i][j]=(i/j)*(j/i) Time: "<< tsec << endl;

    mybegin = chrono::system_clock::now();
    for (i = 1; i < M; ++i)  for (j = 1; j < M; ++j) if(i==j) Big[i][j] = 1 ;
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << ">  if(i==j) Big[i][j] = 1 Time: "<< tsec << endl;



	return 0;
} // end of main( )
