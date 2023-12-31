
#include <iostream>     // std::cout
#include <algorithm>    // std::find_if
#include <vector>       // std::vector
#include <list>

using namespace std ;

int main () {

  int   *p,    myints[] = { 10, 20, 30, 40 };
  vector <int>   myvec    {35,  6, 8,  13, 21, 83,  4} ;
  list   <int > mylist    {43, 32, 54, 13, 65, 50, 17} ;
  vector<int>::iterator vit;
  list  <int>::iterator lit;

  p = find (myints, myints+3, 30);
  cout << "\n >1 : ������ ��ġ : " << p - myints << endl ;
  p = find (myints, myints+3, 99);
  cout << "\n >2 : ������ ��ġ : " << p - myints << endl ;

  vit = find ( myvec.begin(), myvec.end(), 83);
  cout << "\n >3 : vit������ ��ġ : " << vit - myvec.begin()  << endl ;
  cout << "\n >4 : vit������ ��  : " << *vit << endl ;

  vit = find ( myvec.begin(), myvec.end(), 99);
  cout << "\n >5 : vit������ ��ġ : " << vit - myvec.begin()  << endl ;
  cout << "\n >6 : vit������ ��  : " << *vit << endl ;

  lit = find ( mylist.begin(), mylist.end(), 65);
//  cout << "\n >7 : lit������ ��ġ : " << lit - mylist.begin()  << endl ;
// list������ ���Ұ� ���������� ������ �־� �Ÿ� ����� �ȵ˴ϴ�.
  cout << "\n >8 : lit������ ��  : " << *lit << endl ;

  lit = find ( mylist.begin(), mylist.end(), 99);
  if (lit == mylist.end()) cout << "\n List�� ������" ;
  cout << "\n >9 : ���� �� lit������ ��  : " << *lit << endl ;
  return 0;
}
