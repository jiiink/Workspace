// ����Ʈ������ generic�� ����� �� ����.

#include <iostream>     // cout
#include <algorithm>    // sort
#include <list>
#define showall(HEAD,X)      cout<<"\n\n"<<HEAD;cout<<"\n";for(auto w : X) cout<< w << " , ";
using namespace std ;

bool myfun (string s1, string s2 ) { return (s1.back() < s2.back() ) ; }

struct myclass {
  bool operator() (string i, string  j) { return (i > j);}
} myobject;

int main () {

  list <string> kstr { "�̴�ȫ", "�ҳ���", "������", "����", "�㹮��","�ڼ���" } ;
  list <string> estr { "banana", "tomaten", "apple", "mango", "papaya","coconut" } ;


  showall("������ ", estr ) ;
  estr.sort() ;
  showall("������ ", estr ) ;
  estr.sort( myfun ) ;
  showall("myfun( ) ������ ", estr ) ;

  estr.sort( myobject ) ;
  showall("myobject( ) ������ ", estr ) ;

  return 0;
}
