// ���Ͽ����� �����
#include <fstream>
#include <iostream>
#include <string>
using namespace std ;


int main() {

  string fname, s ;
  int age ;

  fname = "people.txt" ;

  ifstream in( fname );
  if (in.is_open()) cout << "������ ã�ҽ��ϴ�" ;
  else  cout << "������ ã�� �� �����ϴ�!" << endl;


  while( !in.eof()) {
     in >> s >> age ;
     cout << "\n Name= " << s  << " age= " << age*100 ;
  }

  return 0;
}
