// �پ��� ������ hashing �ϱ�

#include <iostream>
#include <iomanip>
#include <functional>
#include <string>
#include <vector>
using namespace std ;


int main () {

   // �ӫ�, ���, �Ϻ���� ���ָ� �ǹ��Ѵ�. �Ϻ������� ������ ��� ���ֵ� ���
  vector < string > sdata = { "�ӫ�", "good", "������", "will", "be", "�λ갥�ű�" } ;
  vector < int > hchain ;

  hash < string > str_hash; // ����� ���� , �Է��� string hash( string) -> Z

  for( auto w : sdata ) {
      auto hashed = str_hash( w ) ;
      hchain.push_back( hashed ) ;
      cout << "\n hash( " << setw(10) << w << " )= " << hashed ;
  } ;

  return 0;

} // end of main()

