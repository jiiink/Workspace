#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG <<" : ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main(){

  vector <string>  sulpan = { "��ġ", "����", "����", "�κ�" } ;

  sulpan.push_back( "���ɸ�" ) ;
  allout(">> sulpan:  ", sulpan ) ;

  while (!  sulpan.empty())   {
      // cout << sulpan.back();
      sulpan.pop_back();
      allout(">> sulpan:  ", sulpan ) ;
  }


}//End of Main
