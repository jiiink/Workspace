#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;

string name ;
int main() {

  list  <int> myl = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
  auto it = myl.begin() ;
  mout("�ʱ� List", myl ) ;

  advance(it, +3) ;
  cout << "\n ���� *it = " << *it ;
  it = myl.erase( it) ;     // �߰����� ���� ������ �� ���� ��带 ����Ų��.
  mout("1. List==> ", myl ) ;
  cout << "\n ���� �� *it = " << *it ;


  it = myl.begin( ) ;
  mout("2. List==> ", myl ) ;     // ù��带 ���� �������� �ٽ� �� ù ��带 ����Ų��.
  cout << "\n head�� ���� �� *it = " << *it ;



  it = myl.end( ) ;
  mout("3. List==> ", myl ) ;     // End( ) dummy�� ���� ����.
  cout << "\n end( ) ���� �� *it = " << *it ;


  it = myl.end( ) ;
  --it;              // ������ ����
  cout << "\n  tail *it = " << *it ;
  it = myl.erase( it) ;
  cout << "\n �� tail�� ���� �� *it = " << *it ;
  mout("4. List==> ", myl ) ;     // ������ ��带 ���� ����.
} // end of main()





