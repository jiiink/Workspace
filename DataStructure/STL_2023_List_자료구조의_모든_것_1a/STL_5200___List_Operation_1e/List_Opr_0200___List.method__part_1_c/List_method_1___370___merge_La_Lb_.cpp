
#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std;

bool mycomp ( string first, string second) {
	return ( first >= second );
	// return( rand()%2 - 1 ) ;
} // �� �Լ�

int main() {

     cout << "\n List�� sorting�ϰ� sort�� �� ���� ��ġ��(merge)" << endl ;

     list <string> lia = { "banana" , "apple", "tomato", "rose", "water", "peanut", "coffee"};
	 list <string> lib = { "cat" , "dog", "tiger", "bear", "dragon", "pig", "horse" };
     list <string> lic, lid, listw ;

	 allout("����",lia);
	 lia.sort();        allout("\n 1. sort�� List-a",lia);  // sort( l.begin(),
 	 lib.sort() ;       allout("\n 2. sort�� List-b",lib);

     // lia.merge( lib ) ; allout("\n 3. Merge�� List-a",lia);
	 merge(lia.begin(), lia.end(), lib.begin(), lib.end(), back_inserter(lic) ) ;
	 allout("\n 3. Merge�� lic",lic);

	 listw = lia ;
	 listw.sort( ) ;

	 listw.merge( lib, mycomp ) ;
	 allout("\n 5. mycomp() ��� Merge�� List-a",lia);

} // end of main()





