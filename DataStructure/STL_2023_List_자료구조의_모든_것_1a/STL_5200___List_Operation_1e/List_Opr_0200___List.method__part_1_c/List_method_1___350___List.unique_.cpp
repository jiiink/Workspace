#include <bits/stdc++.h>
using namespace std;

#define allout(MSG,X) std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<" "

int main() {

     cout << "\n List sorting�� �ߺ����� ����(unique)" << endl ;
	 list <string> lia = { "banana" , "coffee", "apple", "tomato", \
	                       "banana", "apple", "apple", "apple", "coffee", "banana"};
	 list <string> lib = { "cat" , "dog", "tiger", "bear", "dragon", "pig", "horse" };
     list <string> lic, lid ;
     list <int>  Lx = { 17, 6, 7, 9, 17, 9, 20, 20, 5, 20, 19, 18, 17} ;

     allout("���� ����Ʈ= ",lia);
     lia.unique();      allout("\n0. unique�� List-a",lia);
     // ������ ���Ҹ� ����Ѵ�.

	 lia.sort();        allout("\n1. sort�� List-a:",lia);
	 lib.sort() ;       allout("\n2. sort�� List-b:",lib);
     lia.unique();      allout("\n3.  lia.unique(): ",lia);
     // �ݵ�� ������ �� ������ unique( )�� ����

     Lx.sort();
     Lx.unique();
     allout("\n4. unique�� Lx= ", Lx );

} // end of main()





