#include <bits/stdc++.h>
using namespace std;

int main (void) {
  vector<int> myvector(10);

  try {
    myvector.at(20)=100;      // vector::at throws an out-of-range
  }
  catch (const out_of_range& oor) {
    cerr << "Out of Range ������ �߻��߽��ϴ�. �����޽����� \n " << oor.what() << '\n';
  }

   myvector.at(20)=100;

  return 0;
}
