#include <bits/stdc++.h>
using namespace std ;

#include "mymaptool.h"


int main () {
  map <string,int> mymap;

  mymap.emplace("���",     1500);
  mymap.emplace("¥���",   5500);
  mymap.emplace("��������", 4000);
  mymap.emplace("�佺Ʈ" ,  1200);
  mymap["�и�"] = 6500 ;

  while (!mymap.empty())   {
    cout << "begin()==> " << mymap.begin()->first << "\n"   ;
    mapdump("mymap[]: ", mymap ) ;
    mymap.erase(mymap.begin());
  }

  mapdump("Last mymap[]: ", mymap ) ;
  return 0;
}
