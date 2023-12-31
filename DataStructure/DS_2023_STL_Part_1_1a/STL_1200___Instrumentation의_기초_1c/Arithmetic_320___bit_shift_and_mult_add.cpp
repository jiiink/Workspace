#include <functional>  // �̰� ����ؾ� function�� ������ �ѱ� �� �־��.
#include <bits/stdc++.h>
#define  allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

#define N 100000000  // �ݺ�Ƚ�� , 1�� ��
#define M 10000

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

    cout << "\n N = " << N << endl ;

    mybegin = chrono::system_clock::now();
    for (i = 0; i < N; ++i) ia = i<<10 - i  ;
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << ">  ia = i<<10 - i Time : "<< tsec << endl;

    mybegin = chrono::system_clock::now();
    for (i = 0; i < N; ++i) ia = i*1023   ;
    myend   = chrono::system_clock::now();
    sec = myend - mybegin;
    tsec = sec.count();
    cout << ">  ia = i*1023  Time : "<< tsec << endl;


	return 0;
} // end of main( )
