#include <bits/stdc++.h>
using namespace std;

#include "mymaptool.h"


int main () {

  map<char,int> mymap;
  char c;

  mymap ['a']=101;   mymap ['c']=202;   mymap ['f']=303;

  for (c='a'; c<'h'; c++)   {
    cout << " '" << c << "' ";
    if (mymap.count(c)>0)   cout << " �� ���ԵǾ� ����.\n";
    else                    cout << " �� ���ԵǾ� ���� ����.\n";
  }

  return 0;
}
