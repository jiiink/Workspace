
#include <iostream>
#include <set>
#include <string>
using namespace std;

#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "

int main() {

    set<int> S, T, U ;

    S = { 4, 5, 6, 1, 2, 3, 3, 3, 3 } ;
    T = { 1, 2, 3, 4, 5, 6 } ;
    U = { 3, 4, 5 } ;


    if( S == T ) cout << "\n �� ���� S�� T��  �����ϵ���" ;
    else cout << "\n �� ������ �ٸ��ϴ�. " ;

    if( S != U ) cout << "\n �� ���� S�� U��  �ٸ��ϴ�. " ;
    else cout << "\n �ƴϿ� �� ������ �����ϴ�. " ;

    if( U < S ) cout << "\n U�� S�� �κ������Դϴ�. " ;

    allout("\n Before erase U", U ) ;
    U.erase(5) ;
    U.erase(55) ;
    allout("\n After erase U", U ) ;
    U.erase(55) ;
    allout("\n After erase 55 from U", U ) ;
}
