// Demonstrating multiset erase functions
#include <iostream>
#include <cassert>
#include <list>
#include <string.h>
#include <set>
using namespace std;
template <typename Container>
Container make(const char s[])
{
  return Container(&s[0], &s[strlen(s)]);
}
#include <functional>

template <typename Container>
string make_string(const Container& c)
{
  string s;
  copy(c.begin(), c.end(), inserter(s, s.end()));
  return s;
}

void multisetout( string head, multiset<char> T ) {
    multiset<char>::iterator it ;
    cout << "\n >> " << head << " <<\n" ;
    for(it = T.begin(); it != T.end(); it++ )
        cout << "-"<< (*it) ;
} // ����Ʈ�� ���Ҹ� ��� ����ϴ� �Լ�


int main() {

  cout << "Demonstrating multiset erase functions" << endl;
  list<char> list1 = make< list<char> >("There is no distinctly native ");

  multiset<char> multiset1;
  copy(list1.begin(), list1.end(), inserter(multiset1, multiset1.end()));

  multisetout("����1", multiset1 ) ;

  multiset1.erase('a');
  multisetout("����2", multiset1 ) ;

  multiset<char>::iterator i = multiset1.find('e');

  multiset1.erase(i);
  multisetout("����3", multiset1 ) ;

  return 0;
}
