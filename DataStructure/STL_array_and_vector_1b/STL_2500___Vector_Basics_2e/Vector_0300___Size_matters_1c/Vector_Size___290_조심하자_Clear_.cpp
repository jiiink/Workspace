#include <bits/stdc++.h>
using namespace std;
#define allout(MSG,X)   cout<<"\n"<<MSG <<" : ";for(auto w:X)cout<<w<<", "

int main() {
     vector<int> vi {91, 92, 93, 94, 95, 96, 97 };
     cout << "\n front( ) and back( ), " << vi.front( ) << ", " << vi.back() ;

     allout("\n ���� vi[] = ", vi ) ;
     vi.clear() ;

     allout("\n clear( ) �� vi[] = ", vi ) ;
     cout << "\n vi.size()= " << vi.size() ;
     cout << "\n front( ) and back( ), " << vi.front( ) << ", " << vi.back() ;

     // vec.clear( )�� �� �׸��� ������ ��¥�� ����� ���� �ƴ϶�
     // vector iterator�� ������ �۾��� �Ѵ�. ũ�⿡ ������� �� �ð��� O(1).

     cout << "\n ��ü ������ range-based loop���� ���� << \n" ;
     for(auto w : vi){
          cout << "\n vi[] w = " << w ;
     }
     cout << "\n vi[] ------------------- \n" ;

     cout << "\n vi[2] =" << vi[2] ;
     cout << "\n vi[3] =" << vi.at(3) ; // �������� ������ �߻���.
     cout << "\n vi[4] =" << vi[4] ;



} // end of main( )



