#include <bits/stdc++.h>
using namespace std;

#include "mymaptool.h"


int main () {
  map <string,int> mymap;
  string w ;

  w="�����" ;

  mymap[ w ]  = 2300 ;
  mymap["����"] = 230 ;
  mymap.emplace("���",     3500);
  mymap.emplace("¥���",   5500);
  mymap.emplace("��������", 4000);
  mymap.emplace("�佺Ʈ" ,  1200);

  mapdump("mymap[]: ", mymap ) ;

  return 0;
}
