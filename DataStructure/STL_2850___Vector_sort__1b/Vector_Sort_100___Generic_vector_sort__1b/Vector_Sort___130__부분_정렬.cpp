// vector���� ������ �� �ִ� �پ��� ����(operator) �� sorting�� ������ ��

#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

int main() {

    int i,j,t ;

    vector <int>    iv = { 23, 21, 20, 18, 16, 15,  12, 9, 8, 7, 5, 3, 0, -6 } ;


   allout(" sort()�� iv[]", iv ) ;
    sort( iv.begin()+3, iv.begin()+ 6 ) ;  // 3,4,5���� sort, 6�� �ƴ�. end()�� ����
    allout(" sort()�� iv[]", iv ) ;


} // end of main ( )
