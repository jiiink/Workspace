#include <bits/stdc++.h>

#define  pout(MSG,X)     cout<<"\n"<<MSG<< X << "\n" ;
#define  allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
#define  SKIP            cout<<"\n"
using namespace std ;


int main () {
    array<int,0> first; // ������. ���ô� ������ �� �ȿ� �ƹ��͵� ����.
    array<int,5> second;
    array<int,5> third = {1,2,3 };

    cout << "array first [] : "  << (first.empty() ? "is empty" : "is not empty") << '\n';
    cout << "array second[] : " << (second.empty() ? "is empty" : "is not empty") << '\n';
    cout << "array third [] : " << (second.empty() ? "is empty" : "is not empty") << '\n';

    allout("first []= ", first) ;
    allout("second[]= ", second) ;
    allout("third []= ", first) ;

    return 0;
}
