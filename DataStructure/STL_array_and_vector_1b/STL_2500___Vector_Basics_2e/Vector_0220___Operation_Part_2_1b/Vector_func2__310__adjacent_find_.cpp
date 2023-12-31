#include <iostream>     //cout
#include <algorithm>    //adjacent_find
#include <vector>       //vector
using namespace std ;

// ������ ���ҳ��� � Ư���� ������ �����ϴ����� ã�Ƴ� ��

bool myfunction (int i, int j) {
  return ( abs(i-j) <= 3 ) ;  //  ������ ���ҳ��� 3 ���� ���̰� ���� ���
}

int main () {


  vector<int> myvector = {  5, 14, 15, 44, 51, 30, 30, 10, 12, 63, 62};
  vector<int>::iterator it;

  // using default comparison�� ������ ���ҳ��� ���� ��� :
  it =adjacent_find (myvector.begin(), myvector.end());

  if (it!=myvector.end())
   cout << "\n �����ؼ� ��Ÿ�� ���� ����: " << *it << '\n';

  //using predicate comparison:
  it = adjacent_find (myvector.begin(), myvector.end(), myfunction);

  if (it!=myvector.end())
   cout << " myfuntion( )���� �˻�� ���: " << *it << '\n';

  return 0;
}
