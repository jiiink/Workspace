#include <bits/stdc++.h>
using namespace std;
#define allout(MSG,X)   cout<<"\n"<<MSG <<" : ";for(auto w:X)cout<<w<<", "

// x.end( )�� ���̴�.  �������� �ƴ϶�...
// �Ʒ� vec�� ������ ���Ҵ� 49������ �� ���� "}", ���ٸ� ���̴�.

int main() {

    vector<int> vec { 22, 33, 2, 11, 89, 49 };

    cout <<  "\n vec[4]= " << vec[4] ;
    cout <<  "\n *vec.end()-1 = " << *(vec.end()-1)  ;
    vec.clear() ;
    vec.push_back(99);
    vec.push_back(100);
    allout("\n Clear ����: ", vec) ;
    cout <<  "\n clear( ) ���� *vec.end()-1 = " << *(vec.end()-1) ;
    cout <<  "\n clear( ) ���� *vec.begin( ) = " << *(vec.begin()) ;
    cout <<  "\n clear( ) ���� vec�� size(ũ��)  = " << sizeof(vec) ;
    cout <<  "\n clear( )���� vec[4]= " << vec[4] << endl ;
} // end of main( )
