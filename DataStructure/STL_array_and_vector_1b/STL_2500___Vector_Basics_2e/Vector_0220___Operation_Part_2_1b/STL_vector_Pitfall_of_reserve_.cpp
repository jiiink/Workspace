#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std ;


int main () {

        vector< int> PNU = { 11, 12, 13, 14, 15};
        array <int,7> Temp = {51, 52, 53, 54, 55, 56, 57} ;
        allout(" step 1=", PNU) ;

        PNU.reserve(20) ;
        allout(" step 2=", PNU) ; // reserve( )�غ��� �ҿ���ʴϵ���.
        cout << "\n capacity of PNU = " << PNU.capacity() ;

        PNU[10]= -999 ;    // �����
        allout(" step 3=", PNU) ; // reserve( )�غ��� �ҿ���ʴϵ���.
        cout << "\n PNU�� �� ����=" << *(PNU.end()-1)<< "back " << PNU.back() ;;
        cout << "\n capacity of PNU = " << PNU.capacity() ;

        PNU.assign( Temp.begin(), Temp.end()) ;
        allout(" step 4=", PNU) ;

        PNU[5]= 87654321 ;
        allout(" step 5=", PNU) ;

  return 0;
}
