#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<", "
using namespace std;


int main() {

  list<char> mylist = { 'S', 'u', 'm', 'm', 'e', 'r', '$' } ;
  list<char>::iterator where, next ;
  where = find(mylist.begin(), mylist.end(), 'e');

  cout << "����Ʈ�� ��ġ���� iterator �����ϱ� \n" << endl;
  cout << " *where = " << (*where) ;
  cout <<  "\n begin() ���� = " <<  *mylist.begin() ;
  cout <<  "\n begin() ���� ���� = " << *(++mylist.begin()) ;
  cout <<  "\n end() ���� = " <<  *mylist.end();  // �̰��� ���� ���Ұ� �ƴ�. ���� ����
  cout <<  "\n T.end( ) �ٷ� �� ���� = " <<  *(--mylist.end());

  allout("\n mylist[]= ", mylist ) ;
  return 0 ;
}
