#include <bits/stdc++.h>
using namespace std ;
#include "mymaptool.h"

int main () {

  map<char,int> mymap;
  map<char,int>::iterator itlow,itup;

  mymap['a']=  20;
  mymap['c']=  40;
  mymap['f']=  60;
  mymap['g']=  80;
  mymap['k']= 101;
  mymap['l']=  62;
  mymap['n']=  83;
  mymap['p']= 104;

  mapdump("\n ����� �� mymap[]= ", mymap ) ;

  itlow = mymap.lower_bound ('f');  // 'f' �ٷ� ���� key
  itup  = mymap.upper_bound ('l');   // 'l' �ٷ� ���� key

  mymap.erase(itlow,itup);        // erases [itlow,itup)

  mapdump("\n ���� �� mymap[]= ", mymap ) ;

  return 0;
}





