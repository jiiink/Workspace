//  ���������� error  ����� ����
//  a. �� empty stack���� pop( ) �غ���
//  b. empty stack�� ������ ���� ������ ä�� �־��
//  c.  TYPE A�� stack�� �ٸ� TYPE�� �־��
//  d.  stack�� �߰��� ������ �־� ����
//  e. vector���� ����� �� �ִ� find( ), sort( )�� ������ ����غ���

#include <bits/stdc++.h>
#include "my_stack.h"
using namespace std;


int main() {

  stack < float > mys ;
  string toto ;

  toto = "pizza" ;

  mys.push( 45.6 ) ;
  mys.push( 0.567) ;
  mys.push( 56 ) ;   // �����鼭 �־��ֳ׿�. int <-> float ��ȯ
  mys.push( toto ) ;  // � ������ ������ Ȯ���� �غ��ô�.


  return 0;
}
