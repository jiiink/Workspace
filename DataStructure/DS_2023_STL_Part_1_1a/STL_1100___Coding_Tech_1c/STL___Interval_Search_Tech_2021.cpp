#include <bits/stdc++.h>
using namespace std;

int mytype(int val){
    vector< int > interval {0, 15, 61, 100, 200} ;
    int type = 0 ;
    for(int cut: interval){
        if( val < cut ) return( type);
        else type++ ;
    }
}



int main() {

    vector <int> din { 23, -9, 44, 67, 103, 22, 16, 78} ;
    int code ;

    for( int w : din ){
        code =   mytype( w ) ;
        cout << "\n w = "<< w ;;
        switch (code){
            case 0 :  cout << " Error: ���� ���� " ; break ;
            case 1 :  cout << " ���(Child) " ; break ;
            case 2 :  cout << " ����(Adult) " ; break ;
            case 3 :  cout << " ����(Old) " ; break ;
            case 4 :  cout << " Error: �ʹ� ���� ����. Ȯ�ο�� " ; break ;
            default:  cout << " �̰� ���� ? Ȯ�� �ٶ� " ; break ;
        }
    }

} // end of main()  by Zoh Q.
