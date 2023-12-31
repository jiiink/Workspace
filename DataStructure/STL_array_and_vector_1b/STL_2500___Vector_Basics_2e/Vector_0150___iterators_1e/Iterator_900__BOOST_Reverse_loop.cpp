
#include <list>
#include <iostream>
#include <boost/range/adaptor/reversed.hpp>

// BOOST�� ��ġ�� ������ compiler option���� boost�� �����ؾ� �ѵ�,....

using namespace std ;

int main() {
   list <int> x {11, 44, 77, 55, 44, 22, 33, 30, 88, 99, 55, 44};

   cout << "\n Normal Loop" <<  endl;
   for (auto i : x)  cout <<  i << '\n';

   cout <<  "\n Reversed Loop" << endl;
   for (auto i : boost::adaptors::reverse(x))
      cout << i << '\n';
}
