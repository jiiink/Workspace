#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <limits.h>

using namespace std;

#define N 4000       // N�� 4000 �Ѱ�
#define M 720        // 2ġ�迭�� int �ִ� ���ũ�� 721

int garray[N][N] ;

void foo() {
   int w[500][500] ;
}

int main() {

    int larray[M][M] ; //  M�� 790 �ȵ� 800�� ���� �Ѱ�

    for(int i = 0; i < N ; i++)
        for(int j = 0; j < N ; j++)
            if ((i+j)% N/2 == 0 ) {
               printf("\n i,j= %d %d", i, j ) ;
               garray[i][j] = i+ j ;
            }

  return 0;
}
