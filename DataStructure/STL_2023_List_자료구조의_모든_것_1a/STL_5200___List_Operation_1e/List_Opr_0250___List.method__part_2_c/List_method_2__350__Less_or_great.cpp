// �ڷᱸ�� �ǽ� 2���� ����Ʈ�� ��ġ �ϳ��� ���� ���ҿ� ����
// ���� �� �ִ�. �� �� �������� ����� �ָ��ϸ鼭 ���캸�ƾ� �Ѵ�.
// ������ STL��  generic equal( )�� �����̴�. ^^ C, C++ ������ �� �� ����...

#define  skip (cout << "\n\n")
#include <bits/stdc++.h>
using namespace std;


int main() {

  cout << "����Ʈ ũ�� ���ϱ�  "    << endl;
  list  <int> la { 23, 34, 55, 66, 12, 9 } ;
  list  <int> lb { 99, 23, 34, 55, 66, 12, 9 } ;
  list  <int> lc { 23, 34, 55 } ;
  list  <int> ld { 23, 34, 55, 66, 10, 9 } ;
  list < list<int> > LLx = { la, lb, lc, ld };

  if ( la < lb ) cout << "la < lb " ;
  else cout << "la >= lb " ;

  skip ;
  if ( la < lc ) cout << "la < lc " ;
  else cout << "la >= lc " ;

  skip ;
  if ( la < ld ) cout << "la < ld " ;
  else cout << "la >= ld " ;

  // sort( LLx.begin(), LLx.end() ) ;


  return 0;
}
