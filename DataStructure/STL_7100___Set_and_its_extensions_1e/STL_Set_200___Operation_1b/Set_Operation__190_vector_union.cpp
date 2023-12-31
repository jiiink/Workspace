#include <iostream>     // cout
#include <algorithm>    // set_intersection, sort
#include <vector>       // vector
#include <set>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" :";for(auto w:X)cout<<w<<","
using namespace std ;

int main () {
  vector<int> v1 {5,10,15,20,25};
  vector<int> v2 {50,40,30,20,10};
  vector<int> v3 (10);                      // 0  0  0  0  0  0  0  0  0  0
  vector<int>::iterator it;

  sort (v1.begin(), v1.end() );     //  set intersection�� �Ϸ��� �ݵ�� ������ �Ǿ� �־�� �Ѵ�. �ݵ��� ....
  sort (v2.begin(), v2.end() );     // �� sort�� �ؾ� �ϳ��� ? �װ� set_intersect�� head merge�� ���� �����̿�....

  it=set_union ( v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());

  allout("������ vector v3[]= ", v3) ;

  v3.resize(it-v3.begin());
  allout(" resize( ) �� vector v3[]= ", v3) ;

  return 0;
}
