#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;

int main(){

     list<int> people(16) ;
     int jcount, jump = 3 ;  // �ǳʶٴ� jump�� ĭ�� ���� ���� ��.

     iota( people.begin(), people.end(), 1 ) ; // 1���� 11���� ���������� ä��
     mout("������ []=", people ) ;

     auto here = people.begin() ;

     while( people.size() > 1) {
         jcount = 0 ;
         while( jcount < jump ) {
             here++ ;
             if( here == people.end() ) {
                    cout << " *end" ;
                    here = people.begin() ;

             } else jcount++ ;
         }

         cout << "\n *here = " << *here ;

         if( here == people.begin())
         here = people.erase( here ) ;
         if( here != people.end()) here--;  // ��������. !
         mout("\n ������ people[] =", people ) ;

     } // end of while()
     cout << "\n Final One ==> " << people.front()  ;

} // end of main()
