// includes algorithm example
#include <iostream>     // cout
#include <algorithm>    // includes, sort
#include <array>

bool myfun (int i, int j) { return i<j; }

using namespace std;

int main () {
  array<int,10> container {5,10,15,20,25,30,35,40,45,50};
  array<int,4 > continent {140,133,127,110};

  sort (container.begin(),container.end() ); // �۾� ���� sort( )�� �ؾ� ��.
  sort (continent.begin(),continent.end() );

  // using default comparison:
  if ( includes(container.begin(),container.end() ,continent.begin(),continent.end()) )
    cout << "1. ��� ���ԵǾ� ����, ���κ����� !\n";
      else   cout << "1. �����ִ� ���Ұ� �ϳ� �̻� ���� \n";

  // using myfunction as comp:
if ( includes(container.begin(),container.end() ,continent.begin(),continent.end(), myfun) )
    cout << "2.  ��� ���ԵǾ� ����, ���κ����� !\n";
      else   cout << "1. �����ִ� ���Ұ� �ϳ� �̻� ����!\n";
  return 0;
}
