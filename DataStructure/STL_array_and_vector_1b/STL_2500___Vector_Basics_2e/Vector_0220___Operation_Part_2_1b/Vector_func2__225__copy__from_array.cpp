#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

	array<int,7> marray = {3, 4, 5, 6, 7, 8, 9} ;
	vector <int> tvect(8) ;


	allout( "1. marray[]=", marray ) ;
	allout( "2. tvect[ ]=" , tvect ) ;

	copy( marray.begin(), marray.end()-3, tvect.begin() ) ;
	// ���縦 ���� ������ �̸� Ȯ���Ǿ�� �Ѵ�. ������ ������ �߻�.

	allout( "3. marray[]=", marray ) ;
	allout( "4. tvect[ ]=" , tvect ) ;

} // end of main()
