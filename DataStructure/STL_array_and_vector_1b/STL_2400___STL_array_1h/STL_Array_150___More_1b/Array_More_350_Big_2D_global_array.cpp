#include <bits/stdc++.h>
#include <iostream>
#define   N  20000 // �̸����� ����? Local�̸� 700���� ����.
#define   M    800

using namespace std ;
int A[ N ][ N ] ;  // global ������ �ִ�ũ��� 5��



int main() {

int B[M][M] ;


    for(int i=0 ; i <= N-1; i++){
        if( i% 1000 == 0 )    cout << "\n i = " << i ;
        for(int j=0 ; j <= N-1; j++){
                A[i][j] = i*j + i - j ;
        }
    }

    cout << "\n Done" ;
return 0;
}


