// vector���� ������ �� �ִ� �پ��� ����(operator) �� sorting�� ������ ��

#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

int main() {

    int i,j,t ;

    vector <int>    iv = { 56,  22, 0, 12, 100, 34, 9, -56, 0 } ;
    vector <int> tv ;
    vector <string> sv = { "Mon", "-X-", "Kong", "Pepsi", "Note", "__cool" } ;

    allout(" sort()�� sv[]", sv ) ;
    sort( sv.begin(), sv.end() ) ;
    allout(" sort()�� sv[]", sv ) ;

    tv = iv ;
    allout(" sort()�� iv[]", iv ) ;
    sort( iv.begin(), iv.end(),  greater<int>() ) ; // �Ųٷ� sorting
    allout(" sort()�� iv[]", iv ) ;

    allout("  tv[]", tv ) ;

} // end of main ( )
