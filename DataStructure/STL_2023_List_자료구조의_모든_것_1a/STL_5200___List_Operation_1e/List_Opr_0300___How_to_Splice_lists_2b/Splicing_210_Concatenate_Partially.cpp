// ����Ʈ ���̱� , �����
#include <bits/stdc++.h>
#define myout(msg,x)  cout<< "\n" << msg << ":"; for(auto s : x) cout << " " << s ;
using namespace std;


int main() {

  list<int> templist = { -10, -20, -30, -50 };
  list<int>::iterator it ;
  list<int> list1= {22, 33, 44, 55, 66, 77, 88, 99, 100, 200};
  list<int> list2= { 2,  3,  4,  5,  6,  7,  8,  9,  10,  20};

  myout( "\n list1= ",  list1 ) ;
  myout( "\n list2= ",  list2 ) ;

  cout << " \n\n list2��  list1 �ڿ� ����. �׸��� list2�� ��������." ;
  list1.splice( list1.end(), list2 ) ;
  myout( "\n list1= ", list1 ) ;
  myout( "\n list2= ", list2 ) ;

  it= list1.begin() ;
  advance(it,5);

  templist.splice( templist.begin(), list1, list1.begin(), it  ) ;
  // Ư�� �κ��� �߶� ���� ������ 4���� ������ �ʿ��ϴ�.

  cout << " \n\n templist�� list1�� ó������ it������ ���Ҹ� ���� " ;
  myout( "\n templist= ", templist ) ;
  myout( "\n list1= ", list1 ) ;
  return 0;
}
