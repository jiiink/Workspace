#include <bits/stdc++.h>  //�ڵ����� �� ���
#define allout(MSG,X)   cout<<"\n"<<MSG<<" ";for(auto w:X)cout<<w<<", "

using namespace std ;



int main() {

      vector<int> apple  ;
      vector<int> banana ;
      vector<int>  mango, tango ;

      cout << "\n\n Vector= {a,b,c,d,e} �۾��ϱ� - Python-Like ���� \n" ;
      banana= {4, 5, 6} ;  // �̰� �ȴٴϱ��.. ������ C������ �޵� ���ٴ� ��
      allout ( " banana[] = ", banana ) ;

      mango = {11, 12, 13, 14} ;
      tango = mango ;
      tango.back() = -100 ;
      allout ( "mango[] = ", mango ) ;
      allout ( "tango[] = ", tango ) ;

      cout << "\n\n List= {a,b,c,d,e} �۾��ϱ� - Python-Like ���� \n" ;

      list<int> lapple  ;
      list<int> lbanana ;
      list<int>  lmango, ltango ;


      lbanana= {4, 5, 6} ;  // �̰� �ȴٴϱ��.. ������ C������ �޵� ���ٴ� ��
      allout ( " lbanana[] = ", lbanana ) ;

      lmango = {11, 12, 13, 14} ;
      ltango = lmango ;
      ltango.back() = -100 ;
      allout ( " lmango[] = ", lmango ) ;
      allout ( " ltango[] = ", ltango ) ;


}


