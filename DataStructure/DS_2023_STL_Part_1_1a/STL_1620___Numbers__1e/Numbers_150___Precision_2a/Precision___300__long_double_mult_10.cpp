#include <cstdio>       // stdio.h�� ����ϸ� �ȵ�.
#include <iostream>     // std::cout
#include <limits>       // std::numeric_limits
using namespace std ;


int main(){
    int i ;
    long double md,  da, db  ;
    md = 1L ;
    printf("\n Begin = %Ld", md) ;
    cout << "long double ���е�=" << numeric_limits<long double>::digits10 << endl;
    for(i=1 ; i <= 50 ; i++) {
        md *= 10 ;
        printf("\n i= %3d, md=%Lf", i, md ) ;
    }

} // end of main()
