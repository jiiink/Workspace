// Generic find algorithm with input iterators associated with arrays, lists, and iostreams
#include <iostream>
#include <cassert>
#include <algorithm>
#include <list>
#include <iterator>
using namespace std;

int main() {

  list<int> list1 = {12, 3, 25, 7, 11, 213, 7, 123, 29, -31};

  // ����Ʈ���� ���Ҹ� ã�� ���� ������ ����� ���� find( )�� ����ϴ� ��.
  auto i = find(list1.begin(), list1.end(),7);
  cout << "\n ���� 3 --> " << *i ;
  cout << "\n ���� 4 --> " << *(++i) ; // *(i+1) ; �̷��� �ϸ� �ȵ˴ϴ�.



  cout << "\n 'x'�� ������ �ܾ �Է��Ͻÿ�. : " << flush;

  istream_iterator<char> in(cin);
  istream_iterator<char> eos;
  find(in, eos, 'x');

  cout << "\n\n 'x' �ٷ� ���� Char=> " << *(++in) <<  endl;
  return 0;
}
