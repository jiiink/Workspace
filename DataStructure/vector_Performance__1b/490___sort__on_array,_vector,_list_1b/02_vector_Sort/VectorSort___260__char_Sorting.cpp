// vector���� ������ �� �ִ� �پ��� ����(operator) �� sorting�� ������ ��

#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std ;

int main() {

	char   str1[]= "data segment fault?";
	string str2  = "Very Good";

	vector<char>  vc1(&str1[0], &str1[7]);
	vector<char>  vc3(str2.begin(), str2.end() );


    allout("\n sorting ���� vc1[]= ", vc1 ) ;
    sort( vc1.begin(), vc1.end()) ;  // �ݵ�� ���۰� ���� ��������� �Ѵ�.
    allout("\n sorting ���� vc1[]= ", vc1 ) ;

    allout("\n sorting ���� vc3[]= ", vc3 ) ;
    sort( vc3.begin(), vc3.end()) ;  // �ݵ�� ���۰� ���� ��������� �Ѵ�.
    allout("\n sorting ���� vc3[]= ", vc3 ) ;


    // ���� �����̳ʰ� ����Ʈ��� list.sort( ) �� list ��� �˰����� ����ؾ� �Ѵ�.!!!

	return 0;
} // end of main ( )
