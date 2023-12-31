// range heap example
#include <iostream>     // cout
#include <algorithm>    // make_heap, pop_heap, push_heap, sort_heap
#include <vector>       // vector

using namespace std;

int main () {
  int myints[] = {10,20,30,5,15};
  vector<int> v(myints,myints+5);

  make_heap (v.begin(),v.end());
  cout << "���� ū ���� : " << v.front() << '\n';

  pop_heap (v.begin(),v.end()); v.pop_back();
  cout << "pop ������ ū ���� : " << v.front() << '\n';

  v.push_back(99); push_heap (v.begin(),v.end());
  cout << "max heap ���� 99 �ֱ�: " << v.front() << '\n';

  sort_heap (v.begin(),v.end());

  cout << "���� ��:";
  for (unsigned i=0; i<v.size(); i++)
    cout << ' ' << v[i];

  cout << '\n';

  return 0;
}
