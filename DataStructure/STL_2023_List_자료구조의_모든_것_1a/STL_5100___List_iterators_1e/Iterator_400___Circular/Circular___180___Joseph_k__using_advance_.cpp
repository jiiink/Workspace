#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;

int main(){

     list<int> people(11) ;
     list<int>::iterator itlast, itfirst ;
     int jcnt, jump = 3 ;  // �ǳʶٴ� jump�� ĭ�� ���� ���� ��.

     iota( people.begin(), people.end(), 1 ) ;
     mout("������ []=", people ) ;

     auto here = people.begin() ;

     while( people.size() >= 2) {
         jcnt = jump ;
         while( jcnt > 0 ) {
             if( here == people.end() ) here = people.begin() ;
             else { here++ ; jcnt-- ;}

             cout << "\n forward : *here= " << *here ;
         }
         cout << "\n *here = " << *here ;

         itlast = people.end() ;
         --itlast ;
         if ( here == itlast ) { cout << " --- last --- " ;
                                 people.erase( here )  ;
                                 here = people.end() ;
                                 here-- ;
                                }
         else {
                if (here != people.begin()) {
                    here = people.erase( here ) ;
                    here--;
                }
                else {
                    people.erase( here ) ;
                    here = people.begin() ;
                }
         }
         mout("\n ���� people[] =", people ) ;

     } // end of while()

} // end of main()
