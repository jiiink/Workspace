#include <bits/stdc++.h>
using namespace std;


int main() {
 int i, num ;

 vector <int>   intvec { 11, 12, 13, 14, 15, 16, 17 };


 cout << "\n ����01 = "  << *(intvec.begin()+2) ;
 cout << "\n ����02 = "  << *(intvec.rbegin()+1) ;
 cout << "\n ����03 ="   << *intvec.rbegin()+100 ;
 cout << "\n ����04 ="   << *(intvec.rend()-1) ; // ������ ���Ҵ� end()-1
 cout << "\n ����05 ="   << *(intvec.rend()+5) ;
 cout << "\n ����06 ="   << *intvec.rend() ;
 cout << "\n ����07 ="   << *(intvec.begin()+33) ; // ������ ���Ҵ� end()-1
 cout << "\n ����08 ="   << *(intvec.end()-33) ;
 cout << "\n ����09 ="   << *(intvec.rend()-1) ;

// rbegin() rned()�� �������δ� +, -�� ����ؾ� �Ѵ�.

} // end of main()

