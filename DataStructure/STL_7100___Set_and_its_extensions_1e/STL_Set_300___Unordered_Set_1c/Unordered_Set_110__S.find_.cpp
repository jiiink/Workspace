#include <bits/stdc++.h>
using namespace std ;

int main () {

  unordered_set<string> myset = { "hat", "umbrella", "suit", "cola", "Box" };
  unordered_set<string> Qset  = {"hat","sunglasses","suit","cola", "t-shirt"} ;

  cout << "\n S.count()�� ���翩�� �Ǵ��ϱ� \n" ;
  for (auto& x: Qset ) {
    if (myset.count(x)>0)  cout << x << ": ����." << endl;
    else                   cout << x << ": ����." << endl;
  }

  cout << "\n S.find()�� ���翩�� �Ǵ��ϱ� \n" ;
  for (auto& x: Qset ) {
    if (myset.find(x) != myset.end() )  cout << x << ": ����." << endl;
    else                   cout << x << ": ����." << endl;
  }

  return 0;
}
