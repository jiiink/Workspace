#define vout(msg,x)    cout<<"\n"<<msg;for(auto s:x) cout << "  " << s ;

#include <iostream>     // cout
#include <algorithm>    // for_each
#include <vector>       // vector
using namespace std;


bool IsOdd (int i) { return (i%2)==1; }

int main () {
  vector<int> myvector {1,2,3,4,5,6,7,8,9,10, 11, 12};


  vector<int>::iterator bound;
  bound = partition (myvector.begin(), myvector.end(), IsOdd);
  // ���� ���Ҹ� 2���� �ɰ���. Ȧ���� ����, ¦���� ����, �� ���� bound

  vout("myvector[]= ", myvector) ;
  cout << "\n bound= " << bound - myvector.begin();
  return 0;

}
