#include <bits/stdc++.h>
using namespace std;

typedef stack<int>  Safe_Box ;  // ������ �ִ� ���� stack

int main() {
     int baggage[15] = { 12, 9, 23, 8, 4, 21, 17, 5, 14, 8, 10, 24, 25, 5, 8 } ;
     int nos, box_weight, W ;
     Safe_Box *M ;                  // M�� Safe_Box�� �����ϴ� pointer
     stack < Safe_Box * > Cargo ;   // Safe_BoX Stack�� pointer�� �����ϴ� ���� stack

     M = new Safe_Box ;
     nos = (sizeof( baggage )/sizeof(*baggage)) ; // array�� ���Ҹ� ����ϴ� ��
     box_weight = 0 ;
     for(int i=0 ; i < nos ; i++) {
        W = baggage[i] ;
        printf("\n %2d weight = %2d ", i, W) ;
        box_weight += W ;
        if ( box_weight > 30 ) {
                cout << "���� �ڽ��� ���� �̰��� ����⿡ �ø�="<< box_weight-W << endl ;
                Cargo.push( M ) ;  // ���԰� �ѱ� ������ �ڽ��� ����⿡ �ø�.
                i-- ;
                box_weight = 0 ;
                M = new Safe_Box ; // �� �ڽ��� �ϳ� �� ����ϴ�.

        } else {
                M->push( W ) ; // ��ġ�� �ʱ� ������ �ڽ��� ����

        }

     }

     return 0;
}
