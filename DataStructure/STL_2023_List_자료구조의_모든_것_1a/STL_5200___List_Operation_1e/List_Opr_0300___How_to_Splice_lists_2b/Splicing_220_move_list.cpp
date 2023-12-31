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
	 list <char> ls = { 'A', 'B', 'C', 'D', 'E' } ;
     list <char>::iterator ita,it1,it2;

     cout << "\n ����  0: ���� �� ��ü ����Ʈ:" ;
     myout("la[]= ",la);myout("ln[]= ",ln);

	 cout << "\n\n ���� 1: ��ü ����Ʈ�� Ư�� ����Ʈ�� �߰����� �ű�� " ;
     ita=la.begin();ita++;ita++;
 	 la.splice(ita,ln); // ����Ʈ la�� ita ��ġ�� ln�� ��â �Űܶ�. �׶�� ln�� ?
     myout("la[]= ",la);myout("ln[]= ",ln);

     la = { 'w', 'q', 'q', 'r', 'm', 'z', 'a', 'b', 'z' } ;
     ls = { 'A', 'B', 'C', 'D', 'E' } ;
     cout << "\n\n ���� 2: ����Ʈ�� �� ���Ҹ� �̾Ƽ� �ű��" ;
     myout("la[]= ",la);myout("ls[]= ",ls);
     ita=la.begin();ita++;ita++;
     it1=ls.begin();it1++;it1++;
     la.splice( ita, ls, it1);  // la�� ita ��ġ�� list ls�� it1 ���Ҹ� ���� �Űܶ�.

     cout << "\n\n �� ���Ҹ� �̾Ƽ� �ű� �� ���� ��� : " ;
     myout("la[]= ",la);myout("ls[]= ",ls);


} // end of main( )

