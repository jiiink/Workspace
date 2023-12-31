// Multi-set Demonstration (�� ���տ�  ���� ���Ұ� �� �� �ִ� ����)

#include <iostream>
#include <cassert>
#include <list>
#include <cstring>
#include <set>
#define allout(MSG,X)   cout<<"\n"<<MSG<<"=> ";for(auto w:X)cout<<w<<", "
using namespace std;
template <typename Container>
Container make(const char s[]) {
  return Container(&s[0], &s[strlen(s)]);
}

int main() {

  list<char> list1 = make< list<char> >("Show must go on forever!!!!") ;

  multiset<char> multiset1, multiset2 ;
  list<char>::iterator i;

  for (i = list1.begin(); i != list1.end(); ++i)
    multiset1.insert(*i);  // ���ڸ� �ϳ��� �ֽ��ϴ�. �ߺ����

  // Put the characters in multiset1 into list2:
  list<char> list2 = make< list<char> >("on forever!!!! Show must go");
  for (i = list2.begin(); i != list2.end(); ++i)
    multiset2.insert(*i);  // ���ڸ� �ϳ��� �ֽ��ϴ�. �ߺ����

  allout("> multiset1{}= ", multiset1 )  ;
  allout("> multiset2{}= ", multiset2 )  ;
  if( multiset1 == multiset2)  cout << " ����. " ;
  else  cout << "�ٸ�.  " ;

  return 0;

} // end of main()
