// map::at,, Error�� Ȯ���ϱ� ���ؼ� �ݵ�� ���.

#include <bits/stdc++.h>
using namespace std;

#include "mymaptool.h"


int main () {
  map <string,int> mymap = {
                { "Coke", 1350 },
                { "Orange", 780 },
                { "Cheese", 7800 },
                { "Water", 0 } };

  mymap.at("Coke")   = 1000;
  mymap.at("Cheese") = 2000;
  mymap.at("Water")  = 300;
  mymap.at("What?")  = 800;  // error �߻��� �׷��� ������ ���� ���´�.
  printf("\n mymap[Xoo]= %d", mymap["Xoo"]) ;

  mapdump("mymap[]", mymap ) ;

  return 0;
}
