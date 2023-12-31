// ���α׷��Ӱ� ���ϴ� ����� �����ϴ� sort algorithm example
// ������ �ƴ� �Ϲ����� ��ü�� ���ؼ� sorting�� �� �ִ� ��� ���

#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

bool myfunc (int i,int j)   { return ((i%10)<(j%10)) ; }

bool strfunc  (string si, string sj)   { return ( *(si.end()-1)< *(sj.end()-1) ) ; }

struct myclass {
  bool operator() (int i,int j) { return ((i%10) > (j%10))   ; }
} myobject;

int main () {

  vector   <int> myvector {332, 711, 15, 496, 803, 74, 274, 9 };
  vector<string> mystr    {"some" , "day", "pizza", "beer", "bottle", "pusan" };

  // Default �Ϲ����� �� (operator <):
  sort (myvector.begin(), myvector.end() );
  allout("\n default sorting = ", myvector ) ;

  // ���� ������ boolean �Լ���� ��
  sort (myvector.begin(), myvector.end(), myfunc );
  allout("\nBy myfunc( ) = ", myvector ) ;

  // ���� ������ Ŭ�������� ������ ������� ��
  sort (myvector.begin(), myvector.end(), myobject);
  allout("\n������ Ŭ����= ", myvector ) ;

  sort (mystr.begin(), mystr.end(), strfunc );
  allout("\n���ڿ� ������� ����= ", mystr ) ;


  return 0;
}
