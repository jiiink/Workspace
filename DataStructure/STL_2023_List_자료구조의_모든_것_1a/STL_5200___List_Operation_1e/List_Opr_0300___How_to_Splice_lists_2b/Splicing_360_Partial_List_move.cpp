/* C++ list�� Splicing Operation
entire list (1)
void splice (const_iterator position, list& x);
void splice (const_iterator position, list&& x);

single element (2)
void splice (const_iterator position, list& x, const_iterator i);
void splice (const_iterator position, list&& x, const_iterator i);

element range (3)
void splice (const_iterator position, list& x,
             const_iterator first, const_iterator last);
void splice (const_iterator position, list&& x,
             const_iterator first, const_iterator last); */

#include <bits/stdc++.h>
using namespace std;
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;

int main(){


     list <char> la = { 'w', 'q', 'q', 'r', 'm', 'z', 'a', 'b', 'z' } ;
     list <char> ln = { '1', '2', '7', '8', '9', '0', '4' } ;
	 list <char> ls = { '+', '-', '*', '/', '%', '@' } ;
     list <char>::iterator ita,it1,it2;

	 cout << "\n\n ���� ��: " ;
     myout("la[]= ",la);
     myout("ls[]= ",ls);
	 cout << "\n Lx[]�� �߰��� Lx[a:b] �κ��� �ű� ��: " ;
	 ita = la.begin();
	 it1 = ls.begin() ; it2 = ls.end( ) ;
	 it1++ ;  it2-- ;
     la.splice( ++ita,ls, it1, it2 );
     myout("la[]= ",la);
     myout("ls[]= ",ls);

	 cout << "\n\n ���� 4: �ڱ� �ȿ��� �߶� ���̱� " ;
	 myout("�ڸ��� �� la[]= ", la ) ;
	 it1 = la.end() ; it1-- ;  it1-- ;  it1-- ;  it1-- ;
	 la.splice(++la.begin(), la, it1, la.end() ) ;
	 myout("\n\n �ڸ��� ���� la[]= ", la ) ;

} // end of main( )

