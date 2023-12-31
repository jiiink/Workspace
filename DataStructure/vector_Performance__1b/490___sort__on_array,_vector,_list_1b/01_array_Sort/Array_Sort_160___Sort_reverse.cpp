#include <string>
#include <iterator>
#include <iostream>
#include <algorithm>
#include <array>
#define  allout(MSG,X)  cout<<"\n"<<MSG;for(auto w:X){cout<<" "<<w<<",";}
using namespace std ;

int main() {
    array <int,    3> a1   { {61,52,43} };       // double-braces required
    array <int,    3> a2 = { 11, 22, 33 };    // except after =
    array <string, 9> a3 = { {string("a"), "b", "PNU", "�˰�����", "������", "���ϳ�"}  };

    allout("a1���� ��", a1) ;
    sort(a1.begin(), a1.end());
    allout("a1 ���� ��", a1) ;
    allout("a2 ó�� ��", a2) ;
    reverse( a2.begin(), a2.end() );
    allout("a2 ó�� ��", a2) ;

    // ranged for loop is supported
    sort(a3.begin(), a3.end());
    allout("a3�� ����", a3) ;
} // end of main( )
