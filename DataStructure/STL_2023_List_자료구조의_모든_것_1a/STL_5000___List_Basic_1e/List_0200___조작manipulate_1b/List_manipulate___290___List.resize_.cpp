#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
using namespace std ;

int main () {
  list<int> mylist {10, 11, 12, 13, 14, 15, 16, 17 };

  cout << "\n 1. ���� ����Ʈ�� ũ�� = " << mylist.size() ;
  allout("ó�� mylist[] = ", mylist ) ;
  mylist.resize(5);
  cout << "\n 2. ���� ����Ʈ�� ũ�� = " << mylist.size() ;
  allout("After resize(5)= ", mylist ) ;
  mylist.resize(10,100);

  allout("After resize(10,100)= ", mylist ) ;\
  cout << "\n 3. ���� ����Ʈ�� ũ�� = " << mylist.size() ;

  mylist.resize(12);
  allout("After resize(12)= ", mylist ) ;
  cout << "\n 4. ���� ����Ʈ�� ũ�� = " << mylist.size() ;



  return 0;
}

