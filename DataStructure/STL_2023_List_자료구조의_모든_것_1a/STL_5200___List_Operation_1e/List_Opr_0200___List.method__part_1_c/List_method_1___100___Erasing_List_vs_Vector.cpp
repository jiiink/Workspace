#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

#define mout(msg,C) cout<<"\n"<<msg<<": ";for(auto w:C) cout << " "<<w;

string name ;
int main() {

  list  <int> myl = { 1, 2, 3, 5, 7, 11, 13, 17, 19, 23 }; // prime number ����
  vector<int> myv = { 1, 2, 3, 5, 7, 11, 13, 17, 19, 23 };

  mout( "���� 1", myv ) ;
  for( auto it=myv.begin(); it != myv.end() ; ){
    it = myv.erase(it) ;  // it�� ���� ���� ���Ҹ� return �Ѵ�.
    name = to_string( myv.end() - it) ;
    mout( name, myv ) ;
  }

  mout( "���� 2", myl ) ;
  int count = 0 ;
  for( auto itl=myl.begin(); itl != myl.end() ; ){
    itl = myl.erase(itl) ;  // �ش���� itl�� ���� ���� ������ iterator�� return �Ѵ�.
    mout( to_string(++count) , myl ) ;
  }

  cout << "\n �ٸ� ������� �����ϴ� ��츦 ���캸�� " ;
  myl = { 1, 2, 3, 5, 7, 11, 13, 17, 19, 23 };

  mout( "���� 3", myl ) ;
  count = 0 ;
  for( auto itl=myl.begin(); itl != myl.end() ; ){
    myl.erase(itl++) ;  // �ش���� itl�� ���� ���� ������ iterator�� return �Ѵ�.
    mout( to_string(++count) , myl ) ;
  }

} // end of main()





