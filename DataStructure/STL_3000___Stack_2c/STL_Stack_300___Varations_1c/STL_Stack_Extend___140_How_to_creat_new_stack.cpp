#include <bits/stdc++.h>
using namespace std;

typedef stack<int> intstack ;

int main() {

     int i, myran[10]= { 4, 5, 7, 7, 9, 6, 4, 9, 2, 6 } ;
     intstack  *pstack ;
     stack < intstack * > sstt ;

     for(i=1; i < 10; i++) {
        if (i%2 == 0 ){
            cout << "�� stack�� �ϳ��� ��������ϴ�." << endl ;
            pstack = new intstack ;
            cout << "���� stack�� stack pointer stack�� Push �մϴ�. " << endl ;
            sstt.push( pstack) ;
        }
     }


     return 0;
}
