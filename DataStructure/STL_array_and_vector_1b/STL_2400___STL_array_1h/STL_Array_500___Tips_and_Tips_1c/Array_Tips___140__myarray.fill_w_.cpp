#include <bits/stdc++.h>
using namespace std ;

int main () {
  array<string,6> myarray;

  myarray.fill( "Pusan");

  cout << "\n myarray contains:";
  for ( string& x : myarray) { cout << ' ' << x; }

  cout << "\n arr1 contains:";
  array<string, 8> arr1;
  arr1.fill("-�޷�-");
  for(auto& s: arr1) // �Լ��� ǥ����, C++���� ����.
        cout << s  ;



  return 0;
}
