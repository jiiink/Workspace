#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;

int main(){

  vector <string>  sulpan = { "����", "����", "�κ�" } ;

  sulpan.push_back( "���ɸ�" ) ;
  allout("Step 1: ", sulpan ) ;

  //  sulpan.push_front( "���ɸ�" )  // �̰� �ȵ�, �̰��ϸ� �ʳ׵� ������...
                                     // �տ� �ִ� ���� deque���� ����


  sulpan.push_back( "��â" ) ;
  allout("Step 2: ", sulpan ) ;
  sulpan.push_back( "��������" ) ;
  allout("Step 3: ", sulpan ) ;
  auto w = sulpan.back() ;
  cout << "\n ��Ʈ�Ӹ� ����= " << w ;
  sulpan.pop_back( ) ;
  allout("Step 4: ", sulpan ) ;

}//End of Main
