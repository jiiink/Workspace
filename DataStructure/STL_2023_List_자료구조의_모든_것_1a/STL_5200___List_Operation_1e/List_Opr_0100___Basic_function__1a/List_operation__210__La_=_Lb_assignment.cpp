
#include <bits/stdc++.h>
#define allout(MSG,X)   std::cout<<"\n"<<MSG<<" ";for(auto w:X)std::cout<<w<<", "
using namespace std;


int main() {

  list <int> la, lb, lc = {11, 22, 33, 44, 55, 66, 77 };
  allout("1. la[] = ", la) ;
  allout("1. lb[] = ", lb) ;
  allout("1. lc[] = ", lc) ;

  la = lc ; // python���� �ٸ��� ��ü ����� �����Ѵ�. ���ο� list ��ü�� ����.
  lb = lc ;

  cout << "\n After List copying \n" ;
  lc.pop_front();
  allout("2. la[] = ", la) ;
  allout("2. lb[] = ", lb) ;
  allout("2. lc[] = ", lc) ;


  return 0;
}
