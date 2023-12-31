
/*
����) std::string�� ��ҷ� ������ std::vector����
"Luna" ��� ���� ã�Ƽ� �ٷ� �տ� "Star"��� ���� �����մϴ�.
���� "Luna"�� ���ٸ� �� ���� ������ �� ���Դϴ�.
*/

#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

  vector<string> VEC = { "Pizza", "Soju", "Luna", "Beer++", "Coke", "Coffee" } ;
  vector<string>::iterator IT = find(VEC.begin(), VEC.end(), "Luna");

  allout( "Vec[1]=", VEC ) ;
  VEC.insert(IT, "Star");
  allout( "Vec[2]=", VEC ) ;

  auto IT2 = std::find(VEC.begin(),VEC.end(),"Foo");
  VEC.insert(IT2, "Orange");
  allout( "Vec[3]=", VEC ) ;
  return 0 ;

} // END OF MAIN( )

