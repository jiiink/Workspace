#include <bits/stdc++.h>
using namespace std;


int main() {
 int i, num ;

 vector <int>   intvec { 34, 23, 99, -100, 1, 3, 55 };
 int    arr[]  { 1,2,3,4,5 };
 set    <string> myset { "��", "��", "��", "��", "��", "¯", "��" };
 map    <int,string> mymap { {0,"zero"}, {1,"one"}, {2,"two"} };


 cout << "\n ����01 begin()   = "       << *intvec.begin() ;
 cout << "\n ����02 *(begin()+2) = "    << *(intvec.begin()+2) ;
 cout << "\n ����03 *begin() + 2  =  "  << *intvec.begin() + 2 ;
 cout << "\n ����04 *(end()-1) = "      << *(intvec.end()-1) ; // ������ ���Ҵ� end()-1
 cout << "\n ����05 *(end()-2) = "      << *(intvec.end()-2) ;
 //cout << "\n ����06  end() �� ��ü  = "  << intvec.end() ;
 printf("\n ����06  end() �� ��ü  = %x",intvec.end() ) ;

 cout << "\n ����07  *end() ��      = "  << *intvec.end() ;
 cout << "\n ����08 front( ) �� ��ü  = "  << intvec.front() ;
 cout << "\n ����09 back() �� ��ü  = "    << intvec.back() ;

 // cout << "\n ���տ��� iterator�� �������� ���� = " << *myset.begin() ;
 // �ֳ��ϸ� ������ ������ �ִ� �ڷᱸ���� �ƴϱ� �����̴�.

} // end of main()

