#include <bits/stdc++.h>
using namespace std;


int main() {
 int i, num ;

 vector  <string> food { "��", "��", "��", "��", "��", "��", "��" };

 auto it = find( food.begin(), food.end(), "��" ) ;
 cout << "*it = " << *it << endl ;
 cout << " ��ġ = [" << it-food.begin() << "] ��° " << endl ;

 it = find( food.begin(), food.end(), "¯¯��" ) ;
 if( it == food.end() ) cout << "find()�� ã������ ���Ұ� �����ϴ�.";
 else {
     cout << "*it = " << *it << endl ;
     cout << " ��ġ = [" << it-food.begin() << "] ��° " << endl ;
 }

} // end of main()

