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


  //while( !in.eof()) {  // �̷��� �ϸ� �����ϴ�.
  /*   �� ���� ������ �������� while �� �������� ���� in.eof() ��
  ����ϸ� �ȵȴ�. �ֳ��ϸ� eof �Լ��� ���� ��ġ �����ڰ� ���Ͽ� ����
  ������ ���� �� true �� �����ϱ� �����̴�.
  ���� �� while �� �ȿ��� ������ �޸��� �дٰ� ���� ��(EOF) �ٷ�
  �������� �о��ٰ� ��������. �׷��ٸ� ���� EOF �� ���� �ʾ����Ƿ�
  in.eof() �� ���� ������ ���Դϴ�.
  �� ���¿��� ������ in >> data �� �ϰ� �ȴٸ� data ���� �ƹ��͵�
  ���� �ʰ� �˴ϴ�. �� �ʱ�ȭ�� ���� ���� ���·� �����ְ� �ȴ�.  */

  while( in ) {
     in >> s >> age ;
     cout << "\n Token= " << s  << "  age= " << age ;
  }

  return 0;
}
