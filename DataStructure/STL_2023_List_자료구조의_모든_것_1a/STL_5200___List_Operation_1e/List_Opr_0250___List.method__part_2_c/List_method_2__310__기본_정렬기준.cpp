// �ڷᱸ�� �ǽ� 2���� ����Ʈ�� ��ġ �ϳ��� ���� ���ҿ� ����
// ���� �� �ִ�. �� �� �������� ����� �ָ��ϸ鼭 ���캸�ƾ� �Ѵ�.
// ������ STL��  generic equal( )�� �����̴�. ^^ C, C++ ������ �� �� ����...

#define  skip (cout << "\n\n")
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

bool myfun(list  <int>  a, list  <int>  b){
    return( a < b ) ;
}

int main() {

  cout << "����Ʈ ũ�� ���ϱ�  "    << endl;
  list  <int> la { 25, 34, 55, 66, 12, 9 } ;
  list  <int> lb { 99, 23, 34, 55, 66, 12, 9 } ;
  list  <int> lc { 23, 34, 55 } ;
  list  <int> ld { 23, 34, 55, 66, 10, 9 } ;
  list < list<int> > LLX = { la, lb, lc, ld };

  if ( la < lb ) cout << " la < lb " ;
  else cout << "la >= lb " ;

  skip ;
  if ( la < lc ) cout << " la < lc " ;
  else cout << " la >= lc " ;

  skip ;
  if ( la < ld ) cout << " la < ld " ;
  else cout << " la >= ld " ;

  cout << "\n LLX: " ;
    for(auto w: LLX){
        cout << *w.begin() << " --" ;
    }

   LLX.sort( myfun ) ;
  cout << "\n after sort: " ;
    for(auto w: LLX){
        cout << "\n" ;
        for(auto q : w ) cout << q << ", " ;
    }


  return 0;
}
