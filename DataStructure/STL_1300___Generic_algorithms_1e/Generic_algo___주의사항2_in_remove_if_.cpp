#include <iostream>     // cout
#include <algorithm>    // remove
#include <vector>
#define allout(msg,X) cout<<"\n\n"<<msg<<"\n";for(auto w:X) cout << w << " "
using namespace std;

/*
���� (first ���� last �� ����) ���� ���ҵ� �߿��� val �� ���� ��ġ�ϴ� ����(remove)��
Ȥ�� ���� p �� �����ϴ� ����(remove_if)�� ������ ������ ��ȯ�մϴ�.
�� �� �� �Լ��� �ش� ������ �� ���� ����Ű�� �ݺ��ڸ� �����մϴ�.

����� �� �Լ��� ������ ���Ҹ� �����ϴ� ���� �ƴմϴ�. �ٸ�, ������ �ϴ�
���ҵ��� �����̳� �� �ڷ� �������� ���Դϴ�.

��, �� �Լ��� �����ϴ� �ݺ��� ���� last ���� ���ҵ��� �ٷ� val �� ��ġ�ϴ�
���ҵ�� ��ü�˴ϴ�. ����, ������ ������ �����ϴ� ���ҵ��� ���� ������ ���ؼ���
�߰������� �����̳ʵ��� erase �Լ��� ȣ���ؾ� �մϴ�.

�������� ���� ���ҵ��� ����� ��ġ�� �����˴ϴ�. ������, ������ ���ҵ��� �����
��ġ�� ��� �������� ������� �ʽ��ϴ�.
�� �Լ��� operator== �� �̿��ؼ� ���Ҹ� ���մϴ�.
*/

bool mycond(int w){
    return( (w == 20) ) ;
}

int main () {

  vector<int> my {10,20,30,30,20,10,10,20};
  allout("���� vector v[]: ", my ) ;


  // ���� ���� ����
  // �Ʒ��� ���� �ϸ� �ȵȴ�. �ֳ��ϸ� �߰��� begin( ), end( )�� �ٲ�� �����̴�.
  //auto pend = remove_if ( my.begin(), my.end(), mycond );
  // �̷��� ������ �����ؾ� �Ѵ�. :
  auto pbegin = my.begin();                          // ^
  auto pend   = my.end() ;  // ^
  remove_if ( pbegin, pend,  mycond );
  allout("remove_if( ) ���� vector v[]: ", my ) ;
  return 0;
}
