#include <bits/stdc++.h>
#define allout(msg,lx)  cout<<"\n"<<msg<<" : ";for(auto &w : lx ) cout<< " " << w ;
using namespace std;


int main () {

  list<int> mylist {15,36,7,17,20,39,4,1};


  allout("���� ����Ʈ . ", mylist ) ;
  mylist.reverse( ) ;
  allout("������ ���� ����Ʈ. ", mylist ) ;
  mylist.reverse( ) ;

  mylist.pop_front();
  mylist.pop_back() ;

  allout("�� �ٽ� ������ ���� ����Ʈ. ", mylist ) ;

  return 0;
}


