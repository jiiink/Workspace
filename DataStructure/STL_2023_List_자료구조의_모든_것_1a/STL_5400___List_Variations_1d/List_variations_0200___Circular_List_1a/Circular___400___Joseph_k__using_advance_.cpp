#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;

int main(){

     list<int> people(16) ;
     int jump = 3 ;  // �ǳʶٴ� jump�� ĭ�� ���� ���� ��.

     iota( people.begin(), people.end(), 1 ) ; // 1���� 11���� ���������� ä��
     mout("������ []=", people ) ;

     auto here = people.begin() ;

     while( people.size() >= 2) {
         // cout << "\n people.size( )=" << people.size() ;
         for(int i=1 ; i <= jump ; i++){
             here++ ;
             if( here == people.end() ) {
                    cout << " *end" ;
                    here = people.begin() ;
                    i-- ; // �� ĭ �ڷ� ����.
             }
         }

         cout << "\n *here = " << *here ;

         here = people.erase( here ) ;
         if( here != people.end()) here--;  // ��������. !
         mout("\n ������ people[] =", people ) ;

     } // end of while()
     cout << "\n Final One ==> " << people.front()  ;

} // end of main()
