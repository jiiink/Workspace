#include <bits/stdc++.h>
using namespace std;

#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;


int main () {

  list<int> mylist = {60, 55, 17, 100, 7, 100, 100, 84, 14} ;
  myout("���� ����Ʈ : ", mylist ) ;

  mylist.remove( 100 ); // ��� ã�Ƽ� ����ϴ�.
  myout(" 100��  ���� ���� : ", mylist ) ;

  return 0;

}
