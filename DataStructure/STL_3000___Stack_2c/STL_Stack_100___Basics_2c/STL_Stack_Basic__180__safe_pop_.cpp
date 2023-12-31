// ���������� error  ����� ����
//  a. �� empty stack���� pop( ) �غ���
//  b. empty stack�� ������ ���� ������ ä�� �־��
//  c.  TYPE A�� stack�� �ٸ� TYPE�� �־��
//  d.  stack�� �߰��� ������ �־� ����
//  e. vector���� ����� �� �ִ� find( ), sort( )�� ������ ����غ���

#include <bits/stdc++.h>
#include <stdexcept>
#include "my_stack.h"
using namespace std;

void safe_pop( stack< float> &S ) {
    if (!S.empty())  S.pop( ) ;
    else {
       throw underflow_error("��������... stack�� ����ٱ�..");
       exit(0) ;
    }
}

int main() {

  stack < float > mys ;

  mys.push( 45.6 ) ;
  mys.push( 0.567) ;
  mys.push( 56 ) ;  // �����鼭 �־��ֳ׿�. int <-> float ��ȯ

  cout << "\n step 01. " << mys ;
  safe_pop( mys ) ;
  cout << "\n step 02. " << mys ;
  safe_pop( mys ) ;
  cout << "\n step 03. " << mys ;
  safe_pop( mys ) ;
  cout << "\n step 04. " << mys ;
  safe_pop( mys ) ;
  cout << "\n step 05. " << mys ;
  return 0;
}
