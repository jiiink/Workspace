#include <iostream>

// Setting >> Compiler >> #define ���� ����
// DEBUG=1�� �߰��Ѵ�. �߰��� #define�� ���� �ٿ� �߰� ��.
// �ݵ�� MACRO=""�� �߰��ؾ� �Ѵ�. =�� ������ �ȵ�.
// ���� compile option�� ���� ��� ��ü�� rebuild�ؾ� �Ѵ�.

// �ϴ� ����� Project���� ����Ŭ���� �ؼ� Clean�� �ϸ�
// ���õ� ��� �ΰ� ������ �����Ѵ�.

#include <bits/stdc++.h>
using namespace std;


int main(void) {

    int i, x[12]= {5, 6, -8, 750, 7, 11, -13, 4, 5, 9, 8, -9} ;
    int N  = 12 ;
    int Sum = 0 ;

    for(i=0; i < N ; i++) {
        if ( x[i] > 0 ) {
            Sum += x[i] ;
            #ifdef DEBUG
               printf("\n x[%d]=%d ", i, x[i]) ;
            #endif
        }
    }
    #ifdef ENGLISH
    printf("\n N= %d, \n Total Sum = %d ", N, Sum ) ;
    #else
    printf("\n ��ü ������ = %d, \n ������  = %d ", N, Sum ) ;
    #endif // KOREAN
}
