#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

void showvv( vector< vector <int> > X ) {
    for(auto Vw: X) {
        cout << "\n > " ;
        for(auto z: Vw ){
            cout <<  z << ", " ;
        }
    }
}

// �Ʒ� �Լ��� ä��� �˴ϴ�. �ϴ��� �״�� ���
vector<vector<int>> Xrotate( vector<vector<int>>  Z ) {
    vector<vector<int>> Result ;
    Result = Z ;
    return ( Result ) ;
}


int main() {
    vector< vector<int> > T { {21}, {54,30,2}, {17,9}, {50},\
                           {4,62,99,21}, {16,20}, {9,5,54} }, Q ;

    cout << "\n\n �ʱ� Xrotate( ) ��" ;
    showvv( T ) ;
    T = Xrotate( T ) ;
    cout << "\n\n 1�� Xrotate( ) ��" ;
    showvv( T ) ;

    T = Xrotate( T ) ;
    cout << "\n\n 2�� Xrotate( ) ��" ;
    showvv( T ) ;


} // end of main()
