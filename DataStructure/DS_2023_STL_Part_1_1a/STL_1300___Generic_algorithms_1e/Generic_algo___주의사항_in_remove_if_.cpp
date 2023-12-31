#include <iostream>     // cout
#include <algorithm>    // remove
#include <vector>
#define allout(msg,X) cout<<"\n\n"<<msg<<"\n";for(auto w:X) cout << w << " "
using namespace std;

bool mycond(int w){
    return( (w == 20) ) ;
}

int main () {

  vector<int> my {10,20,30,30,20,10,10,20, 45};
  allout("���� vector v[]: ", my ) ;


  // ���� ���� ����
  // �Ʒ��� ���� �ϸ� �ȵȴ�. �ֳ��ϸ� �߰��� begin( ), end( )�� �ٲ�� �����̴�.
  //auto pend = remove_if ( my.begin(), my.end(), mycond );
  // �̷��� ������ �����ؾ� �Ѵ�. :
  auto pbegin = my.begin();                          // ^
  auto pend   = my.end() ;  // ^
  auto itcut = remove_if ( pbegin, pend,  mycond );
  cout << "\n�� ��ġ = " << itcut - pbegin  ;
  cout << "\n*itcut= " << *itcut ;
  allout("\nremove_if( ) ���� vector v[]: ", my ) ;
  return 0;
}
