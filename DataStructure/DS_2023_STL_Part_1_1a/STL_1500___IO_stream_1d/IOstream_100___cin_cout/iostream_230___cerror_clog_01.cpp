// >a.exe > g.txt�� �ϸ� stdout���� ������ ������
//  g.txt�� �ƹ��͵� ��µ��� �ʴ´�.

#include <iostream>

using namespace std;

int main( ) {

   cout << "��¥ output " ;
   cerr << "\n An error occured in cerr file:";
   clog << "\n An error occured";

   return 0;
}
