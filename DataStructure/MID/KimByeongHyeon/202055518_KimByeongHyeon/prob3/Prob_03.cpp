// ���� 3��
#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "

using namespace std;

int GetM(int i, int j, vector<int> L ) {
    int n ;
    n = (L.size()+1)/2 ;
    /*

    L�� �̿��ؼ� M[i][j]�� ���� ����ؾ� ��.



    */
    return( L[0] ) ; // �̰��� ������ Ȯ���ϴ� dummy code�Դϴ�.

}

vector<int> L1 { 3, -8, 1, 6, 10, 7, 2, 2, 9  } ;
vector<int> L2 { 7, 3, -8, 1, 6, 1, 4, 10, 7, 2, 10, 2, 9  } ;
vector<int> L3 { 3, 2, 1, 10, 7, 3, -8, 1, 6, 1, 4, 10, 7, 2, 10, 2, 9  } ;
int         N1, N2, N3 ;

int main () {
    int i, mi, mj, value ;
    N1 = (L1.size()+1)/2 ;
    N2 = (L2.size()+1)/2 ;
    N3 = (L2.size()+1)/2 ;

    srand(2023) ;
    for(i=1 ; i < int(N1*N1/2); i++) {
            mi = rand()%N1 + 1 ; // �������� M�� ���Ҹ� �����Ѵ�.
            mj = rand()%N1 + 1 ;
            value = GetM( mi, mj, L1) ;
            printf("\n i=%d, j=%d, value=%d", mi, mj, value);
    }

    return 0;

}
