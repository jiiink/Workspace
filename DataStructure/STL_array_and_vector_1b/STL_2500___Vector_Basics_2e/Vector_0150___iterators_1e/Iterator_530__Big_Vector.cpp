#include <bits/stdc++.h>
#define  N 1000000
using namespace std;

int main () {
    vector<int> myv( N )  ;

    int i = 0 ;
    // int x[N] ; // 100������ ���Ҹ� �������� ���Ѵ�.


    for( auto s : myv ) {
            i++ ;
        if ( i % 10000 == 0 ) cout <<  i << " , " << s  << endl ;
    }

  return 0;
}
