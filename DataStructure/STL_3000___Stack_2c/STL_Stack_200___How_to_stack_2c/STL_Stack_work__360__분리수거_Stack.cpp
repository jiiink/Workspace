#include <bits/stdc++.h>
using namespace std;

void Print_stack( stack<int> X ){
    cout << " Stack[] :" ;
    while( !X.empty()) {
        cout << ", " <<  X.top() ;
        X.pop() ;
    } cout << "\n" ;

}


int main () {

    stack <int> S[5];  // 6���� �������� stack
    vector<int> trash = { 140, 132, 453, 46, 178, 928, 35, 11, 64, 543, 112, 3, 43, 55, 17, 312} ;

    int tong ;
    for( auto w : trash){
        //cout << "\n > ������ ��ȣ " << w ;
        tong = w % 5 ;
        S[tong].push( w ) ;
    }

    for(auto n : {0,1,2,3,4 }){
         cout << "��["<<n<<"] : ";   Print_stack( S[ n ]) ;
    }
 } // end of main() �׻� �ݴ� ��ȣ���� �̷� ǥ�ø� �ؾ� �����ϴ�.

