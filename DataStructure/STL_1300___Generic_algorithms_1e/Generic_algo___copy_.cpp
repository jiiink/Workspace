
#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "
using namespace std ;



int main () {
  vector<int> vec1 { 91, 92, 93, 94, 95, 96, 97, 98, 99, 100 };
  vector<int> vec2 (7);  // ���� ����.... copy�� ����� �ݵ�� ũ�Ⱑ ������ �־�� �Ѵ�.
  vector<int> vec3 (3);
  vector<int> vec4 (12);

  copy ( vec1.begin()+1, vec1.end()-3 , vec2.begin() );
  copy ( vec1.begin()+1, vec1.end()-3 , vec3.begin() );
  copy ( vec1.begin()+1, vec1.end()-3 , vec4.begin() );

  allout( " vec1[]= ", vec1 ) ;
  allout( " vec2[]= ", vec2 ) ;
  allout( " vec3[]= ", vec3 ) ;
  allout( " vec4[]= ", vec4 ) ;


  return 0;
}
