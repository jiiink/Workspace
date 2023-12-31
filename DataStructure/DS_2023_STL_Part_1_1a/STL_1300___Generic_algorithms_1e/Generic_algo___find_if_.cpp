
#include <iostream>     // cout
#include <algorithm>    // find_if
#include <vector>       // vector
using namespace std ;

bool IsOdd (int i) {
  return ((i%2)==1);
}

int main () {
  vector<int>   myvector { 24, 6, 12, 80, -9, 65, 66, 51, 35, 9, 80,  100};


  vector<int>::iterator it = find_if (myvector.begin(), myvector.end(), IsOdd);
  cout << "\n ù Ȧ����  " << *it << '\n';
  cout << "\n ù Ȧ����ġ��  " << it - myvector.begin() << '\n';

  auto it2 =  find_if ( it+1 , myvector.end(), IsOdd);
  cout << "\n �� ° Ȧ����  " << *it2 << '\n';
  cout << "\n �Ѷ� Ȧ����ġ��  " << it2 - myvector.begin() << '\n';

  return 0;
}
