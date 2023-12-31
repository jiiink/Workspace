/*
vector�� ũ�⸦ ���൵�߿� �ٲ�. dynarray( )�� ����� ����.

���� n�� �����̳ʺ��� ������ �϶� �߶����. �������� ����������

n�� ���� ũ�⺸�� Ŀ�ٸ� �������� default 0���� ä��.

If n is also greater than the current container capacity,
an automatic reallocation of the allocated storage space takes place.

�̰� �Լ��δ� �ѹ��� �ҷ����� ���� ��������,
�����δ� �� �ȿ��� STL�� ���Ҹ� �ְ� ����... ������ �۾��� ��.
�� �����ϱ� ������ �� ���� ���� �ƴ�.

*/

#include <bits/stdc++.h>
#define allout(MSG,X)   cout<<"\n"<<MSG <<" : ";for(auto w:X)cout<<w<<", "
using namespace std;



int main () {
  vector<int> myvec {30, 31, 32, 33 };

  myvec.resize(5);
  allout("1. myvec.resize(5)= ",    myvec ) ;

  myvec.resize(8,100);
  allout("2. myvec.resize(8,10)= ", myvec ) ;

  myvec.resize(12);
  allout("3. myvec.resize(12)= ",   myvec ) ;
  cout << "\n size= " << myvec.size() ;

  myvec.resize(0);
  allout("4. myvec.resize(0)= ",   myvec ) ;


  return 0;
} // end of main( )
