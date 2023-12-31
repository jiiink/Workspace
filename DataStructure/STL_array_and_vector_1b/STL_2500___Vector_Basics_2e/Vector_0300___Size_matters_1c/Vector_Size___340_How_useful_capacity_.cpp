/*
v.capapcity( ) ; ���� vector�� ���� �� �ִ� ������ ����.
v.size( ) ; ���� ������ ����

 */

#include <iostream>
#include <vector>
using namespace std;

int main () {
  vector<int> myvector;
  vector<unsigned char>::size_type v1 = myvector.max_size();

  // set some content in the vector:
  for (int i=1; i<= 10; i++) myvector.push_back(i);

  cout << "size: " << (int) myvector.size() << '\n';
  cout << "capacity: " << (int) myvector.capacity() << '\n';
  cout << "max_size: " << v1 << '\n';

  cout << "\n\nvector�� ũ�� 50���� ���Դϴ�.\n " ;
  myvector.reserve(50) ;
  cout << "size: " << (int) myvector.size() << '\n';
  cout << "capacity: " << (int) myvector.capacity() << '\n';
  cout << "max_size: " << v1 << '\n';

  return 0;
}

