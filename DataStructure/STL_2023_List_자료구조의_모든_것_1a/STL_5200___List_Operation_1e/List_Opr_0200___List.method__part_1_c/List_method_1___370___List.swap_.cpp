#include <bits/stdc++.h>
using namespace std;

// ���� : swap�� pointer�� �ٲٴ� ���̴�.
// memory�� �״�� �д�. ���� �ӵ��� ���� ���������� ?

#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "


int main(){

     list <char> la = { 'w', 'q', 'q', 'r', 'm', 'z', 'a', 'b', 'z' } ;
     list <char> ln = { '1', '2', '7', '8', '9', '0', '4' } ;
	 list <char> ls = { '+', '-', '*', '/', '%', '@' } ;
	 list <char> ldot(10,'.') ;
     list <char>::iterator ita,it1,it2;
     list <int>  LLa = { 114, 115, 116, 117, 119, 120, 130, 140, 150 } ;

     cout << "\n ���� 0: �ʱ���� \n" ;
     allout("���� ����Ʈ�� �ʱ�ȭ ", LLa );

     cout << "\n ���� 1: �ʱ���� \n" ;
     allout("���ĺ�",la);allout("����",ln); allout("DOT",ldot);

	 cout << "\n ���� 2: swap( )���� �ٲ�� \n" ;
	 la.swap( ln ) ;
     allout("swap( ) �� : ���ĺ�",la);allout("swap( ) �� :����",ln);

	 cout << "\n ���� 3: assign()���� ���� ä���\n" ;
	 la.assign( ln.begin(), ln.end() ) ;
     allout("assign() �� ���ĺ�",la);allout("assign() �� ����",ln);




} // end of main( )

