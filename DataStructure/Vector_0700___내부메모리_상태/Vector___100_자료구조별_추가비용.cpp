#include <bits/stdc++.h>
using namespace std ;

// vector�� �غ�� ������ �������� ��ü�� relocation�� �Ѵ�.
// �׷��� ���α׷��ӿ����� �Ѹ��� ���� ����.
// �̰��� vector�� �̴�(virtue) �̶�� �Ѵ�.
int main() {

  vector< int      > Zvec ;
  array <int,    10> Arr10;
  array <double, 10> Drr10;

  cout << "sizeof(vector<int>) = " << sizeof(vector<int  >) << endl;
  cout << "sizeof(stack <int>) = " << sizeof(stack <int  >) << endl;
  cout << "sizeof(map<int,int>) = " << sizeof(map<int,int  >) << endl;
  cout << "sizeof(list  <int>) = " << sizeof(list  <int  >) << endl;
  cout << "sizeof(array <int>) = " << sizeof(array <int,0>) << endl;


  cout << "sizeof(Zvec) = " << sizeof(Zvec) << endl;

  cout << "sizeof(Arr10) = " << sizeof(Arr10) << endl;
  cout << "sizeof(Drr10) = " << sizeof(Drr10) << endl;

} // end of main()
