#include <bits/stdc++.h>
using namespace std;

int main() {

  vector <string> svec {"��", "��","��","��","��","����","��","�밡��","�밡��" } ;
  stack  <string> s, summer ;


  cout << "\n 1. ���� Stack size( ) = " << s.size() << endl;
  for (auto w : svec ) s.push( w ) ;


   int i = 0 ;
   while (!s.empty()) {
     printf( "\n [%2d] = %s", i++, s.top().c_str() )  ; // ��printf���� string�� .c_str( )�� ��ȯ
     s.pop();
  } // end of while( )


  cout << "\n 2. ���� Stack size( ) = " << s.size() << endl;
  return 0;
}
