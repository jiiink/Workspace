#include <iostream>
#include <vector>
#include <array>
using namespace std ;

// vector�� �غ�� ������ �������� ��ü�� relocation�� �Ѵ�.
// �׷��� ���α׷��ӿ����� �Ѹ��� ���� ����.
// �̰��� vector�� �̴�(virtue) �̶�� �Ѵ�.
int main() {

  vector< int > Ohmy ;

  cout << "\n �̹��� �̸� ������ array���� �غ��� \n" ;
  for (int i = 0; i < 100; ++i) {
    Ohmy.push_back( i ) ;
    cout << "\n i= " << i << "  " << "head �ּ� = " << &( Ohmy[0]) << " ";
  }


} // end of main()
