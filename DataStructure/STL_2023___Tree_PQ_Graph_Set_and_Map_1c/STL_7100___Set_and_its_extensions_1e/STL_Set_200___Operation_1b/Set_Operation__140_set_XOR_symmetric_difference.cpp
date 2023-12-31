#include <iostream>     // cout
#include <algorithm>    // set_intersection, sort
#include <vector>       // vector
#include <set>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" : ";for(auto w:X)cout<<w<<", "
using namespace std ;

int main () {

  set<int> s1 { 50,40,30,20,10, 25};
  set<int> s2 { 34, 5,10,15,40, 25};
  set<int> s3  {-99 }, s4 ;                      // 0  0  0  0  0  0  0  0  0  0
  set<int>::iterator it;

  allout("�غ� s1{}= ", s1) ;
  allout("�غ� s2{}= ", s2) ;
  allout("�غ� s3{}= ", s3) ;

  // �ڿ��� �� inserter( )�� �� ��ġ�� �־�� �Ѵ�.
  // ���������� ���� ���Ҹ� ���ϴ� ���տ� "��" �־�� �Ѵ�.
  set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
                              std::inserter( s3, s3.end()));
  allout("��� s1 AND s2 = s3{}= ", s3) ;

  set_symmetric_difference (s1.begin(), s1.end(), s2.begin(), s2.end(),
                              std::inserter( s4, s4.end()));
  // ����� ������� ���, Me XOR Me = {  }
  // ��Ű� �״밡 ��� ��Ƴ��� ���, You XOR Me = { You, Me }

  allout("��� s1 XOR s2 = ", s4) ;






  return 0;
}
