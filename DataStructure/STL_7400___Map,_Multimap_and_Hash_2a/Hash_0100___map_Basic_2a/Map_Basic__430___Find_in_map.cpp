#include <bits/stdc++.h>
using namespace std;

#include "mymaptool.h"


int main () {

  map <char,int> mymap;
  map <char,int>::iterator it;

  mymap['a']=  50;
  mymap['b']= 100;
  mymap['c']= 150;
  mymap['d']= 200;

  cout << "b �� map���� �����մϴ�. \n" ;

   it =  mymap.find('b') ;
  if ( it != mymap.end()) // �ִ��� ?
         mymap.erase (it);

  // print content:
  cout << "elements in mymap:" << '\n';
  cout << "a => " << mymap.find('a')->second << '\n';
  cout << "c => " << mymap.find('c')->second << '\n';
  cout << "d => " << mymap.find('d')->second << '\n';
  cout << "b => " << mymap.find('b')->second << '\n';  // ���� ��쿡�� 0

  return 0;
}
