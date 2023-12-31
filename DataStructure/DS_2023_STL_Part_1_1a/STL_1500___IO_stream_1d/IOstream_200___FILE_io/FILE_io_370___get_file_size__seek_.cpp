#include <fstream>
#include <iostream>
#include <string>
using namespace std ;

int main() {

  ifstream in("people.txt");
  string s;

  if (in.is_open()) {
    in.seekg(0, ios::end);   // ��ġ �����ڸ� ���� ������ �ű��.

    // �׸��� �� ��ġ�� �д´�. (������ ũ��)
    int size = in.tellg();
    cout << "\n size = in.tellg() = " << size << endl ;

    s.resize(size);   // �� ũ���� ���ڿ��� �Ҵ��Ѵ�.
    in.seekg(0, ios::beg);  // ��ġ �����ڸ� �ٽ� ���� �� ������ �ű��.
    in.read(&s[0], size); // ���� ��ü ������ �о ���ڿ��� �����Ѵ�.
    cout << s << endl;
 }
 else {
        cout << "������ ã�� �� �����ϴ�!" << endl;
 }

  return 0;
}
