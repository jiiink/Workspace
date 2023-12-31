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
#define mout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;
using namespace std;

int main(){

     string sa = "Computer-123456-XYZ" ;
     list <char> la ( sa.begin(), sa.end()) ;
     list <char>::iterator it0, it1,it2 ;

	 cout << "\n\n ���� ��: " ;
     mout("la[]= ",la);

	 cout << "\n\n ���� : �ڱ� �ȿ��� �߶� ���̱� " ;

	 it1 = la.begin(); advance(it1,  5) ;  // 5ĭ ������
	 it2 = la.end()  ; advance(it2, -5) ;  // 5ĭ �ڷ�

     list <char> ltemp( it1, it2 ) ; // ����Ʈ�� �Ϻθ� �����ؼ� ���� ����
     mout("ltemp[]= ", ltemp ) ;

     it0 = la.begin() ; it0++ ; it0++; it0++ ;

	 la.splice( it0 ,          la,         it1,         it2 ) ;
	 //         �� ��ġ��   �� ����Ʈ��      �������     ��������� �߶� �Űܶ�.
	 mout("\n\n ��ü �̵� �� \n la[]= ", la ) ;
	 cout << "\n\n\n" ;


} // end of main( )

