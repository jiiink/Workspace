
#include <algorithm>  // find
#include <iostream>   // cout
#include <vector>     // vector
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {


  vector<int> vec { 13, 45, 55, 11, 33, 55, 88, 99, 55, -43, 17} ;
  vector<int>::iterator it;

  it = find( vec.begin(), vec.end(), 55);
  cout << "\n ã�� ���� 55�� ��ġ : " << it - vec.begin( ) ;

  it = find( it+1, vec.end(), 55);
  cout << "\n ���� ���� 55�� ��ġ : " << it - vec.begin( ) ;

  return 0;
}
