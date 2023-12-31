#include <iostream>
#include <list>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;

void list_by_reference( list<string> &L){  // list ��ü�� �Ѱ��ش�. ��ȭ�� �ݿ���.
  L.push_front("Good");
  return ;
}

void list_by_value( list<string> L){ // list ��ü�� �����Ѵ�. ������ ���������� ����� ���.
  L.push_front("Good");
  return ;
}

// ����Ʈ�� 2���� ������� �Լ��� �Ѱ��ִ� ���� �����մϴ�.
int main() {

     list<string> ls1 = { "cat" , "dog", "tiger", "bear", "dragon", "pig", "horse" };
     list<string> ls2 = { "cat" , "dog", "tiger", "bear", "dragon", "pig", "horse" };

     mout("Before function =", ls1) ;
     list_by_reference( ls1 ) ;
     mout("After 1  function =", ls1) ;

     cout << "\n " ;
     mout("Before function =", ls2) ;
     list_by_value( ls2 ) ;
     mout("After 2  function =", ls2 ) ;


} // end of main( )
