#include <bits/stdc++.h>  //�ڵ����� �� ���
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "

using namespace std ;



int main() {
   array<int,  2> apple  ;
   array<int,  7> banana ;
   array<int, 10> mango, tango ;


   banana= {4, 5, 6} ;  // �̰� �ȴٴϱ��.. ������ C������ �޵� ���ٴ� ��
   allout ( "banana[] = ", banana ) ;

   //apple = banana ; // ��Ұ� �����ϸ� �ȵ˴ϴ�.

   mango = {11, 12, 13, 14} ;
   tango = mango ;
   tango.back() = -100 ;
   allout ( "mango[] = ", mango ) ;
   allout ( "tango[] = ", tango ) ;
}

/*
   int sum = 100 ;
   for(auto &w: *mymy ){
       w = ++sum ;
       cout << w << "\n" ;
   }

*/
