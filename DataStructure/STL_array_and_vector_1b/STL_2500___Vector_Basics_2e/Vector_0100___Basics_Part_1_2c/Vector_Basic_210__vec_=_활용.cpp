#include <bits/stdc++.h>  //�ڵ����� �� ���
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "

using namespace std ;



int main() {

      vector<int> apple  ;
      vector<int> banana ;
      vector<int>  mango, tango ;


      banana= {4, 5, 6} ;  // �̰� �ȴٴϱ��.. ������ C������ �޵� ���ٴ� ��
      allout ( "banana[] = ", banana ) ;

      mango = {11, 12, 13, 14} ;
      tango = mango ;
      tango.back() = -100 ;
      allout ( "mango[] = ", mango ) ;
      allout ( "tango[] = ", tango ) ;


}


