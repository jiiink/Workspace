// array�� static structure�μ� �̸� ������ Ȯ���ϹǷ�
// �ӵ��� dynamic array�� vector���� ������.

#include <iostream>    // #include "zohbox.h"
#include <array>
#include <algorithm>   // int mymy[100] ;  double my[23] ;

#define  pout(MSG,X)  cout<<"\n"<<MSG<< X ;
#define allout(MSG,X)   cout<<"\n"<<MSG<<":\n";for(auto w:X)cout<<w<<" , "
#define  SKIP  cout<<"\n"
using namespace std ;


int main() {
   array<double, 9> my { 9.3, 7.5, 5.4, 3.1, 1.5, 11.5, -7.2 };
   pout ( "array ũ��: ", my.size( ) ) ;


   SKIP ;
   allout("Sorting( )�� ", my ) ;
   sort( my.begin(), my.end()) ;
   allout("Sorting( )�� ", my ) ;

   SKIP ;
   for(auto &w: my) w *= 0.1 ;
   allout("w *= 0.1 �۾� ��  ", my ) ;

   cout << "\n ���� ù ���� ����..." << my.front() << "\n" ;
   cout << "\n ���� ������ ���� ����..." << my.back() << "\n" ;

}

