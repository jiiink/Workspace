#include <bits/stdc++.h>
using namespace std;

#define allout(MSG,X)   cout<<"\n"<<MSG<<"\n";for(auto w:X)cout<<w<<","

int main() {
 int i, num ;
 string mystr ;
 vector <string> v1;
 vector <double> v2( 10, 0.0 );
 vector   <int>  v3(100, 2016);

 mystr = "������" ;
 v1.push_back("Banana") ;
 v1.push_back("Tomato") ;
 v1[0] = "gorilla" ;
 v1.push_back( mystr ) ;

 // �̰��� ������ �ȵ˴ϴ�. �� �ϱ�� ?
 // v1[100]= "Dog Pig" ;

 v2[0] = 345.678   ;
 v2[7] = -68.902   ;

 allout("\n v1�� ������ ��� �� ", v1 ) ;
 allout("\n v2�� ������ ��� �� ", v2 ) ;

 // ����: ���� ���� ���ҿ� ������ ���� �� ���� ������ ���⳪�� ?
 // v3[102] = 12345 ;

} // end of main()  )

