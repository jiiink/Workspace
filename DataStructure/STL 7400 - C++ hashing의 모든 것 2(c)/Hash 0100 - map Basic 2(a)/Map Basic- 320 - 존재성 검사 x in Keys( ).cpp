#include <bits/stdc++.h>
using namespace std;

int main () {
  map <char,int> mymap;
  map <char,int>::iterator it, ie ;
  int i, j ;

  string mystr ="compuTer scieTce" ;
  vector<char> carray( mystr.begin(), mystr.end() );

  mymap['b'] = 100;
  mymap['e'] = 200;
  mymap['n'] = 300;
  mymap['t'] = 211;
  mymap['c'] = 323;
  mymap['i'] = 367;


  if( mymap.find('T') == mymap.end() ) {
    printf("\n  mymap['T']==mymap.end()�� ����. \n") ;
  }

  if( mymap.count('T') == 0  ) {
    printf("\n  mymap['T']�� ������ 0 �̶�� �������� �ʴ´�? \n") ;
  }

  printf("\n mymap[T] = %d", mymap['T'] ) ;
  printf("\n mymap[e] = %d", mymap['e'] ) ;
  printf("\n ���� ���� ����ϸ� mymap[#] = %p  <== ????? ", mymap.find('#') ) ;
  printf("\n ���� ���� ����ϸ� mymap[#] = %p  <== ????? ", mymap.find('#') ) ;

  cout << "\n mymap[]�� ���� �˻� \n" ;

  for( auto w : carray ) {
       //  cout << " " << w ;
       if( mymap.find(w) == mymap.end()) printf("\n '%c'�� key�� �ƴ� ", w) ;
       else printf("\n mymap[%c] = %d", w , mymap[w] ) ;
  }
  // �̷��� �ϸ� mymap['T']=0���� �����ǰ� �ȴ�.
  return 0;
}
