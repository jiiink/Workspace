// ���Ǻ� ������ �ǽ� (���ϴ� �κи� ������ ��. )
// �ϳ��� �ҽ����� �پ��� exe�� ����� ��.

#include <iostream>
#include <cstdlib>

using namespace std;

void pause(void);  // Function Prototypes
#define DEBUG 1    // 1 for true  (i.e. DEBUG on)
                   // 0 for false (i.e. DEBUG off)

int age ;
int days ;

int main(void) {   // Input

#if DEBUG
    cout << "\n �� ���̸� �Է��Ͻÿ�: ";
    cin >> age;
#else
  cout << "\n  ����� ���̸� �԰��Ͻÿ�:  ";
  cin >> age;
#endif


#if DEBUG
    cout << "\n ���� ��ӿ��� ���� ��ƿ� ���� = " << age*365 << "�Դϴ�." << endl ;
#else
   cout << "\n �ۿ������� Code ��ƿ� ���� = " << age*365 << "�Դϴ�." << endl ;
#endif



  return 0;
}



void pause(void) {
  cout << "\n\n";
  system("PAUSE");
  cout << "\n\n";
  return;
}

