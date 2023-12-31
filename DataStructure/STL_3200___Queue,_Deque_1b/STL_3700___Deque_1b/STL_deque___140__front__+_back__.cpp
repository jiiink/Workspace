// �������� �� ���� ���� �շ��ִ� deque ����
// Adaptor�� �̿���  ��ť�� ������ �����ݴϴ�.
#include <bits/stdc++.h>
#define  OutDeque(msg,x)  cout << "\n " << msg; for(auto w : x) cout << "\n " << w
using namespace std;



int main() {
  string mystr ;

  deque <string> beerbar ;

  beerbar.push_front("Cass") ;
  beerbar.push_front("Ale") ;
  beerbar.push_back ("Stout") ;
  beerbar.push_front("Ginger") ;
  beerbar.push_back ("Mead") ;
  beerbar.push_back ("Pilsner") ;
  beerbar.push_back ("Hite") ;
  beerbar.push_front("Kloud") ;

  // Kloud, Giner, Ale, cass, Stout, Mead, Pilsner, Hite
  cout << "\n [ Kloud, Ginger, Ale, cass, Stout, Mead, Pilsner, Hite ] \n" ;
  mystr = beerbar.back();
  cout << "\n ���� �ڿ� �ִ� ���� = " << mystr ;
  cout << "\n deque�� ũ�� beerbar.size() " << beerbar.size() ;
  OutDeque( "���",  beerbar) ;

  beerbar.pop_back();
  mystr = beerbar.back();
  cout << "\n pop_back() ���� ���� �� ����" << mystr ;
  cout << "\n deque�� ũ�� beerbar.size() " << beerbar.size() ;

  beerbar.pop_front();
  mystr = beerbar.front();
  cout << "\n \n pop_front() ���� ���� �� ���� " << mystr ;
  cout << "\n deque�� ũ�� beerbar.size() " << beerbar.size() ;


  return 0;
} // end of main( )
