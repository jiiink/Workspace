#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
using namespace std;


int main() {

  vector<int> v { 8, 7, 1, 3, 10, 2, 5, 6, 4, 9 } ;


  const int N = 4;

  // N��°(0���� ����)���Ҹ� N��° ��ġ ��Ű�� , �� pivot ���Ұ� �ȴ�.
  // �׺��� ���� ���� ��� pivot�� ������, ū ���� pivot�� ���ʿ� �д�.
  // �� �۾��� O(N)�� ó���Ѵ�. �� �۾��� �ſ� ������.

  allout( "1. v[]= ", v ) ;
  nth_element(v.begin(), v.begin() + N, v.end());
  allout( "2. v[]= ", v ) ;

  return 0;
}
