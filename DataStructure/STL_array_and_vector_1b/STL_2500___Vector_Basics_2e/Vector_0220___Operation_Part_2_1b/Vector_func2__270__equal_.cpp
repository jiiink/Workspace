
#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

vector<int> vec1{ 1, 4, 5, 22, 33, 2, 11, 89, 49 };
vector<int> vec2{ 1, 4, 5, 22, 33, 2, 11, 89, 49 };
vector<int> vec3{       5, 22, 33                };
vector<int> vec4{       5, 0,  22, 33            };

cout << "\n vector ��ü�� ������ �˻� : " ;
(vec1 == vec2) ? cout << "matched" : cout << " unmatched"  ;


cout << "\n vec3�� vec1( )�Ϻο� ������ �˻�. " ;
equal(vec3.begin(), vec3.end(), vec1.begin() + 2) ? cout <<  "vec3 ��ġ" : cout << " vec3 ����ġ"  ;

cout << "\n vec4�� vec1( )�Ϻο� ������ �˻�. " ;
equal(vec4.begin(), vec4.end(), vec1.begin() + 2) ? cout << " vec4  ��ġ" : cout << " vec4  ����ġ"  ;

} // end of main( )
