
#include <fstream>
#include <iostream>
#include <string>
using namespace std ;


int main() {

  ifstream in("people.txt");
  char buf[100];
  string s ;

  if (!in.is_open()) {  // opne check( )�ϱ�
    cout << "������ ã�� �� �����ϴ�!" << endl;
    return 0;
  }

  while (in) {
    getline(in, s);
    cout << s << endl;
  }

  return 0;
}
