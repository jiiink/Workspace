#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "

// x.end( )�� ���̴�.  �������� �ƴ϶�...
// �Ʒ� vec�� ������ ���Ҵ� 49������ �� ���� "}", ���ٸ� ���̴�.

int main() {

    vector <int> vec = { 22, 33, 2, 11, 89, 49 };
    vector <int>::iterator it ;

    it =  find( vec.begin(), vec.end(), 11) ;
    cout << "\n ans1 = " << it - vec.begin() ;

    it =  find( vec.begin(), vec.end(), 31) ;
    cout << "\n ans2 = " << it - vec.begin() ;

} // end of main( )
