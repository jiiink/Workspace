// �Ųٷ� ���ư��� ���

#include <bits/stdc++.h>
#define Outlist(msg,lx)  cout<< "\n--" << msg<<": " ; for(auto w : lx ) cout<< " " << w ;
using namespace std;

int main () {
  list< string > mylist ({"K", "O", "R", "E", "A", "N" });
  list< string >::reverse_iterator rit ;

  cout << "mylist forwards:";
  for ( auto fit=mylist.begin(); fit!=mylist.end(); ++fit)
    cout << ' ' << *fit;



  cout << "\n\nmylist backwards:";
  for ( rit=mylist.rbegin(); rit!=mylist.rend(); ++rit)
    cout << ' ' << *rit;

  cout << '\n';

  cout << "\n ù���� = " << *mylist.begin() ;
  auto wit = mylist.end() ;

  cout << "\n �� ���� = " << *(--wit) ;
  cout << "\n ������ ù ����.= " << *mylist.rbegin() ;

  auto zit = mylist.rend() ;
  cout << "\n ������ ������., = " << *(--zit) ;


  list< string > kword ({"��", "��", "��", "��", "��", "��", "��" });
  cout << "\n kword�� ù����[]= " << *kword.begin() ;
  cout << "\n kword�� ������[]= " << *kword.rbegin() ;
  return 0;
}
