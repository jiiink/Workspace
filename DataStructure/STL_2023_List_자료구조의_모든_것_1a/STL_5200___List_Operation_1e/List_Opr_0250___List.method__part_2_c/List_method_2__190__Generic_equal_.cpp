// �ڷᱸ�� �ǽ� 2���� ����Ʈ�� ��ġ �ϳ��� ���� ���ҿ� ����
// ���� �� �ִ�. �� �� �������� ����� �ָ��ϸ鼭 ���캸�ƾ� �Ѵ�.
// ������ STL��  generic equal( )�� �����̴�. ^^ C, C++ ������ �� �� ����...

#include <bits/stdc++.h>
using namespace std;

int main() {

  cout << "����Ʈ ���ϱ�  "    << endl;
  list   <string> driver_list = {"Clark", "Rindt", "Senna"  };
  vector <string> vec = { "Clark", "Rindt", "Senna", "Berger"  };
  deque  <string> deq = { "Clark", "Berger" };


  vec.insert(vec.end(), "Clark");
  vec.insert(vec.end(), "Rindt");
  vec.insert(vec.end(), "Senna");
  vec.insert(vec.end(), "Berger");

  deq.insert(deq.end(), "Clark");
  deq.insert(deq.end(), "Berger");

  // driver_list�� ù 3���Ұ�  vecd�� ��� ��ġ���� ���� ���� �˻��Ѵ�. //
  if (equal(driver_list.begin(), driver_list.end(), vec.begin()) == 0 )
       cout << " 1�� �˻� - �ٸ� \n" ;
  else cout << " 1�� �˻� - ���� \n" ;

  // deq�� ��� ���Ұ� driver_list�� �������� �˻���.
  // are not equal in all corresponding positions:
  if ( equal(deq.begin(), deq.end(), driver_list.begin()) == 0 )
       cout << " 2�� �˻� - �ٸ� \n" ;
  else cout << " 2�� �˻� - ���� \n" ;

  // Find the corresponding positions in deq and driver_list
  // at which unequal elements first occur:
  pair<deque<string>::iterator, list<string>::iterator>
    pair1 = mismatch(deq.begin(), deq.end(),
                     driver_list.begin());

  if (pair1.first != deq.end())
    cout << "ù��° �ٸ� ����ġ in deq and driver_list:\n  "
         << *(pair1.first) << " and " << *(pair1.second)
         << endl;

  return 0;
}
