#include <bits/stdc++.h>
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;
using namespace std;

int main(){

     list <char> la = { 'c', 'o', 'm', 'p', 'u', 't', 'e', 'r' } ;
	 list <char> lx = { 'c', 'o', 'm', 'p', 'u', 't', 'e', 'r' } ;
     list <char> lb = { 'B', 'U', 'S', 'A', 'N' } ;



	 myout(" la[]= ", la) ;
	 myout(" lb[]= ", lb) ;
	 la.insert( la.end(), lb.begin(), lb.end()) ;
	 //           ���⿡   <==============>
	 cout << "\n\n insert( ) �� \n" ;
	 myout(" la[]=", la) ;
	 myout(" lb[]=", lb) ;

	 cout << "\n\nSplicing�� �ϸ� �߶� ���̴� �۾��� �Ѵ�. ���簡 �ƴ϶�.\n" ;
	 la.splice( lx.end(), lb ) ;
	 myout("splicing( ) lx[]=", lx) ;
	 myout("splicing( ) lb[]=", lb) ;

} // end of main( )

