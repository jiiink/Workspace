#include <bits/stdc++.h>
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;
using namespace std;

int main(){

     string sa="computer", sb="StarCraft" ;
     list <char> la (sa.begin(), sa.end() ) ;
     list <char> lb (sb.begin(), sb.end() ) ;

     myout("splicing( ) �� la[]= ", la) ;
	 myout("splicing( ) �� lb[]= ", lb) ;
	 cout << "\n\nSplicing�� �ϸ� �߶� ���̴� �۾��� �Ѵ�. ���簡 �ƴ϶�.\n" ;
	 la.splice( la.end(), lb ) ;
	 myout("splicing( ) �� la[]=", la) ;
	 myout("splicing( ) �� lb[]=", lb) ;

	 // lb�� ���̿� ������� ������ �ð��� �ɸ�.

} // end of main( )

