#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<","
using namespace std;

int main() {

       vector <int>          vec  {  34,  35,  36,  37,  88 };
 const vector <int>    month_days { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

       vector <int>:: iterator viter ;
 const vector <int>:: iterator citer = vec.begin()+1 ;     // ���� ������, ������ ��ü�� �ٲ��� ����,
       vector <int>:: const_iterator coniter = vec.end();  // ������ ������,  ������ ����� ���� �Һ�. �ٲٸ� ������ ��.

       *citer *= -1 ; // iter�� ����Ű�� �ִ� �������� ���� �����ϴ� ���� �����մϴ�.
       //++citer;   // �׷��� iter�� ����Ű�� �ִ� �� ��ü�� ���� �Ұ�.
       allout(" 1. vec[] ���� =", vec ) ;

       coniter = vec.end()-1 ;
       cout << "\n 2. *coniter = " << *coniter ;
       coniter = vec.end()-2 ;  // coniter�� ���� �ٲٴ� ���� ����
       cout << "\n 3. *coniter = " << *coniter ;
       coniter -= 1 ;
       vec[1] *= -10 ;
       vec[2] -= 10000 ;
       allout(" �޷� vec[] ���� =", vec ) ;
       cout << "\n �� *coniter = " << *coniter ;
       // *coniter *= -1 ;  // �׷��� coniter�� ���� �ٲٴ� ���� �Ұ���


       allout(" 4. vec[] ���� =", vec ) ;

       cout << "\n 5. accumulate( vec ) =  " << accumulate( vec.begin(), vec.end(), 0 ) ;
       allout(" 6. vec[] ���� =", vec ) ;
  return 0 ;

} // end of main()

