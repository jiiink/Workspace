/*
STD array�� �� ��ü�� �⺻���� ��������� �ƴϰ�
�⺻ C-type array, int x[10]�� ���� ���� ������� aggregate�̴�.
�� �⺻ array�� class�� ������� ���� �����ϴ� ������ ���̴�.

*/

#include <bits/stdc++.h>
using namespace std ;

typedef array<int, 5> ifive ;

int main() {

    int x[5] =  { 9, 8, 7, 6, 5} ;
    ifive my    { { 1, 2, 3, 4, 5 } } ;   //�� {}�� �迭 �ʱ�ȭ, �� {}�� class ǥ��
    ifive you = { 11, 22, 33, 44, 55 } ; // =�� ����ϸ� outer { }�� ���ʿ�

    cout << "\n my: " ;
    for(auto s : my ) cout << "  " << s  ;

    array < ifive, 3 > dry  { { {1,2,3,4,5}, {3,3,3,3,3}, {7,7,7,7,7} } } ;
    array < ifive, 5 > wet ;

    cout << "\n dry[][]=  " ;
    for(auto s : dry ) {
        cout << "\n" ;
        for (auto t : s ) cout << "  " << t  ;
    }

    wet[0] =   {11,12,13} ;
    wet[1] =   {33,34,35 } ;
    wet[2] =  {-1,-2,-3,-4} ;
    wet[3] =  {100}   ;

    cout << "\n\n wet[][] = " ;
    for(auto s : wet ) {
        cout << "\n" ;
        for (auto t : s ) cout << "  " << t  ;
    }
} // end of main( )
