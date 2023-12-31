
#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main () {

  list<int> mylist = { 12, 34, 56, 78, 90, 89, 90 };
  list<int>::iterator it;


  it = mylist.begin();
  allout ("���� ����Ʈ ", mylist) ;
  ++it;      // ���� ���ҷ� �Ѿ.

  mylist.insert (it,100);
  allout ("�� ���� 100 ���� �� ����Ʈ \n ", mylist) ;

  mylist.push_back( 333 ) ;
  allout ("push_back ���� \n ", mylist) ;
  mylist.push_front( 555 ) ;
  allout ("push_front ���� \n ", mylist) ;


  mylist.insert (it,2,200);
  allout ("������ ���� ���� : 200�� 2��  ���� �� ����Ʈ \n ", mylist) ;
  --it;       // it points now to the second 20

  vector<int> myvector (5,-99);
  mylist.insert (it,myvector.begin(),myvector.end());
  allout ("vector  ���� �� ����Ʈ \n ", mylist) ;



  return 0;
}
